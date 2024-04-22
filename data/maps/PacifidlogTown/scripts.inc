PacifidlogTown_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, PacifidlogTown_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, PacifidlogTown_OnResume
	.byte 0

PacifidlogTown_OnTransition:
	setflag FLAG_VISITED_PACIFIDLOG_TOWN
	end

PacifidlogTown_OnResume:
	setstepcallback STEP_CB_PACIFIDLOG_BRIDGE
	end

PacifidlogTown_EventScript_NinjaBoy::
	lock
	faceplayer
	goto_if_set FLAG_OGERPON_MASKS, PacifidlogTown_EventScript_MasksGiven
	msgbox PacifidlogTown_Text_FoundMasks, MSGBOX_NPC
	giveitem ITEM_CORNERSTONE_MASK
	giveitem ITEM_WELLSPRING_MASK
	giveitem ITEM_HEARTHFLAME_MASK
	setflag FLAG_OGERPON_MASKS
	msgbox PacifidlogTown_Text_MasksBye, MSGBOX_NPC
	release
	end

PacifidlogTown_EventScript_MasksGiven::
	msgbox PacifidlogTown_Text_MasksGiven, MSGBOX_NPC
	release
	end

PacifidlogTown_EventScript_Girl::
	msgbox PacifidlogTown_Text_FastRunningCurrent, MSGBOX_NPC
	end

PacifidlogTown_EventScript_Fisherman::
	msgbox PacifidlogTown_Text_SkyPillarTooScary, MSGBOX_NPC
	end

PacifidlogTown_EventScript_TownSign::
	msgbox PacifidlogTown_Text_TownSign, MSGBOX_SIGN
	end

PacifidlogTown_Text_FastRunningCurrent:
	.string "The sea between PACIFIDLOG and\n"
	.string "SLATEPORT has a fast-running tide.\p"
	.string "If you decide to SURF, you could end\n"
	.string "up swept away somewhere else.$"

PacifidlogTown_Text_FoundMasks:
	.string "Hello Mr. Strong-Looking-Trainer!\p"
	.string "I found these masks floating by in\n"
	.string "the water. They seem like they could\l"
	.string "be important. Can you figure out what\l"
	.string "they're for?$"

PacifidlogTown_Text_MasksBye:
	.string "Thanks! Hopefully you can find the\n"
	.string "rightful owner!$"

PacifidlogTown_Text_MasksGiven:
	.string "Did you figure out anything with those\n"
	.string "masks yet?$"

PacifidlogTown_Text_SkyPillarTooScary:
	.string "The SKY PILLAR?\p"
	.string "…Oh, you must mean that tall, tall\n"
	.string "tower a little further out.\p"
	.string "If you asked me, I wouldn't climb it.\n"
	.string "It's too scary to get up that high.\p"
	.string "Life at sea level in PACIFIDLOG,\n"
	.string "that suits me fine.$"

PacifidlogTown_Text_TownSign:
	.string "PACIFIDLOG TOWN\p"
	.string "“Where the morning sun smiles upon\n"
	.string "the waters.”$"

