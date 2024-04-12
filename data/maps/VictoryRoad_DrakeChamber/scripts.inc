.set LOCALID_DRAKE, 1
.set LOCALID_DRAKE_EXIT, 7

VictoryRoad_DrakeChamber_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, DrakeChamber_OnLoad
	.byte 0

DrakeChamber_OnLoad:
	removeobject LOCALID_DRAKE_EXIT
	clearflag 0xD56
	clearflag 0xD57
	clearflag 0xD58
	clearflag 0xD59
	clearflag 0xD60
	end

DrakeChamber_EventScript_CompleteTrigger1::
	lockall
	fadescreen 1
	removeobject LOCALID_DRAKE
	addobject LOCALID_DRAKE_EXIT
	setobjectxy LOCALID_DRAKE_EXIT, 21, 1
	applymovement LOCALID_DRAKE_EXIT, Common_Movement_WalkInPlaceFasterLeft
	removeobject 2
	removeobject 3
	removeobject 4
	removeobject 5
	removeobject 6
	fadescreen 0
	goto DrakeChamber_EventScript_ChamberComplete
	end

DrakeChamber_EventScript_CompleteTrigger2::
	lockall
	fadescreen 1
	removeobject LOCALID_DRAKE
	addobject LOCALID_DRAKE_EXIT
	setobjectxy LOCALID_DRAKE_EXIT, 21, 2
	applymovement LOCALID_DRAKE_EXIT, Common_Movement_WalkInPlaceFasterLeft
	removeobject 2
	removeobject 3
	removeobject 4
	removeobject 5
	removeobject 6
	fadescreen 0
	goto DrakeChamber_EventScript_ChamberComplete
	end

DrakeChamber_EventScript_CompleteTrigger3::
	lockall
	fadescreen 1
	removeobject LOCALID_DRAKE
	addobject LOCALID_DRAKE_EXIT
	setobjectxy LOCALID_DRAKE_EXIT, 21, 3
	applymovement LOCALID_DRAKE_EXIT, Common_Movement_WalkInPlaceFasterLeft
	removeobject 2
	removeobject 3
	removeobject 4
	removeobject 5
	removeobject 6
	fadescreen 0
	goto DrakeChamber_EventScript_ChamberComplete
	end

DrakeChamber_EventScript_CompleteTrigger4::
	lockall
	fadescreen 1
	removeobject LOCALID_DRAKE
	addobject LOCALID_DRAKE_EXIT
	setobjectxy LOCALID_DRAKE_EXIT, 21, 4
	applymovement LOCALID_DRAKE_EXIT, Common_Movement_WalkInPlaceFasterLeft
	removeobject 2
	removeobject 3
	removeobject 4
	removeobject 5
	removeobject 6
	fadescreen 0
	goto DrakeChamber_EventScript_ChamberComplete
	end

DrakeChamber_EventScript_ChamberComplete::
	setvar VAR_DRAKE_CHAMBER_STATE, 1
	msgbox DrakeChamber_Text_GoodJob, MSGBOX_DEFAULT
	applymovement LOCALID_DRAKE_EXIT, Common_Movement_WalkInPlaceFasterRight
	msgbox DrakeChamber_Text_ArchiveLegends, MSGBOX_DEFAULT
	applymovement LOCALID_DRAKE_EXIT, Common_Movement_WalkInPlaceFasterLeft
	msgbox DrakeChamber_Text_Goodbye, MSGBOX_DEFAULT
	fadescreen 1
	setflag FLAG_DRAKE_CHAMBER_COMPLETE
	removeobject 7
	fadescreen 0
	releaseall
	end


DrakeChamber_EventScript_TalkDrakeExit::
	lock
	faceplayer
	msgbox DrakeChamber_Text_TalkExit, MSGBOX_DEFAULT
	release
	end

