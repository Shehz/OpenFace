///////////////////////////////////////////////////////////////////////////////
// Copyright (C) 2017, Carnegie Mellon University and University of Cambridge,
// all rights reserved.
//
// ACADEMIC OR NON-PROFIT ORGANIZATION NONCOMMERCIAL RESEARCH USE ONLY
//
// BY USING OR DOWNLOADING THE SOFTWARE, YOU ARE AGREEING TO THE TERMS OF THIS LICENSE AGREEMENT.  
// IF YOU DO NOT AGREE WITH THESE TERMS, YOU MAY NOT USE OR DOWNLOAD THE SOFTWARE.
//
// License can be found in OpenFace-license.txt
//

// Precompiled headers stuff

#ifndef __STDAFX_UT_h_
#define __STDAFX_UT_h_

// OpenCV includes
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc.hpp>

// For FHOG visualisation
#include <dlib/opencv.h>
#include <dlib/image_processing/frontal_face_detector.h>

// C++ standard stuff
#include <stdio.h>

#include <fstream>
#include <iostream>
#include <sstream>
#include <locale>
#include <iomanip>

#include <vector>
#include <queue>
#include <map>
#include <set>

// For sorting
#include <algorithm>

// For threading and timing
#include <chrono>
#include <ctime>

// Filesystem stuff
// It can either be in std filesystem (C++17), or in experimental/filesystem (partial C++17 support) or in boost
#if __has_include(<filesystem>)
#include <filesystem>
namespace fs = std::filesystem;
#elif __has_include(<experimental/filesystem>)
#include <experimental/filesystem>
namespace fs = std::filesystem;
#else
#include <boost/filesystem.hpp>
#include <boost/filesystem/fstream.hpp>
namespace fs = boost::filesystem;
#endif

// OpenBLAS stuff

#include <openblas_config.h>
// Instead of including cblas.h and f77blas.h (the definitions from OpenBLAS and other BLAS libraries differ, declare the required OpenBLAS functionality here)
#ifdef __cplusplus
extern "C" {
	/* Assume C declarations for C++ */
#endif  /* __cplusplus */

	/*Set the number of threads on runtime.*/
	void openblas_set_num_threads(int num_threads);

	void sgemm_(char *, char *, blasint *, blasint *, blasint *, float *,
		float  *, blasint *, float  *, blasint *, float  *, float  *, blasint *);
}


#endif
