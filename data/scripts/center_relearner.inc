Common_EventScript_CenterRelearner::
    lock
    faceplayer
    msgbox Common_Text_CenterRelearnerSpeak MSGBOX_DEFAULT
	dynmultipush Common_Text_CenterRelearn, 0
	dynmultipush Common_Text_CenterStatus, 1
	dynmultipush Common_Text_HyperTrain, 2
	dynmultipush Common_Text_Close, 3
	dynmultistack 0, 0, FALSE, 4 FALSE, 0, NULL
	switch VAR_RESULT
	case 0, EventScript_CenterRelearnMove
	case 1, EventScript_CenterRelearner_InflictStatus1
	case 2, EventScript_CenterRelearner_HyperTrain
	case 3, EventScript_CenterRelearnerBye

EventScript_CenterRelearner_Default_End::
	goto EventScript_CenterRelearnerBye
	release
	end

EventScript_CenterRelearnMove::
	msgbox Common_Text_CenterRelearnerWhichMon, MSGBOX_DEFAULT
	special ChooseMonForMoveRelearner
	waitstate
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, EventScript_CenterRelearnerBye
	special IsSelectedMonEgg
	goto_if_eq VAR_RESULT, TRUE, Common_EventScript_CenterRelearner_CantTeachEgg
	goto_if_eq VAR_0x8005, 0, Common_EventScript_CenterRelearner_NoMoveToTeachMon
	goto Common_EventScript_CenterRelearner_ChooseMove
	end

EventScript_CenterRelearner_HyperTrain::
	msgbox Common_Text_CenterRelearnerWhichMon, MSGBOX_DEFAULT
	getpartysize
	goto_if_eq VAR_RESULT, 0, Debug_NoPokemon
	special ChoosePartyMon
	waitstate
	goto_if_ge VAR_0x8004, PARTY_SIZE, EventScript_CenterRelearner_CheckIVs_End
	msgbox Common_Text_CenterRelearnerWhichStat, MSGBOX_DEFAULT
	dynmultipush Common_Text_All, 0
	dynmultipush Common_Text_HP, 1
	dynmultipush Common_Text_ATK, 2
	dynmultipush Common_Text_DEF, 3
	dynmultipush Common_Text_SPATK, 4
	dynmultipush Common_Text_SPDEF, 5
	dynmultipush Common_Text_SPD, 6
	dynmultipush Common_Text_Close, 7
	dynmultistack 0, 0, FALSE, 5 FALSE, 0, NULL
	switch VAR_RESULT
	case 0, CenterRelearner_EventScript_HyperAll	
	case 1, CenterRelearner_EventScript_TryHyperHP
	case 2, CenterRelearner_EventScript_TryHyperATK
	case 3, CenterRelearner_EventScript_TryHyperDEF
	case 4, CenterRelearner_EventScript_TryHyperSPATK
	case 5, CenterRelearner_EventScript_TryHyperSPDEF
	case 6, CenterRelearner_EventScript_TryHyperSPD
	case 7, EventScript_CenterRelearnerBye

EventScript_CenterRelearner_HyperTrain_End::
	goto EventScript_CenterRelearnerBye
	releaseall
	end

CenterRelearner_EventScript_HyperAll::
	canhypertrain STAT_HP, VAR_0x8004
	compare VAR_RESULT, TRUE
	call_if_eq CenterRelearner_EventScript_AllHyperHP
	canhypertrain STAT_ATK, VAR_0x8004
	compare VAR_RESULT, TRUE
	call_if_eq CenterRelearner_EventScript_AllHyperATK
	canhypertrain STAT_DEF, VAR_0x8004
	compare VAR_RESULT, TRUE
	call_if_eq CenterRelearner_EventScript_AllHyperDEF
	canhypertrain STAT_SPATK, VAR_0x8004
	compare VAR_RESULT, TRUE
	call_if_eq CenterRelearner_EventScript_AllHyperSPATK
	canhypertrain STAT_SPDEF, VAR_0x8004
	compare VAR_RESULT, TRUE
	call_if_eq CenterRelearner_EventScript_AllHyperSPDEF
	canhypertrain STAT_SPEED, VAR_0x8004
	compare VAR_RESULT, TRUE
	call_if_eq CenterRelearner_EventScript_AllHyperSPD
	closemessage
	playse SE_USE_ITEM
	waitse
	msgbox CenterRelearner_Text_StatHyperTrainedAll, MSGBOX_DEFAULT
	releaseall
	end 