DrakeChamber_EventScript_TalkDrakeEntrance::
	lock
	faceplayer
	msgbox DrakeChamber_Text_TalkEntrance, MSGBOX_DEFAULT
	release
	end

DrakeChamber_EventScript_RayRizzo::
	trainerbattle_single TRAINER_RAY_RIZZO, DrakeChamber_Text_RayIntro, DrakeChamber_Text_RayDefeat
	msgbox DrakeChamber_Text_RayPostBattle, MSGBOX_AUTOCLOSE
	end

DrakeChamber_EventScript_SejunPark::
	trainerbattle_single TRAINER_SEJUN_PARK, DrakeChamber_Text_SejunIntro, DrakeChamber_Text_SejunDefeat
	msgbox DrakeChamber_Text_SejunPostBattle, MSGBOX_AUTOCLOSE
	end

DrakeChamber_EventScript_RyotaOtsubo::
	trainerbattle_single TRAINER_RYOTA_OTSUBO, DrakeChamber_Text_RyotaIntro, DrakeChamber_Text_RyotaDefeat
	msgbox DrakeChamber_Text_RyotaPostBattle, MSGBOX_AUTOCLOSE
	end

DrakeChamber_EventScript_EmilioForbes::
	trainerbattle_single TRAINER_EMILIO_FORBES, DrakeChamber_Text_EmilioIntro, DrakeChamber_Text_EmilioDefeat
	msgbox DrakeChamber_Text_EmilioPostBattle, MSGBOX_AUTOCLOSE
	end

DrakeChamber_EventScript_WolfeGlick::
	trainerbattle_single TRAINER_WOLFE_GLICK, DrakeChamber_Text_WolfeIntro, DrakeChamber_Text_WolfeDefeat
	msgbox DrakeChamber_Text_WolfePostBattle, MSGBOX_AUTOCLOSE
	end


DrakeChamber_Movement_DrakeApproach_1:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_left
	walk_left
	walk_up
	walk_up
	walk_up
	face_left
	step_end

DrakeChamber_Movement_DrakeApproach_2:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_left
	walk_left
	walk_up
	walk_up
	face_left
	step_end

DrakeChamber_Movement_DrakeApproach_3:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_left
	walk_left
	walk_up
	face_left
	step_end

DrakeChamber_Movement_DrakeApproach_4:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_left
	walk_left
	face_left
	step_end

DrakeChamber_Text_RayPostBattle:
	.string "You can do it!$"

DrakeChamber_Text_SejunPostBattle:
	.string "You got this!$"

DrakeChamber_Text_RyotaPostBattle:
	.string "Halfway there!$"

DrakeChamber_Text_EmilioPostBattle:
	.string "Just one more!$"

DrakeChamber_Text_WolfePostBattle:
	.string "You did it!$"

DrakeChamber_Text_GoodJob:
	.string "Well I'll be! You did it, lad!\n"
	.string "Not that I had any doubt, mind you!\p"
	.string "You've earned the greatest prize I\n"
	.string "can give you.$"

DrakeChamber_Text_ArchiveLegends:
	.string "Down that ladder is the ARCHIVE OF\n"
	.string "LEGENDS. It's where you can find the\l"
	.string "greatest and strongest POKéMON of\l"
	.string "them all.$"

DrakeChamber_Text_Goodbye:
	.string "You've more than earned it, lad. This\n"
	.string "is the last you'll be seeing of me.\p"
	.string "Good luck against the ELITE FOUR and\n"
	.string "CHAMPION TREVOR.$"

DrakeChamber_Text_TalkExit:
	.string "Five world class players, defeated\n"
	.string "like that! Hah!$"

DrakeChamber_Text_TalkEntrance:
	.string "Welcome to the final challenge, lad.\p"
	.string "To my right are five world class\n"
	.string "POKéMON trainers. You gotta beat\l"
	.string "them all in one go.\p"
	.string "It won't be easy, hell I can't do\n"
	.string "it. But if anyone can, it's you!$"


