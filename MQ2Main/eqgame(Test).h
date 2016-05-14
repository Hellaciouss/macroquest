/******************************************************************************
MQ2Main.dll: MacroQuest2's extension DLL for EverQuest
Copyright (C) 2002-2003 Plazmic, 2003-2005 Lax

This program is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License, version 2, as published by
the Free Software Foundation.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.
******************************************************************************/
#ifdef PRIVATE
#if defined(LIVE)
#include "eqgame-private(live).h"
#elif defined(TEST)
#include "eqgame-private(test).h"
#endif
#endif

#define __ClientName                                              "eqgame"
#define __ExpectedVersionDate                                     "May 11 2016"
#define __ExpectedVersionTime                                     "11:02:07"
#define __ActualVersionDate_x                                      0xACD000
#define __ActualVersionTime_x                                      0xACD00C

#define __ClientOverride                                           0
#define __MacroQuestWinClassName                                  "__MacroQuestTray"
#define __MacroQuestWinName                                       "MacroQuest"

// Memory Protection
#define __MemChecker0_x                                            0x59D9F0
#define __MemChecker1_x                                            0x895D60
#define __MemChecker2_x                                            0x633970
#define __MemChecker3_x                                            0x6338C0
#define __MemChecker4_x                                            0x7E51D0
#define __EncryptPad0_x                                            0xC6B828
#define __EncryptPad1_x                                            0xDF60A8
#define __EncryptPad2_x                                            0xCB42E8
#define __EncryptPad3_x                                            0xCB3EE8
#define __EncryptPad4_x                                            0xDCCEB8
#define __EncryptPad5_x                                            0x11A2070
#define __AC1_x                                                    0x7A51F5
#define __AC2_x                                                    0x5579C7
#define __AC3_x                                                    0x555B60
#define __AC4_x                                                    0x568370
#define __AC5_x                                                    0x57AE3B
#define __AC6_x                                                    0x57E9EE
#define __AC7_x                                                    0x5754FC
#define __AC1_Data                                                 0x11111111
#define __EP1_Data_x                                               0x1E4E80

// Direct Input
#define DI8__Main_x                                                0x11A2048
#define DI8__Keyboard_x                                            0x11A204C
#define DI8__Mouse_x                                               0x11A2050
#define DI8__Mouse_Copy_x                                          0x10107A4
#define DI8__Mouse_Check_x                                         0x1099F34
#define __Attack_x                                                 0x1094C7B
#define __Autofire_x                                               0x1094C7C
#define __BindList_x                                               0xC2D480
#define g_eqCommandStates_x                                        0xFFFC08
#define __Clicks_x                                                 0x1010860
#define __CommandList_x                                            0xC31850
#define __CurrentMapLabel_x                                        0x11A7AA0
#define __CurrentSocial_x                                          0xBE3FB8
#define __DoAbilityList_x                                          0x1046F30
#define __do_loot_x                                                0x51C5E0
#define __DrawHandler_x                                            0x180E4BC
#define __GroupCount_x                                             0x10011D2

#define __Guilds_x                                                 0x1006DE8
#define __gWorld_x                                                 0x100368C
#define __HotkeyPage_x                                             0x108D930
#define __HWnd_x                                                   0x1099F50
#define __InChatMode_x                                             0x101078C
#define __LastTell_x                                               0x101262C
#define __LMouseHeldTime_x                                         0x10108CC
#define __Mouse_x                                                  0x11A2054
#define __MouseLook_x                                              0x1010826
#define __MouseEventTime_x                                         0x109547C
#define __gpbCommandEvent_x                                        0x1003754
#define __NetStatusToggle_x                                        0x1010829
#define __PCNames_x                                                0x1011C50
#define __RangeAttackReady_x                                       0x101198C
#define __RMouseHeldTime_x                                         0x10108C8
#define __RunWalkState_x                                           0x1010790
#define __ScreenMode_x                                             0xF4F988
#define __ScreenX_x                                                0x1010744
#define __ScreenY_x                                                0x1010740
#define __ScreenXMax_x                                             0x1010748
#define __ScreenYMax_x                                             0x101074C
#define __ServerHost_x                                             0x100111C
#define __ServerName_x                                             0x1046EF0
#define __ShiftKeyDown_x                                           0x1010E18
#define __ShowNames_x                                              0x1011B4C
#define __Socials_x                                                0x1046FF0
#define __SubscriptionType_x                                       0x11D5B50
#define __TargetAggroHolder_x                                      0x11A9CDC
#define __ZoneType_x                                               0x1010C24
#define __GroupAggro_x                                             0x11A9D1C
#define __LoginName_x                                              0x1098B2C
#define __Inviter_x                                                0x1094BF8
#define __AttackOnAssist_x                                         0x1011B08

