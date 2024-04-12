Route121_SafariZoneEntrance_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route121_SafariZoneEntrance_OnFrame
	.byte 0

Route121_SafariZoneEntrance_OnFrame:
	map_script_2 VAR_SAFARI_ZONE_STATE, 1, Route121_SafariZoneEntrance_EventScript_ExitSafariZone
	.2byte 0

Route121_SafariZoneEntrance_EventScript_ExitSafariZone::
	lockall
	call_if_set FLAG_SAFARI_SHINY_PAID, Route121_SafariZoneEntrance_EventScript_ExitShinyClear
	applymovement OBJ_EVENT_ID_PLAYER, Route121_SafariZoneEntrance_Movement_ExitSafariZone
	waitmovement 0
	setvar VAR_SAFARI_ZONE_STATE, 0
	releaseall
	end

Route121_SafariZoneEntrance_Movement_ExitSafariZone:
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

Route121_SafariZoneEntrance_EventScript_ExitShinyClear::
	clearflag FLAG_SAFARI_SHINY_PAID
	clearflag FLAG_FORCE_SHINY
	return

Route121_SafariZoneEntrance_EventScript_WelcomeAttendant::
	msgbox Route121_SafariZoneEntrance_Text_WelcomeToSafariZone, MSGBOX_NPC
	end

Route121_SafariZoneEntrance_EventScript_InfoAttendant::
	lock
	faceplayer
	msgbox Route121_SafariZoneEntrance_Text_WelcomeFirstTime, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, Route121_SafariZoneEntrance_EventScript_FirstTimeInfo
	msgbox Route121_SafariZoneEntrance_Text_ComeInAndEnjoy, MSGBOX_DEFAULT
	release
	end

Route121_SafariZoneEntrance_EventScript_FirstTimeInfo::
	msgbox Route121_SafariZoneEntrance_Text_FirstTimeInfo, MSGBOX_DEFAULT
	release
	end

Route121_SafariZoneEntrance_EventScript_ShinyGuy::
	lock
	faceplayer
	goto_if_set FLAG_SAFARI_SHINY_PAID, Route121_SafariZoneEntrance_EventScript_ShinyGuyPaid
	msgbox Route121_SafariZoneEntrance_Text_ShinyGuyHi, MSGBOX_YESNO
	switch VAR_RESULT
	case NO, Route121_SafariZoneEntrance_EventScript_ShinyGuyBye
	case YES, Route121_SafariZoneEntrance_EventScript_ShinyGuyCheckMoney
	release
	end

Route121_SafariZoneEntrance_EventScript_ShinyGuyPaid::
	msgbox Route121_SafariZoneEntrance_Text_ShinyGuyPaid, MSGBOX_DEFAULT
	release
	end

Route121_SafariZoneEntrance_EventScript_ShinyGuyBye::
	msgbox Route121_SafariZoneEntrance_Text_ShinyGuyBye, MSGBOX_DEFAULT
	release
	end

Route121_SafariZoneEntrance_EventScript_ShinyGuyCheckMoney::
	checkmoney 50000
	switch VAR_RESULT
	case FALSE, Route121_SafariZoneEntrance_EventScript_ShinyGuyNotEnoughMoney
	case TRUE, Route121_SafariZoneEntrance_EventScript_ShinyGuyDoTask
	release
	end

Route121_SafariZoneEntrance_EventScript_ShinyGuyNotEnoughMoney::
	msgbox Route121_SafariZoneEntrance_Text_ShinyGuyNotEnoughMoney, MSGBOX_DEFAULT
	release
	end

Route121_SafariZoneEntrance_EventScript_ShinyGuyDoTask::
	setflag FLAG_SAFARI_SHINY_PAID
	removemoney 50000
	fadescreen 3
	fadescreen 2
	fadescreen 3
	fadescreen 2
	msgbox Route121_SafariZoneEntrance_Text_ShinyGuyThankYou, MSGBOX_DEFAULT
	release
	end

Route121_SafariZoneEntrance_EventScript_EntranceCounterTrigger::
	lockall
	setflag FLAG_HIDE_SAFARI_ZONE_SOUTH_CONSTRUCTION_WORKERS
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	showmoneybox 0, 0
	msgbox Route121_SafariZoneEntrance_Text_WouldYouLikeToPlay, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, Route121_SafariZoneEntrance_EventScript_TryEnterSafariZone
	msgbox Route121_SafariZoneEntrance_Text_PlayAnotherTime, MSGBOX_DEFAULT
	goto Route121_SafariZoneEntrance_EventScript_MovePlayerBackFromCounter
	end

