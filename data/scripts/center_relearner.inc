Common_EventScript_CenterRelearner::
    lock
    faceplayer
    msgbox Common_Text_CenterRelearnerSpeak MSGBOX_YESNO
    goto_if_eq VAR_RESULT, YES, EventScript_CenterRelearnMove
    goto_if_eq VAR_RESULT, NO, EventScript_CenterRelearnerBye
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
    .string "I'm the MOVE RELEARNER!\p"
    .string "I can help one of your POKEMON\n"
    .string "remember a move it could've learned.\p"
    .string "Would you like me to teach a move?$"

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