//// 
//Section 1: Vital Offsets 
//// 
#define instCRaid_x                                                0x1003778
#define instEQZoneInfo_x                                           0x1010A1C
#define instKeypressHandler_x                                      0x1095460
#define pinstActiveBanker_x                                        0x1003730
#define pinstActiveCorpse_x                                        0x1003734
#define pinstActiveGMaster_x                                       0x1003738
#define pinstActiveMerchant_x                                      0x100372C
#define pinstAggroInfo_x                                           0xE11CC8
#define pinstAltAdvManager_x                                       0xF50A48
#define pinstAuraMgr_x                                             0xE1DC50
#define pinstBandageTarget_x                                       0x1003718
#define pinstCamActor_x                                            0xF5039C
#define pinstCDBStr_x                                              0xF4F91C
#define pinstCDisplay_x                                            0x1003740
#define pinstCEverQuest_x                                          0x11A21C8
#define pinstCharData_x                                            0x10036FC
#define pinstCharSpawn_x                                           0x1003724
#define pinstControlledMissile_x                                   0x10036F8
#define pinstControlledPlayer_x                                    0x1003724
#define pinstCSidlManager_x                                        0x180D9FC
#define pinstCXWndManager_x                                        0x180D9F4
#define instDynamicZone_x                                          0x10105D8
#define pinstDZMember_x                                            0x10106E8
#define pinstDZTimerInfo_x                                         0x10106EC
#define pinstEQItemList_x                                          0xFFFE58
#define pinstEQObjectList_x                                        0x1000BCC
#define instEQMisc_x                                               0xC07CF8
#define pinstEQSoundManager_x                                      0xF50FA0
#define instExpeditionLeader_x                                     0x1010622
#define instExpeditionName_x                                       0x1010662
#define pinstGroup_x                                               0x10011CE
#define pinstImeManager_x                                          0x180DA00
#define pinstLocalPlayer_x                                         0x1003710
#define pinstMercenaryData_x                                       0x1095AB0
#define pinstMercenaryStats_x                                      0x11A9E28
#define pinstMercAltAbilities_x                                    0xF50DD0
#define pinstModelPlayer_x                                         0x100373C
#define pinstPCData_x                                              0x10036FC
#define pinstSkillMgr_x                                            0x10968E8
#define pinstSpawnManager_x                                        0x10961D0
#define pinstSpellManager_x                                        0x1096A30
#define pinstSpellSets_x                                           0x108D994
#define pinstStringTable_x                                         0x10036A4
#define pinstSwitchManager_x                                       0x1000D60
#define pinstTarget_x                                              0x1003728
#define pinstTargetObject_x                                        0x1003700
#define pinstTargetSwitch_x                                        0x1003704
#define pinstTaskMember_x                                          0xF4F868
#define pinstTrackTarget_x                                         0x100371C
#define pinstTradeTarget_x                                         0x100370C
#define instTributeActive_x                                        0xC07D1D
#define pinstViewActor_x                                           0xF50398
#define pinstWorldData_x                                           0x10036E0
#define pinstZoneAddr_x                                            0x1010CBC
#define pinstPlayerPath_x                                          0x1096230
#define pinstTargetIndicator_x                                     0x1096BC8
#define pinstCTargetManager_x                                      0x1096C28

