//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef SA_HPP
#define SA_HPP

#pragma once

#include "cMain.hpp"

#include "include/SA/cPed.hpp"
#include "include/SA/cPlayerInfo.hpp"
#include "include/SA/cAutomobile.hpp"
#include "include/SA/cCamera.hpp"
#include "include/SA/cWorld.hpp"
#include "include/SA/cStreaming.hpp"
#include "include/SA/cStreamingInfo.hpp"
#include "include/SA/cCheat.hpp"
#include "include/SA/cHandlingDataMgr.hpp"
#include "include/SA/cWeaponInfo.hpp"
#include "include/SA/cPad.hpp"
#include "include/SA/cColStore.hpp"
#include "include/SA/cAudioEngine.hpp"
#include "include/SA/cAERadioTrackManager.hpp"
#include "include/SA/cPathFind.hpp"
#include "include/SA/cIPLStore.hpp"
#include "include/SA/cStreamedScripts.hpp"
#include "include/SA/cRadar.hpp"
#include "include/SA/cMenuManager.hpp"
#include "include/SA/cRadarTrace.hpp"
#include "include/SA/cWeather.hpp"
#include "include/SA/cPools.hpp"
#include "include/SA/cVehicleModelInfo.hpp"
#include "include/SA/c3DMarker.hpp"
#include "include/SA/cDirectionArrow.hpp"
#include "include/SA/cFx.hpp"
#include "include/SA/cFxManager.hpp"
#include "include/SA/cQuadBike.hpp"
#include "include/SA/cHeli.hpp"
#include "include/SA/cPlane.hpp"
#include "include/SA/cBoat.hpp"
#include "include/SA/cBike.hpp"
#include "include/SA/cTrailer.hpp"
#include "include/SA/cObject.hpp"

class cSA final {
	public:
	explicit cSA(class cMain *pMain);
	auto getPatch(void) const -> class cSAPatch *;
	auto getPlayerPed(void) const -> class cPed *;
	auto getPlayerInfo(void) const -> class cPlayerInfo *;
	auto getPlayerVehicle(const bool bIncludeRemote = false) const -> class cAutomobile *;
	auto getCamera(void) const -> class cCamera *;
	auto getHandlingDataMgr(void) const -> class cHandlingDataMgr *;
	auto getWeaponInfo(const unsigned __int8 ui8WeaponID, const unsigned __int8 ui8SkillID) const -> class cWeaponInfo *;
	auto getPad(const unsigned __int8 ui8PadID = 0) const -> class cPad *;
	auto getAudioEngine(void) const -> class cAudioEngine *;
	auto getRadioTrackManager(void) const -> class cAERadioTrackManager *;
	auto getPathFind(void) const -> class cPathFind *;
	auto getStreamedScripts(void) const -> class cStreamedScripts *;
	auto getMenuManager(void) const -> class cMenuManager *;
	auto getRadarTrace(const unsigned __int16 ui16TraceID) const -> class cRadarTrace *;
	auto getVehicleModelInfo(const unsigned __int16 ui16ModelIndex) const -> class cVehicleModelInfo *;
	auto get3DMarkerPoint(const unsigned __int8 ui8ID) const -> class c3DMarker *;
	auto getCurrent3DMarkerPoint(void) const -> class c3DMarker *;
	auto getDirectionArrow(const unsigned __int8 ui8ID) const -> class cDirectionArrow *;
	auto getFx(void) const -> class cFx *;
	auto getFxManager(void) const -> class cFxManager *;
	auto getStreamingInfo(const unsigned __int32 ui32ModelIndex) const -> class cStreamingInfo *;
	auto getDirect3D9(void) const->IDirect3D9 *;
	auto getCurrentD3DDevice(void) const->IDirect3DDevice9 *;
	auto getD3DPresentParams(void) const->D3DPRESENT_PARAMETERS *;
	auto isVersionUS10(void) const -> bool;
	auto isGamePaused(void) const -> bool;
	auto isInputBlocked(void) const -> bool;
	auto getGameState(void) const -> unsigned __int32;
	auto getFPS(void) const -> float;
	~cSA(void);

	static auto fixAnyVeh(void *pAnyVehicle) -> void;
	static auto disembarkPed(const class cPed *pPed) -> void;
	static auto flipVeh(class cVehicle *pVehicle) -> void;
	static auto unfreeze(const class cMain *pMain) -> void;
	static auto getPosition(const class cSA *pSA) -> class cVector3D *;
	static auto getWaypointPos(const class cSA *pSA, class cVector3D &&vecMarkOut) -> bool;
	static auto teleport(const class cSA *pSA, const class cVector3D *pPos, const bool bLoadScene = false, const bool bFindZ = false, const float fAddToZ = 0) -> bool;

	private:
	class cSAPatch *pPatch{nullptr};
};

#endif