Route121_SafariZoneEntrance_EventScript_TryEnterSafariZone::
	checkitem ITEM_POKEBLOCK_CASE
	goto_if_eq VAR_RESULT, 0, Route121_SafariZoneEntrance_EventScript_NoPokeblockCase
	call Route121_SafariZoneEntrance_EventScript_CheckHasRoomForPokemon
	checkmoney 500
	goto_if_eq VAR_RESULT, 0, Route121_SafariZoneEntrance_EventScript_NotEnoughMoney
	playse SE_SHOP
	msgbox Route121_SafariZoneEntrance_Text_ThatWillBe500Please, MSGBOX_DEFAULT
	removemoney 500
	updatemoneybox
	msgbox Route121_SafariZoneEntrance_Text_HereAreYourSafariBalls, MSGBOX_DEFAULT
	playfanfare MUS_OBTAIN_ITEM
	message Route121_SafariZoneEntrance_Text_Received30SafariBalls
	waitfanfare
	msgbox Route121_SafariZoneEntrance_Text_PleaseEnjoyYourself, MSGBOX_DEFAULT
	closemessage
	hidemoneybox
	applymovement OBJ_EVENT_ID_PLAYER, Route121_SafariZoneEntrance_Movement_EnterSafariZone
	waitmovement 0
	special EnterSafariMode
	setvar VAR_SAFARI_ZONE_STATE, 2
	clearflag FLAG_GOOD_LUCK_SAFARI_ZONE
	warp MAP_SAFARI_ZONE_SOUTH, 32, 33
	waitstate
	end

Route121_SafariZoneEntrance_EventScript_CheckHasRoomForPokemon::
	getpartysize
	goto_if_ne VAR_RESULT, PARTY_SIZE, Route121_SafariZoneEntrance_EventScript_HasRoomForPokemon
	specialvar VAR_RESULT, ScriptCheckFreePokemonStorageSpace
	goto_if_eq VAR_RESULT, 1, Route121_SafariZoneEntrance_EventScript_HasRoomForPokemon
	msgbox Route121_SafariZoneEntrance_Text_PCIsFull, MSGBOX_DEFAULT
	goto Route121_SafariZoneEntrance_EventScript_MovePlayerBackFromCounter
	end

Route121_SafariZoneEntrance_EventScript_HasRoomForPokemon::
	return

Route121_SafariZoneEntrance_EventScript_NoPokeblockCase::
	msgbox Route121_SafariZoneEntrance_Text_YouNeedPokeblockCase, MSGBOX_DEFAULT
	goto Route121_SafariZoneEntrance_EventScript_MovePlayerBackFromCounter
	end

Route121_SafariZoneEntrance_EventScript_NotEnoughMoney::
	msgbox Route121_SafariZoneEntrance_Text_NotEnoughMoney, MSGBOX_DEFAULT
	goto Route121_SafariZoneEntrance_EventScript_MovePlayerBackFromCounter
	end

Route121_SafariZoneEntrance_EventScript_MovePlayerBackFromCounter::
	closemessage
	hidemoneybox
	applymovement OBJ_EVENT_ID_PLAYER, Route121_SafariZoneEntrance_Movement_BackAwayFromCounter
	waitmovement 0
	releaseall
	end

Route121_SafariZoneEntrance_Movement_BackAwayFromCounter:
	walk_right
	step_end

Route121_SafariZoneEntrance_Movement_EnterSafariZone:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_down
	delay_16
	step_end

Route121_SafariZoneEntrance_EventScript_TrainerTipSign::
	msgbox Route121_SafariZoneEntrance_Text_TrainerTip, MSGBOX_SIGN
	end

Route121_SafariZoneEntrance_Text_ShinyGuyHi:
	.string "Hi, I'm the SHINY GUY!\p"
	.string "Using my magical psychic powers,\n"
	.string "I can make it so that everything\l"
	.string "in the SAFARI ZONE is SHINY!\p"
	.string "I'll do this for the low\n"
	.string "price of 50000 money units.\l"
	.string "What do you say?$"

Route121_SafariZoneEntrance_Text_ShinyGuyBye:
	.string "See you next time!$"

Route121_SafariZoneEntrance_Text_ShinyGuyNotEnoughMoney:
	.string "Looks like you don't have enough\n"
	.string "money. Come back when you aren't\l"
	.string "poor!$"

Route121_SafariZoneEntrance_Text_ShinyGuyThankYou:
	.string "Thank you! The next time you enter\n"
	.string "the SAFARI ZONE, you will find that\l"
	.string "everything has a little bit more\l"
	.string "sparkle.$"

Route121_SafariZoneEntrance_Text_ShinyGuyPaid:
	.string "Enjoy my services! Refer me to\n"
	.string "your friends! Catch a good one!$"