//// 
//Section 2:  UI Related Offsets 
//// 
#define pinstCTextOverlay_x                                        0xE121C0
#define pinstCAudioTriggersWindow_x                                0xE12050
#define pinstCCharacterSelect_x                                    0xF5022C
#define pinstCFacePick_x                                           0xF4FFDC
#define pinstCNoteWnd_x                                            0xF501E4
#define pinstCBookWnd_x                                            0xF501EC
#define pinstCPetInfoWnd_x                                         0xF501F0
#define pinstCTrainWnd_x                                           0xF501F4
#define pinstCSkillsWnd_x                                          0xF501F8
#define pinstCSkillsSelectWnd_x                                    0xF501FC
#define pinstCCombatSkillsSelectWnd_x                              0xF50200
#define pinstCFriendsWnd_x                                         0xF50204
#define pinstCAuraWnd_x                                            0xF50208
#define pinstCRespawnWnd_x                                         0xF5020C
#define pinstCBandolierWnd_x                                       0xF50210
#define pinstCPotionBeltWnd_x                                      0xF50214
#define pinstCAAWnd_x                                              0xF50218
#define pinstCGroupSearchFiltersWnd_x                              0xF5021C
#define pinstCLoadskinWnd_x                                        0xF50220
#define pinstCAlarmWnd_x                                           0xF50224
#define pinstCMusicPlayerWnd_x                                     0xF50228
#define pinstCMailWnd_x                                            0xF50230
#define pinstCMailCompositionWnd_x                                 0xF50234
#define pinstCMailAddressBookWnd_x                                 0xF50238
#define pinstCRaidWnd_x                                            0xF50240
#define pinstCRaidOptionsWnd_x                                     0xF50244
#define pinstCBreathWnd_x                                          0xF50248
#define pinstCMapViewWnd_x                                         0xF5024C
#define pinstCMapToolbarWnd_x                                      0xF50250
#define pinstCEditLabelWnd_x                                       0xF50254
#define pinstCTargetWnd_x                                          0xF50258
#define pinstCColorPickerWnd_x                                     0xF5025C
#define pinstCPlayerWnd_x                                          0xF50260
#define pinstCOptionsWnd_x                                         0xF50264
#define pinstCBuffWindowNORMAL_x                                   0xF50268
#define pinstCBuffWindowSHORT_x                                    0xF5026C
#define pinstCharacterCreation_x                                   0xF50270
#define pinstCCursorAttachment_x                                   0xF50274
#define pinstCCastingWnd_x                                         0xF50278
#define pinstCCastSpellWnd_x                                       0xF5027C
#define pinstCSpellBookWnd_x                                       0xF50280
#define pinstCInventoryWnd_x                                       0xF50284
#define pinstCBankWnd_x                                            0xF5028C
#define pinstCQuantityWnd_x                                        0xF50290
#define pinstCLootWnd_x                                            0xF50294
#define pinstCActionsWnd_x                                         0xF50298
#define pinstCCombatAbilityWnd_x                                   0xF5029C
#define pinstCMerchantWnd_x                                        0xF502A0
#define pinstCTradeWnd_x                                           0xF502A4
#define pinstCSelectorWnd_x                                        0xF502A8
#define pinstCBazaarWnd_x                                          0xF502AC
#define pinstCBazaarSearchWnd_x                                    0xF502B0
#define pinstCGiveWnd_x                                            0xF502CC
#define pinstCTrackingWnd_x                                        0xF502D4
#define pinstCInspectWnd_x                                         0xF502D8
#define pinstCSocialEditWnd_x                                      0xF502DC
#define pinstCFeedbackWnd_x                                        0xF502E0
#define pinstCBugReportWnd_x                                       0xF502E4
#define pinstCVideoModesWnd_x                                      0xF502E8
#define pinstCTextEntryWnd_x                                       0xF502F0
#define pinstCFileSelectionWnd_x                                   0xF502F4
#define pinstCCompassWnd_x                                         0xF502F8
#define pinstCPlayerNotesWnd_x                                     0xF502FC
#define pinstCGemsGameWnd_x                                        0xF50300
#define pinstCTimeLeftWnd_x                                        0xF50304
#define pinstCPetitionQWnd_x                                       0xF50320
#define pinstCSoulmarkWnd_x                                        0xF50324
#define pinstCStoryWnd_x                                           0xF50328
#define pinstCJournalTextWnd_x                                     0xF5032C
#define pinstCJournalCatWnd_x                                      0xF50330
#define pinstCBodyTintWnd_x                                        0xF50334
#define pinstCServerListWnd_x                                      0xF50338
#define pinstCAvaZoneWnd_x                                         0xF50344
#define pinstCBlockedBuffWnd_x                                     0xF50348
#define pinstCBlockedPetBuffWnd_x                                  0xF5034C
#define pinstCInvSlotMgr_x                                         0xF50390
#define pinstCContainerMgr_x                                       0xF50394
#define pinstCAdventureLeaderboardWnd_x                            0x11A2B78
#define pinstCAdventureRequestWnd_x                                0x11A2BF0
#define pinstCAltStorageWnd_x                                      0x11A2ED0
#define pinstCAdventureStatsWnd_x                                  0x11A2C68
#define pinstCBarterMerchantWnd_x                                  0x11A3AB8
#define pinstCBarterSearchWnd_x                                    0x11A3B30
#define pinstCBarterWnd_x                                          0x11A3BA8
#define pinstCChatManager_x                                        0x11A4238
#define pinstCDynamicZoneWnd_x                                     0x11A46E8
#define pinstCEQMainWnd_x                                          0x11A4880
#define pinstCFellowshipWnd_x                                      0x11A467C
#define pinstCFindLocationWnd_x                                    0x11A4B50
#define pinstCGroupSearchWnd_x                                     0x11A4E20
#define pinstCGroupWnd_x                                           0x11A4E98
#define pinstCGuildBankWnd_x                                       0x11A4F10
#define pinstCGuildMgmtWnd_x                                       0x11A7000
#define pinstCHotButtonWnd_x                                       0x11A70CC
#define pinstCHotButtonWnd1_x                                      0x11A70CC
#define pinstCHotButtonWnd2_x                                      0x11A70D0
#define pinstCHotButtonWnd3_x                                      0x11A70D4
#define pinstCHotButtonWnd4_x                                      0x11A70F8
#define pinstCItemDisplayManager_x                                 0x11A73F0
#define pinstCItemExpTransferWnd_x                                 0x11A746C
#define pinstCLFGuildWnd_x                                         0x11A7748
#define pinstCMIZoneSelectWnd_x                                    0x11A7D30
#define pinstCConfirmationDialog_x                                 0x11A8438
#define pinstCPopupWndManager_x                                    0x11A8438
#define pinstCProgressionSelectionWnd_x                            0x11A8528
#define pinstCPvPStatsWnd_x                                        0x11A8618
#define pinstCSystemInfoDialogBox_x                                0x11A8D20
#define pinstCTaskWnd_x                                            0x11AA0E8
#define pinstCTaskSomething_x                                      0xE1E410
#define pinstCTaskTemplateSelectWnd_x                              0x11AA070
#define pinstCTipWndOFDAY_x                                        0x11AA250
#define pinstCTipWndCONTEXT_x                                      0x11AA254
#define pinstCTitleWnd_x                                           0x11AA2D0
#define pinstCContextMenuManager_x                                 0x180D96C
#define pinstCVoiceMacroWnd_x                                      0x1097000
#define pinstCHtmlWnd_x                                            0x10970F0
#define pinstIconCache_x                                           0x11A4854
#define pinstCTradeskillWnd_x                                      0x11AA3D0
#define pinstCAdvancedLootWnd_x                                    0xF50384
#define pinstRewardSelectionWnd_x                                  0x11A8B40

