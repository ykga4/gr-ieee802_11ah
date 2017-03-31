INCLUDE(FindPkgConfig)
PKG_CHECK_MODULES(PC_IEEE802_11AH ieee802_11ah)

FIND_PATH(
    IEEE802_11AH_INCLUDE_DIRS
    NAMES ieee802_11ah/api.h
    HINTS $ENV{IEEE802_11AH_DIR}/include
        ${PC_IEEE802_11AH_INCLUDEDIR}
    PATHS ${CMAKE_INSTALL_PREFIX}/include
          /usr/local/include
          /usr/include
)

FIND_LIBRARY(
    IEEE802_11AH_LIBRARIES
    NAMES gnuradio-ieee802_11ah
    HINTS $ENV{IEEE802_11AH_DIR}/lib
        ${PC_IEEE802_11AH_LIBDIR}
    PATHS ${CMAKE_INSTALL_PREFIX}/lib
          ${CMAKE_INSTALL_PREFIX}/lib64
          /usr/local/lib
          /usr/local/lib64
          /usr/lib
          /usr/lib64
)

INCLUDE(FindPackageHandleStandardArgs)
FIND_PACKAGE_HANDLE_STANDARD_ARGS(IEEE802_11AH DEFAULT_MSG IEEE802_11AH_LIBRARIES IEEE802_11AH_INCLUDE_DIRS)
MARK_AS_ADVANCED(IEEE802_11AH_LIBRARIES IEEE802_11AH_INCLUDE_DIRS)

