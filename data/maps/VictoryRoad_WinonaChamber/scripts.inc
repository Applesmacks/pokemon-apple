VictoryRoad_WinonaChamber_MapScripts::
	.byte 0

VictoryRoad_WinonaChamber_EventScripts_Winona::
	lockall
	faceplayer
	trainerbattle_single TRAINER_CAROLINE, VictoryRoad_WinonaChamber_Text_WinonaIntro, VictoryRoad_WinonaChamber_Text_WinonaDefeat, VictoryRoad_WinonaChamber_EventScript_WinonaPostBattle, NO_MUSIC
	releaseall
	end

VictoryRoad_WinonaChamber_EventScript_WinonaPostBattle::
	addvar VAR_VR_VICTORY, 1
	setflag FLAG_VR_DEFEATED_WINONA
	msgbox VictoryRoad_WinonaChamber_Text_WinonaPost, MSGBOX_DEFAULT
	warp MAP_VICTORY_ROAD_HUB, 8, 16
	waitstate
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
	releaseall
	end

VictoryRoad_WinonaChamber_Text_WinonaIntro:
    .string "I am WINONA. I am the former\n"
    .string "LEADER of the FORTREE GYM.\p"
    .string "I have become one with BIRD POKéMON\n"
    .string "and have soared the skies…\p"
    .string "However grueling the battle, we have\n"
    .string "triumphed with grace…\p"
    .string "Witness the elegant choreography\n"
    .string "of BIRD POKéMON and I!$"
	
VictoryRoad_WinonaChamber_Text_WinonaDefeat:
    .string "Never before have I seen a TRAINER\n"
    .string "command POKéMON with more grace\l"
    .string "than I…$"

VictoryRoad_WinonaChamber_Text_WinonaPost:
    .string "Though I fell to you, I will remain\n"
    .string "devoted to BIRD POKéMON.$"
