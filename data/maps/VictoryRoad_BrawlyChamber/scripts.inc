VictoryRoad_BrawlyChamber_MapScripts::
	.byte 0

VictoryRoad_BrawlyChamber_EventScripts_Brawly::
	lockall
	faceplayer
	trainerbattle_single TRAINER_ALBERT, VictoryRoad_BrawlyChamber_Text_BrawlyIntro, VictoryRoad_BrawlyChamber_Text_BrawlyDefeat, VictoryRoad_BrawlyChamber_EventScript_BrawlyPostBattle, NO_MUSIC
	releaseall
	end

VictoryRoad_BrawlyChamber_EventScript_BrawlyPostBattle::
	addvar VAR_VR_VICTORY, 1
	setflag FLAG_VR_DEFEATED_BRAWLY
	msgbox VictoryRoad_BrawlyChamber_Text_BrawlyPost, MSGBOX_DEFAULT
	warp MAP_VICTORY_ROAD_HUB, 22, 32
	waitstate
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
	releaseall
	end

VictoryRoad_BrawlyChamber_Text_BrawlyIntro:
	.string "I'm BRAWLY!\n"
	.string "DEWFORD's former GYM LEADER.\p"
	.string "I was churned in the rough waves\n"
	.string "of DEWFORD, and I've grown tough\l"
	.string "since coming here to VICTORY ROAD!\p"
	.string "So you want to challenge me?\n"
	.string "Let's see what you're made of!$"
	
VictoryRoad_BrawlyChamber_Text_BrawlyDefeat:
	.string "Woah, wow! You made a much bigger\n"
	.string "splash than I expected!\p"
	.string "You swamped me!$"

VictoryRoad_BrawlyChamber_Text_BrawlyPost:
	.string "I can envision you as a giant\n"
	.string "wave that will tear down the\l"
	.string "ELITE FOUR!$"
