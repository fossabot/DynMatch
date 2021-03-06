/******************************************************************************
 * mcm_dyn_matching.h
 *
 *
 ******************************************************************************
 * This program is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the Free
 * Software Foundation, either version 2 of the License, or (at your option)
 * any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program.  If not, see <http://www.gnu.org/licenses/>.
 *****************************************************************************/

#ifndef MY_BLOSSOM_DYN_MATCHING_NAIVE_H
#define MY_BLOSSOM_DYN_MATCHING_NAIVE_H

#include <bitset>
#include <cassert>
#include <iostream>
#include <vector>
#include <random>
#include <chrono>

#include "dyn_matching.h"
#include "tools/random_functions.h"
#include "tools/timer.h"
#include "data_structure/union_find.h"
#include "tools/misc.h"
#include "node_partition.h"

class blossom_dyn_matching_naive : public dyn_matching {
        public:
                blossom_dyn_matching_naive (dyn_graph_access* G, MatchConfig & config); 
                ~blossom_dyn_matching_naive (); 

                virtual bool new_edge(NodeID source, NodeID target);
                virtual bool remove_edge(NodeID source, NodeID target);
                virtual NodeID getMSize ();
                
};

#endif 
