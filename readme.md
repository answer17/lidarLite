# Overview

This provides a simple C interface to the LidarLite.  It is based on the WiringPi interface. lidarTest.c is a simple test version.  If you have any issues, please post to the issues tab.


* [LidarLite overview](http://www.pulsedlight3d.com/)

# Usage

Install the Wiring library for your board:

* [RaspberryPi wiringPi](http://www.wiringpi.com/)

* [ODROID C1 wiringPi](https://github.com/hardkernel/wiringPi)

Download the Zipfile and extract to a directory

* run cmake
* run make

Library interfaces

* int lidar\_init(bool debug);  // Initializes system.  Param indicates whether to log debug messages.  
 Returns file descriptor

* int lidar\_read(int file\_desc);  // Returns distance.  First param is file descriptor from lidar\_init

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
