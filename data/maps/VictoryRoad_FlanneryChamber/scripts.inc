VictoryRoad_FlanneryChamber_MapScripts::
	.byte 0

VictoryRoad_FlanneryChamber_EventScripts_Flannery::
	lockall
	faceplayer
	trainerbattle_single TRAINER_JULIE, VictoryRoad_FlanneryChamber_Text_FlanneryIntro, VictoryRoad_FlanneryChamber_Text_FlanneryDefeat, VictoryRoad_FlanneryChamber_EventScript_FlanneryPostBattle, NO_MUSIC
	releaseall
	end

VictoryRoad_FlanneryChamber_EventScript_FlanneryPostBattle::
	addvar VAR_VR_VICTORY, 1
	setflag FLAG_VR_DEFEATED_FLANNERY
	msgbox VictoryRoad_FlanneryChamber_Text_FlanneryPost, MSGBOX_DEFAULT
	warp MAP_VICTORY_ROAD_HUB, 13, 25
	waitstate
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
	releaseall
	end

VictoryRoad_FlanneryChamber_Text_FlanneryIntro:
	.string "Welcome… No, wait.\p"
	.string "Puny TRAINER, how good to see you've\n"
	.string "made it here!\p"
	.string "I have been entrusted with the…\n"
	.string "No, wait.\p"
	.string "I am FLANNERY, and I'm the former\n"
	.string "GYM LEADER of LAVARIDGE!\p"
	.string "Uh…\n"
	.string "Dare not underestimate me, though\l"
	.string "I was a LEADER only a short time!\p"
	.string "With skills inherited from my grand-\n"
	.string "father, I shall, uh…demonstrate the\l"
	.string "hot moves we have honed on this land!$"
	
VictoryRoad_FlanneryChamber_Text_FlanneryDefeat:
	.string "Oh…\n"
	.string "I guess I was trying too hard…\p"
	.string "I tried too hard to be someone\n"
	.string "I'm not.\p"
	.string "I have to do things my natural way. If\n"
	.string "I don't, my POKéMON will be confused.\p"
	.string "Thanks for teaching me that.$"

VictoryRoad_FlanneryChamber_Text_FlanneryPost:
	.string "Your power reminds me of someone…\p"
	.string "Well, either way, good luck with\n"
	.string "the ELITE FOUR!$"
