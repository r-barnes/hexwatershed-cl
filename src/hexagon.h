/**
 * @file hexagon.h
 * @author Chang Liao (chang.liao@pnnl.gov)
 * @brief The header file the hexagon class.
 * @version 0.1
 * @date 2019-08-02
 * 
 * @copyright Copyright (c) 2019
 * 
 */
#pragma once

#include <string>
#include <vector>
#include <array>
#include "global.h"

using namespace std;
namespace hexwatershed
  {

      struct ptVertex
      {
          double dX = missing_value; //map projection
          double dY = missing_value; //map projection
          double dZ = missing_value; //elevation of VTK
      };
      class hexagon
      {
      public:
          hexagon();

          ~hexagon();

          long lGlobalID;
          long lID;
          int iFlag_active;
          int iFlag_watershed;
          int iFlag_stream;
          int iFlag_first_reach;
          int iFlag_last_reach;
          int iFlag_headwater;
          int iFlag_neighbor;

          int iSegment;
          int iSegment_order;
          int iSubbasin;
          int iFlag_confluence;
          int nNeighbor;
          int nUpslope;
          int iSegment_downstream;

          int nPtVertex; //the vertex number from polygon
          //std::string sMeta;
          long lIndex_downslope;
          long lAccumulation;
            
          double dSlope;
          double dLength_edge;
          double dX; //map projection
          double dY; //map projection
          double dLatitude;
          double dLongitude;
          double dElevation;
          double dArea;
          double dTwi;
          //std::array<long, 6> aNeighbor;
          std::vector<long> vNeighbor;
          std::vector<long> vUpslope;
          std::vector<ptVertex> vPtVertex;

      };

  }
