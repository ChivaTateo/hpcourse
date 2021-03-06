#ifndef MYFLOWGRAPH_TYPES_H
#define MYFLOWGRAPH_TYPES_H

#include <tbb/tbb.h>
#include <tbb/concurrent_vector.h>
#include <tbb/flow_graph.h>
//#include <tbb/tick_count.h>
#include "structs.h"

typedef tbb::flow::graph tbb_graph;

struct selected_pixels
{
    tbb::concurrent_vector<pixel> pixels;
    image img;
};

struct minmax
{
    std::pair<uchar, uchar> minmax_;
    image img;
};

struct img_avgbr
{
    image img;
    double avg_br;
};

#endif // MYFLOWGRAPH_TYPES_H
