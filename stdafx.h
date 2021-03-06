// stdafx.h: dołącz plik do standardowych systemowych plików dołączanych,
// lub specyficzne dla projektu pliki dołączane, które są często wykorzystywane, ale
// są rzadko zmieniane
//

#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include "targetver.h"

#define WIN32_LEAN_AND_MEAN             // Wyklucz rzadko używane rzeczy z nagłówków systemu Windows
// Pliki nagłówkowe systemu Windows:
#include <windows.h>

// Pliki nagłówkowe środowiska uruchomieniowego C
#include <stdlib.h>
#include <malloc.h>
#include <memory.h>
#include <tchar.h>
#include <wx/image.h>
#include <wx/msgdlg.h>
#include <wx/intl.h>
#include <wx/string.h>
#include <vector>

// TODO: W tym miejscu odwołaj się do dodatkowych nagłówków wymaganych przez program
#include "GraphicsApp.h"
#include "GraphicsMain.h"
#include "GUIMyFrame.h"