.set LOCALID_WALLY, 1

EverGrandeCity_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, EverGrandeCity_OnTransition
	.byte 0

EverGrandeCity_OnTransition:
	setflag FLAG_HIDE_VICTORY_ROAD_ENTRANCE_WALLY
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather
	call_if_set FLAG_DEFEATED_WALLY_VICTORY_ROAD, EverGrandeCity_EventScript_RemoveWally
	end

EverGrandeCity_EventScript_RemoveWally::
	removeobject LOCALID_WALLY
	return

EverGrandeCity_EventScript_VictoryRoadSign::
	msgbox EverGrandeCity_Text_EnteringVictoryRoad, MSGBOX_SIGN
	end

EverGrandeCity_EventScript_CitySign::
	msgbox EverGrandeCity_Text_CitySign, MSGBOX_SIGN
	end

EverGrandeCity_EventScript_PokemonLeagueSign::
	msgbox EverGrandeCity_Text_EnteringPokemonLeague, MSGBOX_SIGN
	end

EverGrandeCity_EventScript_SetVisitedEverGrande::
	setflag FLAG_VISITED_EVER_GRANDE_CITY
	setvar VAR_TEMP_1, 1
	end

EverGrandeCity_EventScript_WallyTrigger::
	lockall
	addobject LOCALID_WALLY
	playse SE_EXIT
	applymovement LOCALID_WALLY, EverGrandeCity_Movement_WallyEntrance
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
	goto EverGrandeCity_EventScript_WallyBattle
	end

EverGrandeCity_EventScript_WallyBattle::
	msgbox EverGrandeCity_Text_WallyNotGoingToLoseAnymore, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_WALLY_VR_1, EverGrandeCity_Text_WallyEntranceDefeat
	msgbox EverGrandeCity_Text_WallyPostEntranceBattle, MSGBOX_DEFAULT
	clearflag FLAG_HIDE_VICTORY_ROAD_ENTRANCE_WALLY
	setflag FLAG_DEFEATED_WALLY_VICTORY_ROAD
	setvar VAR_EVER_GRANDE_CITY_STATE, 1
	copyvar VAR_VICTORY_ROAD_1F_STATE, VAR_0x8008
	closemessage
	applymovement LOCALID_WALLY, EverGrandeCity_Movement_WallyExit
	waitmovement 0
	playse SE_EXIT
	removeobject LOCALID_WALLY
	releaseall
	end

EverGrandeCity_Movement_WallyEntrance:
	delay_16
	walk_down
	delay_16
	emote_exclamation_mark
	delay_16
	delay_16
	step_end

EverGrandeCity_Movement_WallyExit:
	delay_8
	walk_in_place_faster_up
	delay_16
	walk_up
	delay_16
	step_end

EverGrandeCity_Text_WallyNotGoingToLoseAnymore:
	.string "WALLY: Hi! {PLAYER}!\p"
	.string "I bet you're surprised to see me here!\p"
	.string "I made it all the way here, and it's\n"
	.string "all thanks to you!\p"
	.string "{PLAYER}, losing to you that time\n"
	.string "made me stronger!\p"
	.string "But I'm not going to lose anymore!\p"
	.string "I'm going to win! For the POKéMON who\n"
	.string "gave me courage and strength!\p"
	.string "Okay… Here I come!$"

EverGrandeCity_Text_WallyEntranceDefeat:
	.string "Wow!\n"
	.string "{PLAYER}, you are strong, after all!$"

EverGrandeCity_Text_WallyPostEntranceBattle:
	.string "WALLY: I couldn't beat you today,\n"
	.string "{PLAYER}, but one of these days, I'll\l"
	.string "catch up to you!$"

EverGrandeCity_Text_EnteringVictoryRoad:
	.string "ENTERING VICTORY ROAD$"

EverGrandeCity_Text_EnteringPokemonLeague:
	.string "ENTERING POKéMON LEAGUE\n"
	.string "CENTER GATE$"

EverGrandeCity_Text_CitySign:
	.string "EVER GRANDE CITY\p"
	.string "“The paradise of flowers, the sea,\n"
	.string "and POKéMON.”$"

