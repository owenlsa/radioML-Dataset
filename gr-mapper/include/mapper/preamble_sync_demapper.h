/* -*- c++ -*- */
/* 
 * Copyright 2015 Free Software Foundation, Inc
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


#ifndef INCLUDED_MAPPER_PREAMBLE_SYNC_DECODE_H
#define INCLUDED_MAPPER_PREAMBLE_SYNC_DECODE_H

#include <mapper/api.h>
#include <gnuradio/block.h>
#include <mapper/constellation.h>
#include <mapper/pream_sync_correlator.h>

namespace gr {
  namespace mapper {

    /*!
     * \brief <+description of block+>
     * \ingroup mapper
     *
     */
    class MAPPER_API preamble_sync_demapper : virtual public gr::block
    {
     public:
      typedef boost::shared_ptr<preamble_sync_demapper> sptr;

      static sptr make(int width, const std::vector<unsigned char> &preamble, modtype_t modtype,
                       const std::vector<int> &symbol_map, int acquire_bit_thresh, int loose_bit_thresh,
                       bool passthrough);
    };

  } // namespace mapper
} // namespace gr

#endif /* INCLUDED_MAPPER_PREAMBLE_SYNC_DECODE_H */

