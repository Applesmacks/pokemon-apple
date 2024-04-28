VictoryRoad_JuanChamber_MapScripts::
	.byte 0

VictoryRoad_JuanChamber_EventScripts_Juan::
	lockall
	faceplayer
	trainerbattle_single TRAINER_EDGAR, VictoryRoad_JuanChamber_Text_JuanIntro, VictoryRoad_JuanChamber_Text_JuanDefeat, VictoryRoad_JuanChamber_EventScript_JuanPostBattle, NO_MUSIC
	releaseall
	end

VictoryRoad_JuanChamber_EventScript_JuanPostBattle::
	addvar VAR_VR_VICTORY, 1
	setflag FLAG_VR_DEFEATED_JUAN
	msgbox VictoryRoad_JuanChamber_Text_JuanPost, MSGBOX_DEFAULT
	warp MAP_VICTORY_ROAD_HUB, 17, 10
	waitstate
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
	releaseall
	end

VictoryRoad_JuanChamber_Text_JuanIntro:
    .string "Oh? A TRAINER has made their way\n"
	.string "to me? Former SOOTOPOLIS LEADER\l"
	.string "JUAN? Ahahaha, it has been a while!\p"
	.string "Ah, but enough chatter.\n"
	.string "Let us begin our match, shall we?\p"
    .string "Please, you shall bear witness to\n"
    .string "our artistry.\p"
    .string "A grand illusion of water sculpted\n"
    .string "by POKéMON and myself!$"
	
VictoryRoad_JuanChamber_Text_JuanDefeat:
    .string "Ahahaha, excellent!\n"
    .string "Very well, you are the winner.\p"
    .string "From you, I sense the brilliant shine\n"
    .string "of skill that will overcome all.$"

VictoryRoad_JuanChamber_Text_JuanPost:
    .string "The TRAINERS who have gathered all\n"
    .string "the GYM BADGES of HOENN are truly\l"
    .string "artists wothy of the highest praise!$"
