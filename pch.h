// pch.h: This is a precompiled header file.
// Files listed below are compiled only once, improving build performance for future builds.
// This also affects IntelliSense performance, including code completion and many code browsing features.
// However, files listed here are ALL re-compiled if any one of them is updated between builds.
// Do not add files here that you will be updating frequently as this negates the performance advantage.

#ifndef PCH_H
#define PCH_H

// add headers that you want to pre-compile here
#include "framework.h"
#include <Psapi.h>

#include "third-party/minhook/include/MinHook.h"

#include <iostream>
#include <Windows.h>
#include <tchar.h>
#include <vector>
#include <algorithm>
#include <locale>

//DX11
#include <d3d11.h>
#include <d3dcompiler.h>
#include <DirectXMath.h>

//Imgui
#include <imgui.h>
#include <imgui_impl_win32.h>
#include <imgui_impl_dx11.h>

#endif //PCH_H
