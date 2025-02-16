//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef SAPOINTLIGHTS_HPP
#define SAPOINTLIGHTS_HPP

#pragma once

#include "include/Vector/cVector3D.hpp"

class cPointLights final {
	public:
	explicit cPointLights(void) = delete;
	~cPointLights(void) = delete;

	static auto addLight(const unsigned __int8 ui8Type, const class cVector3D *pPos, const class cVector3D *pVelocity, const float fRadius, const class cVector3D *pColor, const unsigned __int8 ui8FogType = 0, const bool bGenerateExtraShadows = false, const class cEntity *pAttachedTo = nullptr) -> void;

	private:
};

#endif