// dllmain.cpp : Defines the entry point for the DLL application.
#include "stdafx.h"
#include <windows.h>
#pragma comment(linker,"/export:DllCanUnloadNow=NppShell_06_orig.DllCanUnloadNow,@1")
#pragma comment(linker,"/export:DllGetClassObject=NppShell_06_orig.DllGetClassObject,@2")
#pragma comment(linker,"/export:DllInstall=NppShell_06_orig.DllInstall,@3")
#pragma comment(linker,"/export:DllRegisterServer=NppShell_06_orig.DllRegisterServer,@4")
#pragma comment(linker,"/export:DllUnregisterServer=NppShell_06_orig.DllUnregisterServer,@5")

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
					 )
{
	switch (ul_reason_for_call)
	{
	case DLL_PROCESS_ATTACH:
		MessageBoxA(nullptr, "Ravin", "Ravin", 0);
	case DLL_THREAD_ATTACH:
	case DLL_THREAD_DETACH:
	case DLL_PROCESS_DETACH:
		break;
	}
	return TRUE;
}

