/* -*- c++ -*- */
/* 
 * Copyright 2017 <+YOU OR YOUR COMPANY+>.
 * 
 * This is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3, or (at your option)
 * any later version.
 * 
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this software; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street,
 * Boston, MA 02110-1301, USA.
 */

#ifndef INCLUDED_IEEE802_11AH_OFDM_SYNC_LONG_IMPL_IMPL_H
#define INCLUDED_IEEE802_11AH_OFDM_SYNC_LONG_IMPL_IMPL_H

#include <ieee802_11ah/ofdm_sync_long_impl.h>

namespace gr {
  namespace ieee802_11ah {

    class ofdm_sync_long_impl_impl : public ofdm_sync_long_impl
    {
     private:
      // Nothing to declare in this block.

     public:
      ofdm_sync_long_impl_impl(unsigned int sync_length, bool log, bool debug);
      ~ofdm_sync_long_impl_impl();

      // Where all the action really happens
      void forecast (int noutput_items, gr_vector_int &ninput_items_required);

      int general_work(int noutput_items,
           gr_vector_int &ninput_items,
           gr_vector_const_void_star &input_items,
           gr_vector_void_star &output_items);
    };

  } // namespace ieee802_11ah
} // namespace gr

#endif /* INCLUDED_IEEE802_11AH_OFDM_SYNC_LONG_IMPL_IMPL_H */

