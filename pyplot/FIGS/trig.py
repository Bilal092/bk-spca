#! /usr/bin/env python
from matplotlib import pyplot as plt
from numpy import genfromtxt
fig = plt.figure(1)
ax = plt.subplot(111)
x = genfromtxt('trig_x0.dat', dtype='float')
y = genfromtxt('trig_y0.dat', dtype='float')
l, = plt.plot(x,y)
l.set_linestyle('--')
l.set_linewidth(3)
l.set_color('red')
x = genfromtxt('trig_x1.dat', dtype='float')
y = genfromtxt('trig_y1.dat', dtype='float')
l, = plt.plot(x,y)
l.set_linestyle('None')
l.set_marker('o')
l.set_markersize(7) 
l.set_markerfacecolor('black')
ax.axis([0.0000e+00, 1.5000e+01, -2.0000e+00, 2.0000e+00]) 
ax.set_title('sin(x) vs. x', fontsize=20) 
xticks = genfromtxt('trig_xticks1.dat', dtype='float')
ax.set_xticks(xticks)
yticks = genfromtxt('trig_yticks1.dat', dtype='float')
ax.set_yticks(yticks)
plt.show() 