//// 
// Section 3: Miscellaneous Offsets 
////
#define __CastRay_x                                                0x533740
#define __ConvertItemTags_x                                        0x521140
#define __ExecuteCmd_x                                             0x50BA80
#define __EQGetTime_x                                              0x895990
#define __get_melee_range_x                                        0x512680
#define __GetGaugeValueFromEQ_x                                    0x7A3F30
#define __GetLabelFromEQ_x                                         0x7A5180
#define __ToggleKeyRingItem_x                                      0x47E2D0
#define __GetXTargetType_x                                         0x926570
#define __LoadFrontEnd_x                                           0x633040
#define __NewUIINI_x                                               0x7A3900
#define __ProcessGameEvents_x                                      0x577260
#define __ProcessMouseEvent_x                                      0x576A00
#define CrashDetected_x                                            0x634A00
#define wwsCrashReportCheckForUploader_x                           0x7F3C30
#define DrawNetStatus_x                                            0x5AD6B0
#define Util__FastTime_x                                           0x8954A0
#define Expansion_HoT_x                                            0x1011AF8
#define __HelpPath_x                                               0x10951E8
#define __STMLToText_x                                             0x8DB4B0

//// 
// Section 4: Function Offsets 
//// 
// CAdvancedLootWnd
#define CAdvancedLootWnd__CAdvancedLootWnd_x                       0x420520
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x41B370
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x41B150

// AltAdvManager 
#define AltAdvManager__GetCalculatedTimer_x                        0x4C4F10
#define AltAdvManager__IsAbilityReady_x                            0x4C4F80
#define AltAdvManager__GetAAById_x                                 0x4C5340
#define AltAdvManager__CanTrainAbility_x                           0x4C5C00
#define AltAdvManager__CanSeeAbility_x                             0x4C5800

// CharacterZoneClient
#define CharacterZoneClient__HasSkill_x                            0x462EC0
#define CharacterZoneClient__MakeMeVisible_x                       0x4687C0
#define CharacterZoneClient__IsStackBlocked_x                      0x447250
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x446710
#define CharacterZoneClient__GetItemCountWorn_x                    0x4608E0
#define CharacterZoneClient__GetItemCountInInventory_x             0x4609C0
#define CharacterZoneClient__GetCursorItemCount_x                  0x460AA0

// CBankWnd 
#define CBankWnd__GetNumBankSlots_x                                0x662BF0

// CBazaarSearchWnd 
#define CBazaarSearchWnd__HandleBazaarMsg_x                        0x670F10

// CButtonWnd 
#define CButtonWnd__SetCheck_x                                     0x58C7C0
#define CButtonWnd__CButtonWnd_x                                   0x8CF810

// CChatManager 
#define CChatManager__GetRGBAFromIndex_x                           0x68BE70
#define CChatManager__InitContextMenu_x                            0x68C9F0

// CContextMenu 
#define CContextMenu__CContextMenu_x                               0x8D9810
#define CContextMenu__dCContextMenu_x                              0x8D9A20
#define CContextMenu__AddMenuItem_x                                0x8D9A30
#define CContextMenu__RemoveMenuItem_x                             0x8D9D20
#define CContextMenu__RemoveAllMenuItems_x                         0x8D9D40
#define CContextMenuManager__AddMenu_x                             0x8C5E20
#define CContextMenuManager__RemoveMenu_x                          0x8C6170
#define CContextMenuManager__PopupMenu_x                           0x8C65C0
#define CContextMenuManager__Flush_x                               0x8C5E90
#define CContextMenuManager__GetMenu_x                             0x4169C0

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x87A5D0
#define CChatService__GetFriendName_x                              0x87A5E0

// CChatWindow 
#define CChatWindow__CChatWindow_x                                 0x691C40
#define CChatWindow__Clear_x                                       0x691810
#define CChatWindow__WndNotification_x                             0x692170

// CComboWnd 
#define CComboWnd__DeleteAll_x                                     0x8C9C10
#define CComboWnd__Draw_x                                          0x8C9E20
#define CComboWnd__GetCurChoice_x                                  0x8C99E0
#define CComboWnd__GetListRect_x                                   0x8CA0C0
#define CComboWnd__GetTextRect_x                                   0x8C9C80
#define CComboWnd__InsertChoice_x                                  0x8CA130
#define CComboWnd__SetColors_x                                     0x8C9970
#define CComboWnd__SetChoice_x                                     0x8C99A0
#define CComboWnd__GetItemCount_x                                  0x8C99D0
#define CComboWnd__GetCurChoiceText_x                              0x8C9A20

// CContainerWnd 
#define CContainerWnd__HandleCombine_x                             0x69B180
#define CContainerWnd__vftable_x                                   0xAD69D8

// CDisplay 
#define CDisplay__CleanGameUI_x                                    0x4B33E0
#define CDisplay__GetClickedActor_x                                0x4ABCA0
#define CDisplay__GetUserDefinedColor_x                            0x4AA880
#define CDisplay__GetWorldFilePath_x                               0x4A9CD0
#define CDisplay__is3dON_x                                         0x4A9160
#define CDisplay__ReloadUI_x                                       0x4BE8D0
#define CDisplay__WriteTextHD2_x                                   0x4AF730

// CEditBaseWnd 
#define CEditBaseWnd__SetSel_x                                     0x8EFE60

