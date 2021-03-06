/*! -*-c++-*-
  @file   triangle.cpp
  @author David Hirvonen (C++ implementation)
  @brief Implementation of an optimized 2D separable ogles_gpgpu triangle filter shader.

  The filter uses built in OpengL texel interpolation to reduce the kernel coefficient.

  \copyright Copyright 2018 Elucideye, Inc. All rights reserved.
  \license{This project is released under the 3 Clause BSD License.}

*/

#include <acf/gpu/triangle_opt.h>
#include <acf/gpu/multipass/triangle_opt_pass.h>

#include <ogles_gpgpu/common/common_includes.h>

BEGIN_OGLES_GPGPU

TriangleOptProc::TriangleOptProc(int radius, bool doNorm, float normConst)
{
    auto* triPass1 = new TriangleOptProcPass(1, radius, doNorm);
    auto* triPass2 = new TriangleOptProcPass(2, radius, doNorm, normConst);

    procPasses.push_back(triPass1);
    procPasses.push_back(triPass2);
}

END_OGLES_GPGPU
