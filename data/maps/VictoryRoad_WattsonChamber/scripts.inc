VictoryRoad_WattsonChamber_MapScripts::
	.byte 0

VictoryRoad_WattsonChamber_EventScripts_Wattson::
	lockall
	faceplayer
	trainerbattle_single TRAINER_SAMUEL, VictoryRoad_WattsonChamber_Text_WattsonIntro, VictoryRoad_WattsonChamber_Text_WattsonDefeat, VictoryRoad_WattsonChamber_EventScript_WattsonPostBattle, NO_MUSIC
	releaseall
	end

VictoryRoad_WattsonChamber_EventScript_WattsonPostBattle::
	addvar VAR_VR_VICTORY, 1
	setflag FLAG_VR_DEFEATED_WATTSON
	msgbox VictoryRoad_WattsonChamber_Text_WattsonPost, MSGBOX_DEFAULT
	warp MAP_VICTORY_ROAD_HUB, 32, 27
	waitstate
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
	releaseall
	end

VictoryRoad_WattsonChamber_Text_WattsonIntro:
    .string "Oh? Now, what are you doing here?\p"
	.string "Some upstart kid trying to take\n"
	.string "on the ELITE FOUR?\p"
    .string "Wahahahah!\n"
    .string "Now, that is amusing!\p"
    .string "Then, I, WATTSON, the former\n"
    .string "LEADER of MAUVILLE GYM, shall\l"
	.string "electrify you!$"
	
VictoryRoad_WattsonChamber_Text_WattsonDefeat:
    .string "Wahahahah!\n"
    .string "Fine, I lost!\p"
    .string "You ended up giving me a thrill!$"

VictoryRoad_WattsonChamber_Text_WattsonPost:
    .string "I swell with optimism, seeing a promising\n"
    .string "young TRAINER like you!$"