// CEditWnd 
#define CEditWnd__DrawCaret_x                                      0x8DDD40
#define CEditWnd__GetCharIndexPt_x                                 0x8DEDD0
#define CEditWnd__GetDisplayString_x                               0x8DDEF0
#define CEditWnd__GetHorzOffset_x                                  0x8DE230
#define CEditWnd__GetLineForPrintableChar_x                        0x8DE8A0
#define CEditWnd__GetSelStartPt_x                                  0x8DF080
#define CEditWnd__GetSTMLSafeText_x                                0x8DE3D0
#define CEditWnd__PointFromPrintableChar_x                         0x8DE990
#define CEditWnd__SelectableCharFromPoint_x                        0x8DEB10
#define CEditWnd__SetEditable_x                                    0x8DE3A0

// CEverQuest 
#define CEverQuest__ClickedPlayer_x                                0x558110
#define CEverQuest__CreateTargetIndicator_x                        0x559000
#define CEverQuest__DeleteTargetIndicator_x                        0x559080
#define CEverQuest__DoTellWindow_x                                 0x473400
#define CEverQuest__DropHeldItemOnGround_x                         0x56F1B0
#define CEverQuest__dsp_chat_x                                     0x473740
#define CEverQuest__Emote_x                                        0x56D500
#define CEverQuest__EnterZone_x                                    0x568500
#define CEverQuest__GetBodyTypeDesc_x                              0x5524C0
#define CEverQuest__GetClassDesc_x                                 0x55BD90
#define CEverQuest__GetClassThreeLetterCode_x                      0x55C390
#define CEverQuest__GetDeityDesc_x                                 0x552DA0
#define CEverQuest__GetLangDesc_x                                  0x552850
#define CEverQuest__GetRaceDesc_x                                  0x55C550
#define CEverQuest__InterpretCmd_x                                 0x560360
#define CEverQuest__LeftClickedOnPlayer_x                          0x573950
#define CEverQuest__LMouseUp_x                                     0x575A50
#define CEverQuest__RightClickedOnPlayer_x                         0x574460
#define CEverQuest__RMouseUp_x                                     0x5754B0
#define CEverQuest__SetGameState_x                                 0x5589D0
#define CEverQuest__UPCNotificationFlush_x                         0x5502E0
#define CEverQuest__IssuePetCommand_x                              0x560D40

// CGaugeWnd 
#define CGaugeWnd__CalcFillRect_x                                  0x6ABDE0
#define CGaugeWnd__CalcLinesFillRect_x                             0x6ABE40
#define CGaugeWnd__Draw_x                                          0x6AC270

// CGuild
#define CGuild__FindMemberByName_x                                 0x4371E0

// CHotButtonWnd 
#define CHotButtonWnd__DoHotButton_x                               0x6C81D0

// CInvSlotMgr 
#define CInvSlotMgr__FindInvSlot_x                                 0x6D5280
#define CInvSlotMgr__MoveItem_x                                    0x6D6130
#define CInvSlotMgr__SelectSlot_x                                  0x6D5330

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x6D4730
#define CInvSlot__SliderComplete_x                                 0x6D1FA0
#define CInvSlot__GetItemBase_x                                    0x6D1430

// CInvSlotWnd
#define CInvSlotWnd__DrawTooltip_x                                 0x6D7590

// CItemDisplayWnd 
#define CItemDisplayWnd__SetSpell_x                                0x79F930
#define CItemDisplayWnd__UpdateStrings_x                           0x6D96E0

// CLabel 
#define CLabel__Draw_x                                             0x6F2D60

// CListWnd
#define CListWnd__CListWnd_x                                       0x8B5B50
#define CListWnd__dCListWnd_x                                      0x8B6B70
#define CListWnd__AddColumn_x                                      0x8B6B10
#define CListWnd__AddColumn1_x                                     0x8B6390
#define CListWnd__AddLine_x                                        0x8B5E10
#define CListWnd__AddString_x                                      0x8B6020
#define CListWnd__CalculateFirstVisibleLine_x                      0x8B2E80
#define CListWnd__CalculateVSBRange_x                              0x8B5000
#define CListWnd__ClearSel_x                                       0x8B2190
#define CListWnd__ClearAllSel_x                                    0x8B2140
#define CListWnd__CloseAndUpdateEditWindow_x                       0x8B59E0
#define CListWnd__Compare_x                                        0x8B3980
#define CListWnd__Draw_x                                           0x8B4C10
#define CListWnd__DrawColumnSeparators_x                           0x8B4AA0
#define CListWnd__DrawHeader_x                                     0x8B2450
#define CListWnd__DrawItem_x                                       0x8B3FD0
#define CListWnd__DrawLine_x                                       0x8B4740
#define CListWnd__DrawSeparator_x                                  0x8B4B40
#define CListWnd__EnsureVisible_x                                  0x8B2FE0
#define CListWnd__ExtendSel_x                                      0x8B3EE0
#define CListWnd__GetColumnMinWidth_x                              0x8B1B00
#define CListWnd__GetColumnWidth_x                                 0x8B1A20
#define CListWnd__GetCurSel_x                                      0x8B1200
#define CListWnd__GetItemAtPoint_x                                 0x8B3280
#define CListWnd__GetItemAtPoint1_x                                0x8B32F0
#define CListWnd__GetItemData_x                                    0x8B1530
#define CListWnd__GetItemHeight_x                                  0x8B2AE0
#define CListWnd__GetItemIcon_x                                    0x8B1710
#define CListWnd__GetItemRect_x                                    0x8B30C0
#define CListWnd__GetItemText_x                                    0x8B15C0
#define CListWnd__GetSelList_x                                     0x8B6280
#define CListWnd__GetSeparatorRect_x                               0x8B38B0
#define CListWnd__RemoveLine_x                                     0x8B6200
#define CListWnd__SetColors_x                                      0x8B1350
#define CListWnd__SetColumnJustification_x                         0x8B1DD0
#define CListWnd__SetColumnWidth_x                                 0x8B1AB0
#define CListWnd__SetCurSel_x                                      0x8B1240
#define CListWnd__SetItemColor_x                                   0x8B56C0
#define CListWnd__SetItemData_x                                    0x8B21F0
#define CListWnd__SetItemText_x                                    0x8B5500
#define CListWnd__ShiftColumnSeparator_x                           0x8B5390
#define CListWnd__Sort_x                                           0x8B6C70
#define CListWnd__ToggleSel_x                                      0x8B20C0

