.set LOCALID_TREVOR, 9

FieryPath_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, FieryPath_OnTransition
	.byte 0

FieryPath_OnTransition:
	call_if_unset FLAG_LANDMARK_FIERY_PATH, FieryPath_EventScript_MoveScottToFallarbor
	setflag FLAG_LANDMARK_FIERY_PATH
	end

FieryPath_EventScript_TrevorTrigger1::
	lockall
	applymovement LOCALID_TREVOR, FieryPath_Movement_TrevorIntro1
	waitmovement 0
	goto_if_set FLAG_TREVOR_TALK_DONE, FieryPath_EventScript_LetsBattle
	goto FieryPath_EventScript_TrevorIntro
	end

FieryPath_EventScript_TrevorTrigger2::
	lockall
	applymovement LOCALID_TREVOR, FieryPath_Movement_TrevorIntro2
	waitmovement 0
	goto_if_set FLAG_TREVOR_TALK_DONE, FieryPath_EventScript_LetsBattle
	goto FieryPath_EventScript_TrevorIntro
	end

FieryPath_EventScript_TrevorTrigger3::
	lockall
	applymovement LOCALID_TREVOR, FieryPath_Movement_TrevorIntro3
	waitmovement 0
	goto_if_set FLAG_TREVOR_TALK_DONE, FieryPath_EventScript_LetsBattle
	goto FieryPath_EventScript_TrevorIntro
	end

FieryPath_EventScript_TrevorIntro::
	msgbox FieryPath_Text_TrevorIntro, MSGBOX_DEFAULT
	setflag FLAG_TREVOR_TALK_DONE
	goto FieryPath_EventScript_LetsBattle
	end

FieryPath_EventScript_LetsBattle::
	msgbox FieryPath_Text_TrevorLetsBattle, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_PETE, FieryPath_Text_TrevorDefeat
	setvar VAR_FIERY_PATH_STATE, 1
	msgbox FieryPath_Text_TrevorYoureGood, MSGBOX_DEFAULT
	closemessage
	fadescreen 1
	msgbox FieryPath_Text_PokemonLeague, MSGBOX_DEFAULT
	closemessage
	setflag FLAG_TREVOR_DEFEAT
	removeobject LOCALID_TREVOR
	fadescreen 0
	releaseall
	end

FieryPath_EventScript_MoveScottToFallarbor::
	setflag FLAG_HIDE_VERDANTURF_TOWN_SCOTT
	clearflag FLAG_HIDE_FALLARBOR_TOWN_BATTLE_TENT_SCOTT
	return

FieryPath_Movement_TrevorIntro1:
	walk_in_place_faster_down
	emote_exclamation_mark
	delay_16
	delay_16
	delay_16
	delay_16
	walk_down
	walk_left
	walk_down
	delay_16
	step_end

FieryPath_Movement_TrevorIntro2:
	walk_in_place_faster_down
	emote_exclamation_mark
	delay_16
	delay_16
	delay_16
	delay_16
	walk_down
	walk_down
	delay_16
	step_end

FieryPath_Movement_TrevorIntro3:
	walk_in_place_faster_down
	emote_exclamation_mark
	delay_16
	delay_16
	delay_16
	delay_16
	walk_down
	walk_right
	walk_down
	delay_16
	step_end

FieryPath_Text_TrevorIntro:
	.string "Hey! TRAINER! Have you seen some weird\n"
	.string "looking guys run through here?\p"
	.string "Red clothes, raving about the\n"
	.string "land, cursing the water and such?\p"
	.string "I guess they're called TEAM MAGMA, and\n"
	.string "they've been causing a bit of a ruckus.\p"
	.string "… … …\p"
	.string "Oh, sorry! My name is TREVOR. I'm the\n"
	.string "third CHAMPION of HOENN. I figure it\l"
	.string "probably falls under my job title to\l"
	.string "stop those MAGMA and AQUA guys.$"

FieryPath_Text_TrevorLetsBattle:
	.string "Say, you look pretty tough! Want to do a\n"
	.string "quick spar? I'll go easy on you.$"

FieryPath_Text_TrevorDefeat:
	.string "Not bad! I guess your three GYM BADGES\n"
	.string "aren't just for show!$"

FieryPath_Text_TrevorYoureGood:
	.string "Well dang! You're pretty good!\p"
	.string "Anyways, thanks for indulging me, I'm\n"
	.string "off to go find TEAM MAGMA.$"

FieryPath_Text_PokemonLeague:
	.string "Hopefully someday I'll see you at the\n"
	.string "POKEMON LEAGUE! I'll be waiting!\p"
	.string "You can bet I won't go easy on you there!$"

