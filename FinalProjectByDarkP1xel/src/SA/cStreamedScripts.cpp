//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#include "include/SA/cStreamedScripts.hpp"

auto cStreamedScripts::reInit(void) -> void {
	reinterpret_cast<void(__cdecl *)(void)>(0x4706A0)();
	return;
}