// CMapViewWnd 
#define CMapViewWnd__CMapViewWnd_x                                 0x70BD70

// CMerchantWnd 
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x72CFF0
#define CMerchantWnd__RequestBuyItem_x                             0x734050
#define CMerchantWnd__RequestSellItem_x                            0x734B10
#define CMerchantWnd__SelectRecoverySlot_x                         0x72D2A0
#define CMerchantWnd__SelectBuySellSlot_x                          0x72C4A0
#define CMerchantWnd__ActualSelect_x                               0x730F20

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x847340
#define CPacketScrambler__hton_x                                   0x847350

// CSidlManager 
#define CSidlManager__FindScreenPieceTemplate1_x                   0x8D47D0
#define CSidlManager__CreateLabel_x                                0x795900

// CSidlScreenWnd 
#define CSidlScreenWnd__CalculateHSBRange_x                        0x659F70
#define CSidlScreenWnd__CalculateVSBRange_x                        0x659E90
#define CSidlScreenWnd__ConvertToRes_x                             0x8EFD40
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x8CC590
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x8CD760
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x8CD810
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x8CCCE0
#define CSidlScreenWnd__DrawSidlPiece_x                            0x8CBF40
#define CSidlScreenWnd__EnableIniStorage_x                         0x8CB6A0
#define CSidlScreenWnd__GetSidlPiece_x                             0x8CC130
#define CSidlScreenWnd__Init1_x                                    0x8CD430
#define CSidlScreenWnd__LoadIniInfo_x                              0x8CC640
#define CSidlScreenWnd__LoadIniListWnd_x                           0x8CB860
#define CSidlScreenWnd__LoadSidlScreen_x                           0x8CCF20
#define CSidlScreenWnd__StoreIniInfo_x                             0x8CB300
#define CSidlScreenWnd__StoreIniVis_x                              0x8CB650
#define CSidlScreenWnd__WndNotification_x                          0x8CD1B0
#define CSidlScreenWnd__GetChildItem_x                             0x8CB770
#define CSidlScreenWnd__HandleLButtonUp_x                          0x8BF060

// CSkillMgr
#define CSkillMgr__IsAvailable_x                                   0x5F7D90
#define CSkillMgr__GetSkillCap_x                                   0x5F7F50
#define CSkillMgr__GetNameToken_x                                  0x5F79B0

// CSliderWnd 
#define CSliderWnd__GetValue_x                                     0x8EEFF0
#define CSliderWnd__SetValue_x                                     0x8EF1C0
#define CSliderWnd__SetNumTicks_x                                  0x8EF940

// CSpellBookWnd 
#define CSpellBookWnd__MemorizeSet_x                               0x79D590

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x8EA990
#define CStmlWnd__CalculateHSBRange_x                              0x8E2EE0
#define CStmlWnd__CalculateVSBRange_x                              0x8E2F70
#define CStmlWnd__CanBreakAtCharacter_x                            0x8E30F0
#define CStmlWnd__FastForwardToEndOfTag_x                          0x8E39D0
#define CStmlWnd__ForceParseNow_x                                  0x8EB2E0
#define CStmlWnd__GetNextTagPiece_x                                0x8E38D0
#define CStmlWnd__GetSTMLText_x                                    0x6910B0
#define CStmlWnd__GetVisibleText_x                                 0x8E4420
#define CStmlWnd__InitializeWindowVariables_x                      0x8E6790
#define CStmlWnd__MakeStmlColorTag_x                               0x8E21E0
#define CStmlWnd__MakeWndNotificationTag_x                         0x8E2240
#define CStmlWnd__SetSTMLText_x                                    0x8E7FE0
#define CStmlWnd__StripFirstSTMLLines_x                            0x8EA630
#define CStmlWnd__UpdateHistoryString_x                            0x8E5350

// CTabWnd 
#define CTabWnd__Draw_x                                            0x8E18F0
#define CTabWnd__DrawCurrentPage_x                                 0x8E1180
#define CTabWnd__DrawTab_x                                         0x8E0F40
#define CTabWnd__GetCurrentPage_x                                  0x8E1530
#define CTabWnd__GetPageInnerRect_x                                0x8E0C30
#define CTabWnd__GetTabInnerRect_x                                 0x8E0E30
#define CTabWnd__GetTabRect_x                                      0x8E0D00
#define CTabWnd__InsertPage_x                                      0x8E1BE0
#define CTabWnd__SetPage_x                                         0x8E1560
#define CTabWnd__SetPageRect_x                                     0x8E1830
#define CTabWnd__UpdatePage_x                                      0x8E1B80

// CTextOverlay 
#define CTextOverlay__DisplayText_x                                0x433000

// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x8C95E0

// CXMLDataManager 
#define CXMLDataManager__GetXMLData_x                              0x8F5160

// CXMLSOMDocumentBase 
#define CXMLSOMDocumentBase__XMLRead_x                             0x8AF460

// CXStr 
// WARNING:  Be sure that none of these offsets are identical! 
// 
// Note:  dCXStr, CXStr1, & CXStr3 can be found in the 'BookWindow' constructor. 
#define CXStr__CXStr_x                                             0x599F20
#define CXStr__CXStr1_x                                            0x403790
#define CXStr__CXStr3_x                                            0x8925D0
#define CXStr__dCXStr_x                                            0x8EBDA0
#define CXStr__operator_equal_x                                    0x892740
#define CXStr__operator_equal1_x                                   0x892790
#define CXStr__operator_plus_equal1_x                              0x893890

// CXWnd 
#define CXWnd__BringToTop_x                                        0x8BE280
#define CXWnd__Center_x                                            0x8C4420
#define CXWnd__ClrFocus_x                                          0x8BDE50
#define CXWnd__DoAllDrawing_x                                      0x8C4070
#define CXWnd__DrawChildren_x                                      0x8C4210
#define CXWnd__DrawColoredRect_x                                   0x8BE620
#define CXWnd__DrawTooltip_x                                       0x8BE8C0
#define CXWnd__DrawTooltipAtPoint_x                                0x8C2FE0
#define CXWnd__GetBorderFrame_x                                    0x8BED20
#define CXWnd__GetChildWndAt_x                                     0x8C4DF0
#define CXWnd__GetClientClipRect_x                                 0x8BEAD0
#define CXWnd__GetScreenClipRect_x                                 0x8C36E0
#define CXWnd__GetScreenRect_x                                     0x8BEEF0
#define CXWnd__GetTooltipRect_x                                    0x8BE750
#define CXWnd__GetWindowTextA_x                                    0x424550
#define CXWnd__IsActive_x                                          0x8B9990
#define CXWnd__IsDescendantOf_x                                    0x8BEC60
#define CXWnd__IsReallyVisible_x                                   0x8C2030
#define CXWnd__IsType_x                                            0x8F1980
#define CXWnd__Move_x                                              0x8C1710
#define CXWnd__Move1_x                                             0x8C3D20
#define CXWnd__ProcessTransition_x                                 0x8BE230
#define CXWnd__Refade_x                                            0x8BE000
#define CXWnd__Resize_x                                            0x8BEFC0
#define CXWnd__Right_x                                             0x8C34E0
#define CXWnd__SetFocus_x                                          0x8C0860
#define CXWnd__SetFont_x                                           0x8BDEA0
#define CXWnd__SetKeyTooltip_x                                     0x8BF230
#define CXWnd__SetMouseOver_x                                      0x8C3A10
#define CXWnd__StartFade_x                                         0x8BE2D0
#define CXWnd__GetChildItem_x                                      0x8C3950

// CXWndManager 
#define CXWndManager__DrawCursor_x                                 0x8BB230
#define CXWndManager__DrawWindows_x                                0x8BAE70
#define CXWndManager__GetKeyboardFlags_x                           0x8B94D0
#define CXWndManager__HandleKeyboardMsg_x                          0x8B9E20
#define CXWndManager__RemoveWnd_x                                  0x8B9B20

// CDBStr
#define CDBStr__GetString_x                                        0x4A7640

// EQ_Character 
#define EQ_Character__CastSpell_x                                  0x44D710
#define EQ_Character__Cur_HP_x                                     0x4625B0
#define EQ_Character__Cur_Mana_x                                   0x455CE0
#define EQ_Character__GetAACastingTimeModifier_x                   0x446A20
#define EQ_Character__GetCharInfo2_x                               0x866900
#define EQ_Character__GetFocusCastingTimeModifier_x                0x43EE00
#define EQ_Character__GetFocusRangeModifier_x                      0x43EE60
#define EQ_Character__Max_Endurance_x                              0x5BF820
#define EQ_Character__Max_HP_x                                     0x458920
#define EQ_Character__Max_Mana_x                                   0x5BF650
#define EQ_Character__doCombatAbility_x                            0x5BCD60
#define EQ_Character__UseSkill_x                                   0x46D840
#define EQ_Character__GetConLevel_x                                0x5B1C70
#define EQ_Character__IsExpansionFlag_x                            0x423AA0
#define EQ_Character__TotalEffect_x                                0x44A960
#define EQ_Character__GetPCSpellAffect_x                           0x446E20
#define EQ_Character__SpellDuration_x                              0x444D20

// EQ_Item (ItemClient)
#define EQ_Item__CanDrop_x                                         0x5920A0
#define EQ_Item__CreateItemTagString_x                             0x845C60
#define EQ_Item__IsStackable_x                                     0x83B560
#define EQ_Item__GetImageNum_x                                     0x83DF80
#define EQ_Item__CreateItemClient_x                                0x592C60
#define EQ_Item__GetItemValue_x                                    0x844990
#define EQ_Item__ValueSellMerchant_x                               0x846F90

// EQ_LoadingS 
#define EQ_LoadingS__SetProgressBar_x                              0x4C7010
#define EQ_LoadingS__Array_x                                       0xC14530

