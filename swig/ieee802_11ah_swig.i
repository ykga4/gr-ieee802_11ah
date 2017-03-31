/* -*- c++ -*- */

#define IEEE802_11AH_API

%include "gnuradio.i"			// the common stuff

//load generated python docstrings
%include "ieee802_11ah_swig_doc.i"

%{
#include "ieee802_11ah/ofdm_sync_long_impl.h"
%}


%include "ieee802_11ah/ofdm_sync_long_impl.h"
GR_SWIG_BLOCK_MAGIC2(ieee802_11ah, ofdm_sync_long_impl);
