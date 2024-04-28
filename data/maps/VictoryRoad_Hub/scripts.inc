.set LOCALID_DRAKE, 5

VictoryRoad_Hub_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, VictoryRoad_Hub_OnLoad
	.byte 0

VictoryRoad_Hub_OnLoad::
	compare VAR_VR_VICTORY, 8
	call_if_ge VictoryRoad_Hub_EventScript_ClearStatues
	call_if_set FLAG_VR_DEFEATED_ROXANNE, VictoryRoad_Hub_EventScript_BlockRoxanne
	call_if_set FLAG_VR_DEFEATED_BRAWLY, VictoryRoad_Hub_EventScript_BlockBrawly
	call_if_set FLAG_VR_DEFEATED_WATTSON, VictoryRoad_Hub_EventScript_BlockWattson
	call_if_set FLAG_VR_DEFEATED_FLANNERY, VictoryRoad_Hub_EventScript_BlockFlannery
	call_if_set FLAG_VR_DEFEATED_NORMAN, VictoryRoad_Hub_EventScript_BlockNorman
	call_if_set FLAG_VR_DEFEATED_WINONA, VictoryRoad_Hub_EventScript_BlockWinona
	call_if_set FLAG_VR_DEFEATED_TATELIZA, VictoryRoad_Hub_EventScript_BlockTateLiza
	call_if_set FLAG_VR_DEFEATED_JUAN, VictoryRoad_Hub_EventScript_BlockJuan
	end

VictoryRoad_Hub_EventScript_BlockRoxanne::
	setmetatile 7, 32, METATILE_Cave_FrontSlope, TRUE
	setmetatile 8, 32, METATILE_Cave_FrontSlope, TRUE
	setmetatile 9, 32, METATILE_Cave_FrontSlope, TRUE
	setmetatile 7, 33, METATILE_Cave_FrontSlope, TRUE
	setmetatile 8, 33, METATILE_Cave_FrontSlope, TRUE
	setmetatile 9, 33, METATILE_Cave_FrontSlope, TRUE
	return

VictoryRoad_Hub_EventScript_BlockBrawly::
	setmetatile 21, 30, METATILE_Cave_FrontSlope, TRUE
	setmetatile 22, 30, METATILE_Cave_FrontSlope, TRUE
	setmetatile 23, 30, METATILE_Cave_FrontSlope, TRUE
	setmetatile 21, 31, METATILE_Cave_FrontSlope, TRUE
	setmetatile 22, 31, METATILE_Cave_FrontSlope, TRUE
	setmetatile 23, 31, METATILE_Cave_FrontSlope, TRUE
	return

VictoryRoad_Hub_EventScript_BlockWattson::
	setmetatile 31, 25, METATILE_Cave_FrontSlope, TRUE
	setmetatile 32, 25, METATILE_Cave_FrontSlope, TRUE
	setmetatile 33, 25, METATILE_Cave_FrontSlope, TRUE
	setmetatile 31, 26, METATILE_Cave_FrontSlope, TRUE
	setmetatile 32, 26, METATILE_Cave_FrontSlope, TRUE
	setmetatile 33, 26, METATILE_Cave_FrontSlope, TRUE
	return

VictoryRoad_Hub_EventScript_BlockFlannery::
	setmetatile 12, 23, METATILE_Cave_FrontSlope, TRUE
	setmetatile 13, 23, METATILE_Cave_FrontSlope, TRUE
	setmetatile 14, 23, METATILE_Cave_FrontSlope, TRUE
	setmetatile 12, 24, METATILE_Cave_FrontSlope, TRUE
	setmetatile 13, 24, METATILE_Cave_FrontSlope, TRUE
	setmetatile 14, 24, METATILE_Cave_FrontSlope, TRUE
	return

