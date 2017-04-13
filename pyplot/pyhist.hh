#ifndef __pyhist04Sept2013__
#define __pyhist04Sept2013__
#include "pyplot.hh"

class PyHist{
private:
	enum pipe_type pipe_state;
	FILE *pypipe;
	char name[30];
	int state;
	char *cmd[MAX_NUM_PYPLT_CMDS];
	char cmdstr[MAX_CMD_PYPLT_LEN];
	int cmdnum;
	int savedata;
	void prep_data(double *x, int n);
	void issue_command(const char* cstr);
public:
	/*
	 * name must be less than 25 chars
	 * pipe == PLTOFF then mpl.backend is PDF
	 */
	PyHist(const char *namei, enum pipe_type pipe=PLTON);//state: 0
	~PyHist();
	void hist(double *x, int n);//state: 0 ---> 1
	void bins(int b); //state: 1 ---> 2
	void title(const char* s); //state: 2 ---> 2
	/*
	 * issues command to python pipe verbatim
	 * last char of s must be '\n'
	 * for python syntax inside s, ax and l are always available as
	 * current axis and current line
	 */
	void pycmd(const char *s); //state: 2 ---> 2
	void show(); //state: 2 ---> 3
	void savescript(); // state: 3 ---> 3
};

#endif

