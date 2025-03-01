#include "Common.hpp"

#ifdef GEODE_IS_MACOS

// // PlayerObject
// GEODE_MEMBER_CHECK(PlayerObject, m_collisionLog, 0x518);
// GEODE_MEMBER_CHECK(PlayerObject, m_particleSystems, 0x590);
// GEODE_MEMBER_CHECK(PlayerObject, m_waveTrail, 0x600);
// GEODE_MEMBER_CHECK(PlayerObject, m_objectSnappedTo, 0x690);
// GEODE_MEMBER_CHECK(PlayerObject, m_playerColor1, 0x7c2);

// // EditorUI
// GEODE_MEMBER_CHECK(EditorUI, m_buttonBar, 0x1a0);
// GEODE_MEMBER_CHECK(EditorUI, m_scaleControl, 0x208);
// GEODE_MEMBER_CHECK(EditorUI, m_swipeEnabled, 0x23c);
// GEODE_MEMBER_CHECK(EditorUI, m_updateTimeMarkers, 0x244);
// GEODE_MEMBER_CHECK(EditorUI, m_selectedObjects, 0x260);
// GEODE_MEMBER_CHECK(EditorUI, m_selectedObject, 0x440);

// // LevelEditorLayer
// GEODE_MEMBER_CHECK(LevelEditorLayer, m_editorUI, 0x5d8);
// GEODE_MEMBER_CHECK(LevelEditorLayer, m_level, 0x618);

// // PlayLayer
// GEODE_MEMBER_CHECK(PlayLayer, unknown518, 0x518);
// GEODE_MEMBER_CHECK(PlayLayer, unknown5f4, 0x5f4);
// GEODE_MEMBER_CHECK(PlayLayer, unknown680, 0x680);
// GEODE_MEMBER_CHECK(PlayLayer, m_replayInputs, 0x6a8);
// GEODE_MEMBER_CHECK(PlayLayer, m_level, 0x728);
// GEODE_MEMBER_CHECK(PlayLayer, m_shouldTryToKick, 0x7a8);

// // GameManager
// GEODE_MEMBER_CHECK(GameManager, m_playLayer, 0x180);
// GEODE_MEMBER_CHECK(GameManager, m_levelEditorLayer, 0x188);
// GEODE_MEMBER_CHECK(GameManager, m_menuLayer, 0x198);
// GEODE_MEMBER_CHECK(GameManager, m_playerUDID, 0x1b8);
// GEODE_MEMBER_CHECK(GameManager, m_playerUserID, 0x1cc);
// GEODE_MEMBER_CHECK(GameManager, m_playerFrame, 0x200);
// GEODE_MEMBER_CHECK(GameManager, m_clickedGarage, 0x2a2); // todo: find why this is not 0x2a2

// // GameObject
// GEODE_MEMBER_CHECK(GameObject, m_baseColorID, 0x27c);
// GEODE_MEMBER_CHECK(GameObject, m_detailColorID, 0x280);
// GEODE_MEMBER_CHECK(GameObject, m_active, 0x2e5);
// GEODE_MEMBER_CHECK(GameObject, m_baseSprite, 0x348);
// GEODE_MEMBER_CHECK(GameObject, m_startPosition, 0x37c);
// GEODE_MEMBER_CHECK(GameObject, m_baseColor, 0x410);
// GEODE_MEMBER_CHECK(GameObject, m_groups, 0x458);
// GEODE_MEMBER_CHECK(GameObject, m_effectManager, 0x4d8);

// // EffectGameObject
// GEODE_MEMBER_CHECK(EffectGameObject, m_duration, 0x4f0);
// GEODE_MEMBER_CHECK(EffectGameObject, m_followMod, 0x530);
// GEODE_MEMBER_CHECK(EffectGameObject, m_hsvValue, 0x560);
// GEODE_MEMBER_CHECK(EffectGameObject, m_spawnDelay, 0x588);
// GEODE_MEMBER_CHECK(EffectGameObject, m_itemBlockAID, 0x5b0);

// // TeleportPortalObject
// GEODE_MEMBER_CHECK(TeleportPortalObject, m_orangePortal, 0x4f8);

// // StartPosObject
// GEODE_MEMBER_CHECK(StartPosObject, m_levelSettings, 0x5e0);

// // SetupPulsePopup
// GEODE_MEMBER_CHECK(SetupPulsePopup, m_currentColorSpr, 0x2d0);
// GEODE_MEMBER_CHECK(SetupPulsePopup, m_pulseMode, 0x38c);

// // ColorSelectPopup
// GEODE_MEMBER_CHECK(ColorSelectPopup, m_copyColor, 0x372);

// // LevelInfoLayer
// GEODE_MEMBER_CHECK(LevelInfoLayer, m_level, 0x1c0);

// // LevelBrowserLayer
// GEODE_MEMBER_CHECK(LevelBrowserLayer, m_rightArrow, 0x1a8);
// GEODE_MEMBER_CHECK(LevelBrowserLayer, m_leftArrow, 0x1b0);
// GEODE_MEMBER_CHECK(LevelBrowserLayer, m_searchObject, 0x1d8);
// GEODE_MEMBER_CHECK(LevelBrowserLayer, m_itemCount, 0x208);

// // LocalLevelManager
// GEODE_MEMBER_CHECK(LocalLevelManager, m_localLevels, 0x140);

// // GameStatsManager
// GEODE_MEMBER_CHECK(GameStatsManager, m_dailyChests, 0x170);
// GEODE_MEMBER_CHECK(GameStatsManager, m_completedLevels, 0x200);
// GEODE_MEMBER_CHECK(GameStatsManager, m_weeklyChest, 0x278);

// // DailyLevelPage
// GEODE_MEMBER_CHECK(DailyLevelPage, m_weekly, 0x291);

// // GameLevelManager
// GEODE_MEMBER_CHECK(GameLevelManager, m_weeklyID, 0x1a8);
// GEODE_MEMBER_CHECK(GameLevelManager, m_gauntletLevels, 0x1b0);
// GEODE_MEMBER_CHECK(GameLevelManager, m_timerDict, 0x1e8);
// GEODE_MEMBER_CHECK(GameLevelManager, m_accountIDtoUserIDDict, 0x1f8);
// GEODE_MEMBER_CHECK(GameLevelManager, m_userIDtoAccountIDDict, 0x200);

GEODE_MEMBER_CHECK(GameLevelManager, m_mainLevels, 0x158);
GEODE_MEMBER_CHECK(GJBaseGameLayer, m_level, 0x780);
GEODE_MEMBER_CHECK(GJBaseGameLayer, m_player1, 0xc90);
GEODE_MEMBER_CHECK(GJBaseGameLayer, m_massiveFloatArray, 0xf64); //should be f68 i think but that didnt line up so whatever
GEODE_MEMBER_CHECK(GJBaseGameLayer, m_isPracticeMode, 0x3048);

GEODE_SIZE_CHECK(GJDropDownLayer, 0x268);
GEODE_MEMBER_CHECK(GJDropDownLayer, m_mainLayer, 0x248);

#endif