// EQ_PC 
#define EQ_PC__DestroyHeldItemOrMoney_x                            0x5C0E70
#define EQ_PC__GetAlternateAbilityId_x                             0x84F1E0
#define EQ_PC__GetCombatAbility_x                                  0x84F270
#define EQ_PC__GetCombatAbilityTimer_x                             0x84A150
#define EQ_PC__GetItemTimerValue_x                                 0x5BA880
#define EQ_PC__HasLoreItem_x                                       0x5B5160
#define EQ_PC__AlertInventoryChanged_x                             0x5B1C40
#define EQ_PC__GetPcZoneClient_x                                   0x5DB500
#define EQ_PC__RemoveMyAffect_x                                    0x5B9D30

// EQItemList 
#define EQItemList__EQItemList_x                                   0x5106E0
#define EQItemList__add_object_x                                   0x53CE50
#define EQItemList__add_item_x                                     0x510620
#define EQItemList__delete_item_x                                  0x510AD0
#define EQItemList__FreeItemList_x                                 0x5109D0

// EQMisc
#define EQMisc__GetActiveFavorCost_x                               0x4A6880

// EQPlayer 
#define EQPlayer__ChangeBoneStringSprite_x                         0x5C6430
#define EQPlayer__dEQPlayer_x                                      0x5CF270
#define EQPlayer__DoAttack_x                                       0x5E1220
#define EQPlayer__EQPlayer_x                                       0x5D1690
#define EQPlayer__SetNameSpriteState_x                             0x5CC1F0
#define EQPlayer__SetNameSpriteTint_x                              0x5C7870
#define PlayerBase__HasProperty_j_x                                0x922770
#define EQPlayer__IsTargetable_x                                   0x923070
#define EQPlayer__CanSee_x                                         0x923590
#define PlayerZoneClient__ChangeHeight_x                           0x5E10E0
#define EQPlayer__CanSeeTargetIndicator_x                          0x923680

//EQPlayerManager
#define EQPlayerManager__GetSpawnByID_x                            0x5D59F0
#define EQPlayerManager__GetSpawnByName_x                          0x5D5E50
#define EQPlayerManager__GetPlayerFromPartialName_x                0x5D5A20

// KeyPressHandler 
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x5982C0
#define KeypressHandler__AttachKeyToEqCommand_x                    0x598300
#define KeypressHandler__ClearCommandStateArray_x                  0x597EB0
#define KeypressHandler__HandleKeyDown_x                           0x596810
#define KeypressHandler__HandleKeyUp_x                             0x596B30
#define KeypressHandler__SaveKeymapping_x                          0x597F80

// MapViewMap 
#define MapViewMap__Clear_x                                        0x704700
#define MapViewMap__SaveEx_x                                       0x707A30

#define PlayerPointManager__GetAltCurrency_x                       0x861930

// StringTable 
#define StringTable__getString_x                                   0x85C0F0

// PcZoneClient
#define PcZoneClient__GetPcSkillLimit_x                            0x5BF2D0
#define PcZoneClient__RemovePetEffect_x                            0x5BAD50
#define PcZoneClient__HasAlternateAbility_x                        0x5BB800
#define PcZoneClient__GetCurrentMod_x                              0x457CA0
#define PcZoneClient__GetModCap_x                                  0x4554F0

//Doors
#define EQSwitch__UseSwitch_x                                      0x54EB80

//IconCache
#define IconCache__GetIcon_x                                       0x6A1730

//CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x698510
#define CContainerMgr__CloseContainer_x                            0x698D30

//CQuantityWnd
#define CQuantityWnd__Open_x                                       0x765A40

//CHelpWnd
#define CHelpWnd__SetFile_x                                        0x58B250

//EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x4DEED0
#define EQ_Spell__SpellAffects_x                                   0x4DC580
#define EQ_Spell__GetSpellBaseByAttrib_x                           0x4DC5F0
#define CharacterZoneClient__CalcAffectChange_x                    0x445E50
#define CLootWnd__LootAll_x                                        0x6FA0E0

//CTargetWnd
#define CTargetWnd__GetBuffCaster_x                                0x7AC380
#define CTargetWnd__WndNotification_x                              0x7ABE70
#define CTargetWnd__UpdateBuffs_x                                  0x7AC560

//CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x7B1560

//EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x4D7DC0

//CCombatSkillsSelectWnd
#define CCombatSkillsSelectWnd__ShouldDisplayThisSkill_x           0x4969F0

//CTextureAnimation
#define CTextureAnimation__SetCurCell_x                            0x8DD370
#define CSidlManager__FindAnimation1_x                             0x8D26C0

//CAltAbilityData
#define CAltAbilityData__GetMercCurrentRank_x                      0x4CE730
#define CAltAbilityData__GetMercMaxRank_x                          0x4CE6E0
#define CAltAbilityData__GetMaxRank_x                              0x4C35C0

//CTargetRing
#define CTargetRing__Cast_x                                        0x588B20

//CharacterBase
#define CharacterBase__GetMemorizedSpell_x                         0x454590

//CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x682FF0
#define CCastSpellWnd__IsBardSongPlaying_x                         0x682750

//messages
#define msg_spell_worn_off_x                                       0x4E6910
#define msg_new_text_x                                             0x4EFC70
#define msgTokenTextParam_x                                        0x4EC770

//SpellManager
#define SpellManager__vftable_x                                    0xAB2DB0
#define SpellManager__SpellManager_x                               0x47B190