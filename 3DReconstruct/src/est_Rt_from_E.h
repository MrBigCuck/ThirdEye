#ifndef estimate_rt_from_e_h_
#define estimate_rt_from_e_h_

#include "numeric.h"
#include "pair.h"

namespace open3DCV
{
    void Rt_from_E(const Mat3f& E, std::vector<Mat3f>& R, std::vector<Vec3f>& t);
    void Rt_from_E(const Mat3f& E, Mat3f& R, Vec3f& t);
    void Rt_from_E(Pair& pair);
    
}

#endif