VictoryRoad_Hub_EventScript_BlockNorman::
	setmetatile 21, 16, METATILE_Cave_FrontSlope, TRUE
	setmetatile 22, 16, METATILE_Cave_FrontSlope, TRUE
	setmetatile 23, 16, METATILE_Cave_FrontSlope, TRUE
	setmetatile 21, 17, METATILE_Cave_FrontSlope, TRUE
	setmetatile 22, 17, METATILE_Cave_FrontSlope, TRUE
	setmetatile 23, 17, METATILE_Cave_FrontSlope, TRUE
	return

VictoryRoad_Hub_EventScript_BlockWinona::
	setmetatile 7, 14, METATILE_Cave_FrontSlope, TRUE
	setmetatile 8, 14, METATILE_Cave_FrontSlope, TRUE
	setmetatile 9, 14, METATILE_Cave_FrontSlope, TRUE
	setmetatile 7, 15, METATILE_Cave_FrontSlope, TRUE
	setmetatile 8, 15, METATILE_Cave_FrontSlope, TRUE
	setmetatile 9, 15, METATILE_Cave_FrontSlope, TRUE
	return

VictoryRoad_Hub_EventScript_BlockTateLiza::
	setmetatile 32, 13, METATILE_Cave_FrontSlope, TRUE
	setmetatile 33, 13, METATILE_Cave_FrontSlope, TRUE
	setmetatile 34, 13, METATILE_Cave_FrontSlope, TRUE
	setmetatile 32, 14, METATILE_Cave_FrontSlope, TRUE
	setmetatile 33, 14, METATILE_Cave_FrontSlope, TRUE
	setmetatile 34, 14, METATILE_Cave_FrontSlope, TRUE
	return

VictoryRoad_Hub_EventScript_BlockJuan::
	setmetatile 16, 8, METATILE_Cave_FrontSlope, TRUE
	setmetatile 17, 8, METATILE_Cave_FrontSlope, TRUE
	setmetatile 18, 8, METATILE_Cave_FrontSlope, TRUE
	setmetatile 16, 9, METATILE_Cave_FrontSlope, TRUE
	setmetatile 17, 9, METATILE_Cave_FrontSlope, TRUE
	setmetatile 18, 9, METATILE_Cave_FrontSlope, TRUE
	return

VictoryRoad_Hub_EventScript_DrakeTrigger::
	lock
	applymovement LOCALID_DRAKE, VictoryRoad_Hub_Movement_DrakeTrigger
	setflag FLAG_VR_HIDE_DRAKE
	addvar VAR_VR_VICTORY, 1
	waitmovement 0
	playse SE_EXIT
	removeobject LOCALID_DRAKE
	release
	end

VictoryRoad_Hub_Movement_DrakeTrigger:
	delay_16
	face_left
	delay_16
	delay_16
	delay_16
	walk_up
	delay_16
	step_end

VictoryRoad_Hub_EventScript_ClearStatues::
	setflag FLAG_VR_HIDE_STATUES
	return

VictoryRoad_Hub_EventScript_Wally::
	lock
	faceplayer
	msgbox VictoryRoad_Hub_Text_Wally, MSGBOX_DEFAULT
	release
	end

VictoryRoad_Hub_EventScript_Statue::
	lock
	buffernumberstring STR_VAR_1, VAR_VR_VICTORY
	msgbox VictoryRoad_Hub_Text_Statue, MSGBOX_DEFAULT
	release
	end

VictoryRoad_Hub_Text_Wally:
	.string "VICTORY ROAD is so intimidating\n"
	.string "once you actually get in here…\p"
	.string "You go on ahead, I'll cheer you\n"
	.string "on from here!$"

VictoryRoad_Hub_Text_Statue:
	.string "Welcome, CHALLENGER!\p"
	.string "You have not yet completed the\n"
	.string "VICTORY ROAD CHALLENGE!\p"
	.string "You have defeated {STR_VAR_1} out\n"
	.string "of 8 LEADERS. Good luck.$"

