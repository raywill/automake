automake
========
[![Build Status](https://travis-ci.org/gt3389b/automake.svg?branch=master)](https://travis-ci.org/gt3389b/automake)


used to teach how to write Makefile.am and configure.ac

setup steps:

1. sh build.sh init
1. configure --prefix=/your/install/path
1. make
1. make install

cleanup steps:

1. make clean
1. build.sh clean


example:

1. My code dir is /home/raywill/teach/automake
1. My build dir is /home/raywill/teach/automake/build
1. My install dir is /home/raywill/teach/automake/install



after all dirs are ready, I follow these step to build my program:

1. cd /home/raywill/teach/automake
1. sh build.sh init
1. cd build
1. ../configure --prefix=/home/raywill/teach/automake/install
1. make
1. make install   #may be [sudo make install], depends if sys folder.
1. cd ../install/ 
1. ls  #check if everything is installed. done ;)


I want my code tree clean, so I mkdir an ./build dir to I configure the prefix as /home/raywill/teach/automake

