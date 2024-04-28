VictoryRoad_NormanChamber_MapScripts::
	.byte 0

VictoryRoad_NormanChamber_EventScripts_Norman::
	lockall
	faceplayer
	trainerbattle_single TRAINER_FELIX, VictoryRoad_NormanChamber_Text_NormanIntro, VictoryRoad_NormanChamber_Text_NormanDefeat, VictoryRoad_NormanChamber_EventScript_NormanPostBattle, NO_MUSIC
	releaseall
	end

VictoryRoad_NormanChamber_EventScript_NormanPostBattle::
	addvar VAR_VR_VICTORY, 1
	setflag FLAG_VR_DEFEATED_NORMAN
	msgbox VictoryRoad_NormanChamber_Text_NormanPost, MSGBOX_DEFAULT
	warp MAP_VICTORY_ROAD_HUB, 22, 18
	waitstate
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
	releaseall
	end

VictoryRoad_NormanChamber_EventScripts_LeftDoor::
	lockall
    setvar VAR_0x8008, 1
	setvar VAR_0x8009, 7
	msgbox VictoryRoad_NormanChamber_Text_EnterGymLeadersRoom, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, VictoryRoad_NormanChamber_EventScript_EnterRoom
	goto_if_eq VAR_RESULT, NO, VictoryRoad_NormanChamber_EventScript_DontEnterRoom
	end

VictoryRoad_NormanChamber_EventScripts_RightDoor::
	lockall
    setvar VAR_0x8008, 8
	setvar VAR_0x8009, 7
	msgbox VictoryRoad_NormanChamber_Text_EnterGymLeadersRoom, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, VictoryRoad_NormanChamber_EventScript_EnterRoom
	goto_if_eq VAR_RESULT, NO, VictoryRoad_NormanChamber_EventScript_DontEnterRoom
	end

VictoryRoad_NormanChamber_EventScript_EnterRoom::
	closemessage
	delay 30
	warpdoor MAP_VICTORY_ROAD_NORMAN_CHAMBER, VAR_0x8008, VAR_0x8009
	waitstate
	releaseall
	end

VictoryRoad_NormanChamber_EventScript_DontEnterRoom::
	releaseall
	end

VictoryRoad_NormanChamber_Text_NormanIntro:
    .string "Hm…\p"
    .string "Am I your DAD…?\p"
    .string "Anyhow, good job making it\n"
    .string "this far!\p"
    .string "{PLAYER}…\p"
    .string "I'm so happy that I can have\n"
    .string "a real battle with my own child.\p"
    .string "I think. Continuity is weird here.\p"
    .string "I will do everything in my power as\n"
    .string "a former GYM LEADER to win.\p"
    .string "{PLAYER}, you'd better give it your\n"
    .string "best shot, too!$"
	
VictoryRoad_NormanChamber_Text_NormanDefeat:
    .string "…\p"
    .string "I… I can't…\p"
    .string "I can't believe it. {PLAYER}…\p"
    .string "I lost to {PLAYER}?$"

VictoryRoad_NormanChamber_Text_NormanPost:
    .string "As the former GYM LEADER, I can't\n"
    .string "express how upset I am…\p"
    .string "But as a father(?), it makes me both\n"
    .string "happy and a little sad. It's odd…$"

VictoryRoad_NormanChamber_Text_EnterGymLeadersRoom:
	.string "“Former LEADER'S ROOM\p"
	.string "“See for yourself what POKéMON await\n"
	.string "you!” the sign says.\p"
	.string "Do you want to go through?$"
