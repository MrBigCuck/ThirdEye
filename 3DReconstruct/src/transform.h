#ifndef transformation_h_
#define transformation_h_

#include "numeric.h"


//S. sameh : if removed will cause M_PI to be delcared undefined for some reason even though it should be defined in <cmath.h>
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif
//E.



namespace open3DCV
{
    Mat34f concat_Rt(const Mat34f& outer_Rt, const Mat34f& inner_Rt);
    Mat34f inv_Rt(const Mat34f& r_Rt);
    Mat3f rotation_around_x(float angle);
    Mat3f rotation_around_y(float angle);
    Mat3f rotation_around_z(float angle);
    
    template<typename T>
    inline T degree2radian(T degree)
    {
        return degree * M_PI / 180.0;
    }
    
    template<typename T>
    inline T radian2degree(T radian)
    {
        return radian / M_PI * 180;
    }
}

#endif