CenterRelearner_EventScript_AllHyperHP::
	hypertrain STAT_HP, VAR_0x8004
	return

CenterRelearner_EventScript_AllHyperATK::
	hypertrain STAT_ATK, VAR_0x8004
	return

CenterRelearner_EventScript_AllHyperDEF::
	hypertrain STAT_DEF, VAR_0x8004
	return

CenterRelearner_EventScript_AllHyperSPATK::
	hypertrain STAT_SPATK, VAR_0x8004
	return

CenterRelearner_EventScript_AllHyperSPDEF::
	hypertrain STAT_SPDEF, VAR_0x8004
	return

CenterRelearner_EventScript_AllHyperSPD::
	hypertrain STAT_SPEED, VAR_0x8004
	return

CenterRelearner_EventScript_TryHyperHP::
	canhypertrain STAT_HP, VAR_0x8004
	compare VAR_RESULT, FALSE
	goto_if_eq CenterRelearner_EventScript_StatNoHyper
	hypertrain STAT_HP, VAR_0x8004
	closemessage
	playse SE_USE_ITEM
	waitse
	msgbox CenterRelearner_Text_StatHyperTrained, MSGBOX_DEFAULT
	releaseall
	end 

CenterRelearner_EventScript_TryHyperATK::
	canhypertrain STAT_ATK, VAR_0x8004
	compare VAR_RESULT, FALSE
	goto_if_eq CenterRelearner_EventScript_StatNoHyper
	hypertrain STAT_ATK, VAR_0x8004
	closemessage
	playse SE_USE_ITEM
	waitse
	msgbox CenterRelearner_Text_StatHyperTrained, MSGBOX_DEFAULT
	releaseall
	end 

CenterRelearner_EventScript_TryHyperDEF::
	canhypertrain STAT_DEF, VAR_0x8004
	compare VAR_RESULT, FALSE
	goto_if_eq CenterRelearner_EventScript_StatNoHyper
	hypertrain STAT_DEF, VAR_0x8004
	closemessage
	playse SE_USE_ITEM
	waitse
	msgbox CenterRelearner_Text_StatHyperTrained, MSGBOX_DEFAULT
	releaseall
	end 

CenterRelearner_EventScript_TryHyperSPATK::
	canhypertrain STAT_SPATK, VAR_0x8004
	compare VAR_RESULT, FALSE
	goto_if_eq CenterRelearner_EventScript_StatNoHyper
	hypertrain STAT_SPATK, VAR_0x8004
	closemessage
	playse SE_USE_ITEM
	waitse
	msgbox CenterRelearner_Text_StatHyperTrained, MSGBOX_DEFAULT
	releaseall
	end 

CenterRelearner_EventScript_TryHyperSPDEF::
	canhypertrain STAT_SPDEF, VAR_0x8004
	compare VAR_RESULT, FALSE
	goto_if_eq CenterRelearner_EventScript_StatNoHyper
	hypertrain STAT_SPDEF, VAR_0x8004
	closemessage
	playse SE_USE_ITEM
	waitse
	msgbox CenterRelearner_Text_StatHyperTrained, MSGBOX_DEFAULT
	releaseall
	end 

CenterRelearner_EventScript_TryHyperSPD::
	canhypertrain STAT_SPEED, VAR_0x8004
	compare VAR_RESULT, FALSE
	goto_if_eq CenterRelearner_EventScript_StatNoHyper
	hypertrain STAT_SPEED, VAR_0x8004
	closemessage
	playse SE_USE_ITEM
	waitse
	msgbox CenterRelearner_Text_StatHyperTrained, MSGBOX_DEFAULT
	releaseall
	end 

EventScript_CenterRelearner_CheckIVs_End::
	goto EventScript_CenterRelearnerBye
	release
	end

