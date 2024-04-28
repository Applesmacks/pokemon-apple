VictoryRoad_TateLizaChamber_MapScripts::
	.byte 0

VictoryRoad_TateLizaChamber_EventScripts_TateLiza::
	lockall
	faceplayer
	trainerbattle_single TRAINER_MITCHELL, VictoryRoad_TateLizaChamber_Text_TateLizaIntro, VictoryRoad_TateLizaChamber_Text_TateLizaDefeat, VictoryRoad_TateLizaChamber_EventScript_TateLizaPostBattle, NO_MUSIC
	releaseall
	end

VictoryRoad_TateLizaChamber_EventScript_TateLizaPostBattle::
	addvar VAR_VR_VICTORY, 1
	setflag FLAG_VR_DEFEATED_TATELIZA
	msgbox VictoryRoad_TateLizaChamber_Text_TateLizaPost, MSGBOX_DEFAULT
	warp MAP_VICTORY_ROAD_HUB, 33, 15
	waitstate
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
	releaseall
	end

VictoryRoad_TateLizaChamber_Text_TateLizaIntro:
    .string "TATE: Hehehe… Were you surprised?\p"
    .string "LIZA: Fufufu… Were you surprised?\p"
    .string "TATE: That there are two GYM LEADERS?\n"
    .string "LIZA: That there are two GYM LEADERS?\p"
    .string "TATE: We're twins!\n"
    .string "LIZA: We're twins!\p"
    .string "TATE: We don't need to talk because…\n"
    .string "LIZA: We can each determine what…\p"
    .string "TATE: The other is thinking…\n"
    .string "LIZA: All in our minds!\p"
    .string "TATE: This combination of ours…\n"
    .string "LIZA: Can you beat it?$"
	
VictoryRoad_TateLizaChamber_Text_TateLizaDefeat:
    .string "TATE: What?! Our combination…\n"
    .string "LIZA: Was shattered!\p"
    .string "TATE: It can't be helped. You've won…$"

VictoryRoad_TateLizaChamber_Text_TateLizaPost:
    .string "TATE: Looks like the bond between you\n"
    .string "and your POKéMON is far stronger than\l"
    .string "the bond that we share as twins.\p"
    .string "LIZA: You will become even stronger!\n"
    .string "We've battled you, so we know.$"
