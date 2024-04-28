VictoryRoad_RoxanneChamber_MapScripts::
	.byte 0

VictoryRoad_RoxanneChamber_EventScripts_Roxanne::
	lockall
	faceplayer
	trainerbattle_single TRAINER_HOPE, VictoryRoad_RoxanneChamber_Text_RoxanneIntro, VictoryRoad_RoxanneChamber_Text_RoxanneDefeat, VictoryRoad_RoxanneChamber_EventScript_RoxannePostBattle, NO_MUSIC
	releaseall
	end

VictoryRoad_RoxanneChamber_EventScript_RoxannePostBattle::
	addvar VAR_VR_VICTORY, 1
	setflag FLAG_VR_DEFEATED_ROXANNE
	msgbox VictoryRoad_RoxanneChamber_Text_RoxannePost, MSGBOX_DEFAULT
	warp MAP_VICTORY_ROAD_HUB, 8, 34
	waitstate
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
	releaseall
	end

VictoryRoad_RoxanneChamber_Text_RoxanneIntro:
	.string "Hello, I am ROXANNE, the former\n"
	.string "RUSTBORO GYM LEADER.\p"
	.string "I originally became a GYM LEADER\n"
	.string "so that I can prove the power of\l"
	.string "ROCK-TYPE POKéMON.\p"
	.string "Allow me to show you the unyielding\n"
	.string "stubbornness of stone!$"
	
VictoryRoad_RoxanneChamber_Text_RoxanneDefeat:
	.string "So…\n"
	.string "I lost…\p"
	.string "It seems that I still have much more\n"
	.string "to learn…$"

VictoryRoad_RoxanneChamber_Text_RoxannePost:
	.string "I have no doubt that you will be able\n"
	.string "to challenge the ELITE FOUR.$"
