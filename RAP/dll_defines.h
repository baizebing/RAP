// Copyright (c) 2024 Cris Bai
//
// This software is released under the MIT License.
// https://opensource.org/licenses/MIT

#ifdef _WIN32
#ifdef BUILD_DLL
#define DLL_PORTING __declspec(dllexport)
#else
#define DLL_PORTING __declspec(dllimport)
#endif
#else
#define DLL_PORTING
#endif