CenterRelearner_EventScript_StatNoHyper::
	msgbox CenterRelearner_Text_StatNoHyper, MSGBOX_DEFAULT
	goto EventScript_CenterRelearner_HyperTrain
	end

Common_Text_CenterRelearnerWhichStat:
	.string "Which stat would you like to train?$"

CenterRelearner_Text_StatHyperTrained:
	.string "Your POKéMON's stat is trained!$"

CenterRelearner_Text_StatHyperTrainedAll:
	.string "All of your POKéMON's stats are trained!$"

CenterRelearner_Text_StatNoHyper:
	.string "That stat is already trained. Please\n"
	.string "choose another POKéMON.$"

EventScript_CenterRelearner_CheckEVs::
	msgbox Common_Text_CenterRelearnerWhichMon, MSGBOX_DEFAULT
	getpartysize
	goto_if_eq VAR_RESULT, 0, Debug_NoPokemon
	special ChoosePartyMon
	waitstate
	goto_if_ge VAR_0x8004, PARTY_SIZE, EventScript_CenterRelearner_CheckEVs_End
	callnative Script_GetChosenMonOffensiveEVs
	msgbox EventScript_CenterRelearner_Text_OffensiveEVs, MSGBOX_DEFAULT
	callnative Script_GetChosenMonDefensiveEVs
	msgbox EventScript_CenterRelearner_Text_DefensiveEVs, MSGBOX_DEFAULT

EventScript_CenterRelearner_CheckEVs_End::
	goto EventScript_CenterRelearnerBye
	release
	end

EventScript_CenterRelearner_InflictStatus1::
	msgbox Common_Text_CenterRelearnerWhichMon, MSGBOX_DEFAULT
	getpartysize
	goto_if_eq VAR_RESULT, 0, Debug_NoPokemon
	dynmultipush EventScript_CenterRelearner_InflictStatus1_Text_Single, 0
	dynmultipush EventScript_CenterRelearner_InflictStatus1_Text_PartyWide, 1
	dynmultipush EventScript_CenterRelearner_InflictStatus1_Text_Close, 2
	dynmultistack 0, 0, FALSE, 3 FALSE, 0, NULL
	switch VAR_RESULT
	case 0, EventScript_CenterRelearner_InflictStatus1_Single
	case 1, EventScript_CenterRelearner_InflictStatus1_Party
	case 2, EventScript_CenterRelearner_InflictStatus1_Close

EventScript_CenterRelearner_InflictStatus1_Close:
	goto EventScript_CenterRelearnerBye
	release
	end

EventScript_CenterRelearner_InflictStatus1_Single:
	special ChoosePartyMon
	waitstate
	goto_if_ge VAR_0x8004, PARTY_SIZE, EventScript_CenterRelearner_InflictStatus1_Close
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
	goto_if_eq VAR_RESULT, SPECIES_EGG, EventScript_CenterRelearner_InflictStatus1_Close
	dynmultipush EventScript_CenterRelearner_InflictStatus1_Text_Poison, 0
	dynmultipush EventScript_CenterRelearner_InflictStatus1_Text_Paralysis, 1
	dynmultipush EventScript_CenterRelearner_InflictStatus1_Text_Sleep, 2
	dynmultipush EventScript_CenterRelearner_InflictStatus1_Text_Burn, 3
	dynmultipush EventScript_CenterRelearner_InflictStatus1_Text_Freeze, 4
	dynmultipush EventScript_CenterRelearner_InflictStatus1_Text_Frostbite, 5
	dynmultipush EventScript_CenterRelearner_InflictStatus1_Text_Close, 6
	dynmultistack 0, 0, FALSE, 7, FALSE, 0, NULL
	switch VAR_RESULT
	case 0, EventScript_CenterRelearner_InflictStatus1_Single_Poison
	case 1, EventScript_CenterRelearner_InflictStatus1_Single_Paralysis
	case 2, EventScript_CenterRelearner_InflictStatus1_Single_Sleep
	case 3, EventScript_CenterRelearner_InflictStatus1_Single_Burn
	case 4, EventScript_CenterRelearner_InflictStatus1_Single_Freeze
	case 5, EventScript_CenterRelearner_InflictStatus1_Single_Frostbite
	case 6, EventScript_CenterRelearner_InflictStatus1_Close
	case MULTI_B_PRESSED, EventScript_CenterRelearner_InflictStatus1_Close
	releaseall
	end

