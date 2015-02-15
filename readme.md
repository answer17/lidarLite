# Overview

This provides a simple interface to the LidarLite.  It is based on the WiringPi interface. This interface is not endorsed or supported by either group.


* [LidarLite overview](http://www.pulsedlight3d.com/)

You will need to install the Wiring library for your board:

* [RaspberryPi wiringPi](http://www.wiringpi.com/)

* [ODROID C1 wiringPi](https://github.com/hardkernel/wiringPi)

## Pin Connections
Double-check these with your latest hardware documentation.

Svr is RaspberryPi or ODROID C1

Svr |  Desc |  LIDAR
:--:|:-----:|:------:
 2  |   5V  |  1 (Red)
 3  |   SDA | 5
    |       | 
 5  |   SCL |   4
 6  |   GND |   6
