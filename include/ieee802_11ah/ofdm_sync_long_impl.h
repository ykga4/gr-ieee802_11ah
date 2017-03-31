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


#ifndef INCLUDED_IEEE802_11AH_OFDM_SYNC_LONG_IMPL_H
#define INCLUDED_IEEE802_11AH_OFDM_SYNC_LONG_IMPL_H

#include <ieee802_11ah/api.h>
#include <gnuradio/block.h>

namespace gr {
  namespace ieee802_11ah {

    /*!
     * \brief <+description of block+>
     * \ingroup ieee802_11ah
     *
     */
    class IEEE802_11AH_API ofdm_sync_long_impl : virtual public gr::block
    {
     public:
      typedef boost::shared_ptr<ofdm_sync_long_impl> sptr;

      /*!
       * \brief Return a shared_ptr to a new instance of ieee802_11ah::ofdm_sync_long_impl.
       *
       * To avoid accidental use of raw pointers, ieee802_11ah::ofdm_sync_long_impl's
       * constructor is in a private implementation
       * class. ieee802_11ah::ofdm_sync_long_impl::make is the public interface for
       * creating new instances.
       */
      static sptr make(unsigned int sync_length, bool log, bool debug);
    };

  } // namespace ieee802_11ah
} // namespace gr

#endif /* INCLUDED_IEEE802_11AH_OFDM_SYNC_LONG_IMPL_H */