EventScript_CenterRelearner_InflictStatus1_Single_Poison:
	setstatus1 STATUS1_POISON, VAR_0x8004
	releaseall
	end

EventScript_CenterRelearner_InflictStatus1_Single_Paralysis:
	setstatus1 STATUS1_PARALYSIS, VAR_0x8004
	releaseall
	end

EventScript_CenterRelearner_InflictStatus1_Single_Sleep:
	setstatus1 STATUS1_SLEEP, VAR_0x8004
	releaseall
	end

EventScript_CenterRelearner_InflictStatus1_Single_Burn:
	setstatus1 STATUS1_BURN, VAR_0x8004
	releaseall
	end

EventScript_CenterRelearner_InflictStatus1_Single_Freeze:
	setstatus1 STATUS1_FREEZE, VAR_0x8004
	releaseall
	end

EventScript_CenterRelearner_InflictStatus1_Single_Frostbite:
	setstatus1 STATUS1_FROSTBITE, VAR_0x8004
	releaseall
	end

EventScript_CenterRelearner_InflictStatus1_Party:
	dynmultipush EventScript_CenterRelearner_InflictStatus1_Text_Poison, 0
	dynmultipush EventScript_CenterRelearner_InflictStatus1_Text_Paralysis, 1
	dynmultipush EventScript_CenterRelearner_InflictStatus1_Text_Sleep, 2
	dynmultipush EventScript_CenterRelearner_InflictStatus1_Text_Burn, 3
	dynmultipush EventScript_CenterRelearner_InflictStatus1_Text_Freeze, 4
	dynmultipush EventScript_CenterRelearner_InflictStatus1_Text_Frostbite, 5
	dynmultipush EventScript_CenterRelearner_InflictStatus1_Text_Close, 6
	dynmultistack 0, 0, FALSE, 7, FALSE, 0, NULL
	switch VAR_RESULT
	case 0, EventScript_CenterRelearner_InflictStatus1_Party_Poison
	case 1, EventScript_CenterRelearner_InflictStatus1_Party_Paralysis
	case 2, EventScript_CenterRelearner_InflictStatus1_Party_Sleep
	case 3, EventScript_CenterRelearner_InflictStatus1_Party_Burn
	case 4, EventScript_CenterRelearner_InflictStatus1_Party_Freeze
	case 5, EventScript_CenterRelearner_InflictStatus1_Party_Frostbite
	case 6, EventScript_CenterRelearner_InflictStatus1_Close
	case MULTI_B_PRESSED, EventScript_CenterRelearner_InflictStatus1_Close
	releaseall
	end

EventScript_CenterRelearner_InflictStatus1_Party_Poison:
	setstatus1 STATUS1_POISON, PARTY_SIZE
	releaseall
	end

EventScript_CenterRelearner_InflictStatus1_Party_Paralysis:
	setstatus1 STATUS1_PARALYSIS, PARTY_SIZE
	releaseall
	end

EventScript_CenterRelearner_InflictStatus1_Party_Sleep:
	setstatus1 STATUS1_SLEEP, PARTY_SIZE
	releaseall
	end

EventScript_CenterRelearner_InflictStatus1_Party_Burn:
	setstatus1 STATUS1_BURN, PARTY_SIZE
	releaseall
	end

EventScript_CenterRelearner_InflictStatus1_Party_Freeze:
	setstatus1 STATUS1_FREEZE, PARTY_SIZE
	releaseall
	end

EventScript_CenterRelearner_InflictStatus1_Party_Frostbite:
	setstatus1 STATUS1_FROSTBITE, PARTY_SIZE
	releaseall
	end

EventScript_CenterRelearner_InflictStatus1_Text_Single:
	.string "Single$"

