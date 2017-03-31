
# Installation

## Dependencies

### Swig

    sudo apt-get install swig
    sudo port install swig


### log4cpp

    sudo apt-get install liblog4cpp5-dev
    sudo port install log4cpp


### GNU Radio v3.7

You need at least version 3.7.9

### gr-foo

    git clone https://github.com/bastibl/gr-foo.git
    cd gr-foo
    mkdir build
    cd build
    cmake ..
    make
    sudo make install
    sudo ldconfig


## Installation of gr-ieee802-11

To actually install the blocks do

    git clone git://github.com/bastibl/gr-ieee802-11.git
    cd gr-ieee802-11
    mkdir build
    cd build
    cmake ..
    make
    sudo make install
    sudo ldconfig

### Adjust Maximum Shared Memory
    sudo sysctl -w kernel.shmmax=2147483648