EventScript_CenterRelearner_InflictStatus1_Text_PartyWide:
	.string "Party-wide$"

EventScript_CenterRelearner_InflictStatus1_Text_Close:
	.string "Close$"

EventScript_CenterRelearner_InflictStatus1_Text_Poison:
	.string "Poison$"

EventScript_CenterRelearner_InflictStatus1_Text_Paralysis:
	.string "Paralysis$"

EventScript_CenterRelearner_InflictStatus1_Text_Sleep:
	.string "Sleep$"

EventScript_CenterRelearner_InflictStatus1_Text_Burn:
	.string "Burn$"

EventScript_CenterRelearner_InflictStatus1_Text_Freeze:
	.string "Freeze$"

EventScript_CenterRelearner_InflictStatus1_Text_Frostbite:
	.string "Frostbite$"

Common_Text_All:
	.string "All Stats$"

Common_Text_HP:
	.string "HP$"

Common_Text_ATK:
	.string "Attack$"

Common_Text_DEF:
	.string "Defense$"

Common_Text_SPATK:
	.string "Special Attack$"

Common_Text_SPDEF:
	.string "Special Defense$"

Common_Text_SPD:
	.string "Speed$"

EventScript_CenterRelearnerBye::
    msgbox Common_Text_CenterRelearnerBye MSGBOX_DEFAULT
    return

Common_EventScript_CenterRelearner_CantTeachEgg::
	msgbox Common_Text_CantTeachEggs, MSGBOX_DEFAULT
	goto EventScript_CenterRelearnMove
    end

Common_EventScript_CenterRelearner_NoMoveToTeachMon::
	msgbox Common_Text_DontHaveMove, MSGBOX_DEFAULT
	goto EventScript_CenterRelearnMove
    end

Common_EventScript_CenterRelearner_ChooseMove::
	msgbox Common_Text_TeachWhichMove, MSGBOX_DEFAULT
	special TeachMoveRelearnerMove
	waitstate
	goto_if_eq VAR_0x8004, 0, EventScript_CenterRelearnMove
	goto EventScript_CenterRelearnerBye
	end

Common_Text_CenterRelearnerSpeak:
    .string "I'm the CENTER HELPER!\p"
    .string "I provide a variety of services\n"
    .string "to you and your PARTY.\p"
    .string "What would you like me to do?$"

Common_Text_CenterRelearnerWhichMon:
    .string "Please choose a POKEMON.$"

Common_Text_TeachWhichMove:
    .string "Which move would you like to teach?$"

Common_Text_CenterRelearnerBye:
    .string "Come by anytime!$"

Common_Text_DontHaveMove:
	.string "Sorry…\p"
	.string "It doesn't appear as if I have any move\n"
	.string "I can teach that POKéMON.$"

Common_Text_CantTeachEggs:
	.string "There isn't a single move that\n"
	.string "I can teach an EGG.$"

Common_Text_CenterRelearn:
	.string "Relearn Move$"

Common_Text_CenterStatus:
	.string "Inflict Status$"

Common_Text_CheckIV:
	.string "Check IVs$"

Common_Text_CheckEV:
	.string "Check EVs$"

Common_Text_Close:
	.string "Close$"

Common_Text_HyperTrain:
	.string "Hyper Train$"

EventScript_CenterRelearner_Text_OffensiveIVs:
	.string "ATK IVs: {STR_VAR_1}, SPATK IVs: {STR_VAR_2}, SPEED IVs: {STR_VAR_3}$"

EventScript_CenterRelearner_Text_DefensiveIVs:
	.string "HP IVs: {STR_VAR_1}, DEF IVs: {STR_VAR_2}, SPDEF IVs: {STR_VAR_3}$"

EventScript_CenterRelearner_Text_OffensiveEVs:
	.string "ATK EVs: {STR_VAR_1}, SPATK EVs: {STR_VAR_2}, SPEED EVs: {STR_VAR_3}$"

EventScript_CenterRelearner_Text_DefensiveEVs:
	.string "HP EVs: {STR_VAR_1}, DEF EVs: {STR_VAR_2}, SPDEF EVs: {STR_VAR_3}$"

