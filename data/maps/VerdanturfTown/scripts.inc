.set LOCALID_TWIN, 1
.set LOCALID_DRAKE, 4

VerdanturfTown_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, VerdanturfTown_OnTransition
	.byte 0

VerdanturfTown_OnTransition:
	setflag FLAG_VISITED_VERDANTURF_TOWN
	setvar VAR_CONTEST_HALL_STATE, 0
	call_if_set FLAG_BADGE03_GET, VerdanturfTown_EventScript_HideDrake
	end

VerdanturfTown_EventScript_Twin::
	lock
	faceplayer
	goto_if_set FLAG_RUSTURF_TUNNEL_OPENED, VerdanturfTown_EventScript_TwinTunnelOpen
	msgbox VerdanturfTown_Text_ManTryingToDigTunnel, MSGBOX_DEFAULT
	applymovement LOCALID_TWIN, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

VerdanturfTown_EventScript_HideDrake::
	removeobject LOCALID_DRAKE

VerdanturfTown_EventScript_Drake::
	lock
	faceplayer
	goto_if_set FLAG_VERDANTURF_DRAKE_POKEMON, VerdanturfTown_EventScript_DrakeGiven
	msgbox VerdanturfTown_Text_DrakeCongratulations, MSGBOX_DEFAULT
	getpartysize
	compare VAR_RESULT, 6
	goto_if_eq VerdanturfTown_EventScript_DrakePartyFull
	goto VerdanturfTown_EventScript_DrakeGiveRandom
	msgbox VerdanturfTown_Text_DrakeEnjoy
	release
	end

VerdanturfTown_EventScript_DrakeGiven::
	msgbox VerdanturfTown_Text_DrakeGiven, MSGBOX_DEFAULT
	release
	end

VerdanturfTown_EventScript_TwinTunnelOpen::
	msgbox VerdanturfTown_Text_ManDugTunnelForLove, MSGBOX_DEFAULT
	applymovement LOCALID_TWIN, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

VerdanturfTown_EventScript_DrakePartyFull::
	msgbox VerdanturfTown_Text_DrakePartyFull, MSGBOX_DEFAULT
	release
	end

VerdanturfTown_EventScript_DrakeGiveRandom::
	setflag FLAG_FORCE_SHINY
	random 21
	switch VAR_RESULT
	case 0, VerdanturfTown_EventScript_DrakeTrapinch
	case 1, VerdanturfTown_EventScript_DrakeBeldum
	case 2, VerdanturfTown_EventScript_DrakeBagon
	case 3, VerdanturfTown_EventScript_DrakeRalts
	case 4, VerdanturfTown_EventScript_DrakeAron
	case 5, VerdanturfTown_EventScript_DrakeGible
	case 6, VerdanturfTown_EventScript_DrakeBudew
	case 7, VerdanturfTown_EventScript_DrakeDeino
	case 8, VerdanturfTown_EventScript_DrakePawniard
	case 9, VerdanturfTown_EventScript_DrakeJangmoo
	case 10, VerdanturfTown_EventScript_DrakeLitwick
	case 11, VerdanturfTown_EventScript_DrakeTinkatink
	case 12, VerdanturfTown_EventScript_DrakeApplin
	case 13, VerdanturfTown_EventScript_DrakeDratini
	case 14, VerdanturfTown_EventScript_DrakeLarvitar
	case 15, VerdanturfTown_EventScript_DrakeGoomy
	case 16, VerdanturfTown_EventScript_DrakeDreepy
	case 17, VerdanturfTown_EventScript_DrakeHorsea
	case 18, VerdanturfTown_EventScript_DrakeFrigibax
	case 19, VerdanturfTown_EventScript_DrakeMareep
	case 20, VerdanturfTown_EventScript_DrakeIgglybuff
	return

VerdanturfTown_EventScript_DrakeTrapinch::
	bufferspeciesname 1, SPECIES_TRAPINCH
	givemon SPECIES_TRAPINCH, 5, ITEM_NONE
	clearflag FLAG_FORCE_SHINY
	setflag FLAG_VERDANTURF_DRAKE_POKEMON
	playfanfare MUS_OBTAIN_ITEM
	msgbox VerdanturfTown_Text_Received_Pokemon, MSGBOX_DEFAULT
	waitfanfare
	msgbox VerdanturfTown_Text_DrakeEnjoy, MSGBOX_DEFAULT
	release
	end

VerdanturfTown_EventScript_DrakeBeldum::
	bufferspeciesname 1, SPECIES_BELDUM
	givemon SPECIES_BELDUM, 5, ITEM_NONE
	clearflag FLAG_FORCE_SHINY
	setflag FLAG_VERDANTURF_DRAKE_POKEMON
	playfanfare MUS_OBTAIN_ITEM
	msgbox VerdanturfTown_Text_Received_Pokemon, MSGBOX_DEFAULT
	waitfanfare
	msgbox VerdanturfTown_Text_DrakeEnjoy, MSGBOX_DEFAULT
	release
	end

VerdanturfTown_EventScript_DrakeBagon::
	bufferspeciesname 1, SPECIES_BAGON
	givemon SPECIES_BAGON, 5, ITEM_NONE
	clearflag FLAG_FORCE_SHINY
	setflag FLAG_VERDANTURF_DRAKE_POKEMON
	playfanfare MUS_OBTAIN_ITEM
	msgbox VerdanturfTown_Text_Received_Pokemon, MSGBOX_DEFAULT
	waitfanfare
	msgbox VerdanturfTown_Text_DrakeEnjoy, MSGBOX_DEFAULT
	release
	end
	
VerdanturfTown_EventScript_DrakeRalts::
	bufferspeciesname 1, SPECIES_RALTS
	givemon SPECIES_RALTS, 5, ITEM_NONE
	clearflag FLAG_FORCE_SHINY
	setflag FLAG_VERDANTURF_DRAKE_POKEMON
	playfanfare MUS_OBTAIN_ITEM
	msgbox VerdanturfTown_Text_Received_Pokemon, MSGBOX_DEFAULT
	waitfanfare
	msgbox VerdanturfTown_Text_DrakeEnjoy, MSGBOX_DEFAULT
	release
	end			

VerdanturfTown_EventScript_DrakeAron::
	bufferspeciesname 1, SPECIES_ARON
	givemon SPECIES_ARON, 5, ITEM_NONE
	clearflag FLAG_FORCE_SHINY
	setflag FLAG_VERDANTURF_DRAKE_POKEMON
	playfanfare MUS_OBTAIN_ITEM
	msgbox VerdanturfTown_Text_Received_Pokemon, MSGBOX_DEFAULT
	waitfanfare
	msgbox VerdanturfTown_Text_DrakeEnjoy, MSGBOX_DEFAULT
	release
	end

VerdanturfTown_EventScript_DrakeGible::
	bufferspeciesname 1, SPECIES_GIBLE
	givemon SPECIES_GIBLE, 5, ITEM_NONE
	clearflag FLAG_FORCE_SHINY
	setflag FLAG_VERDANTURF_DRAKE_POKEMON
	playfanfare MUS_OBTAIN_ITEM
	msgbox VerdanturfTown_Text_Received_Pokemon, MSGBOX_DEFAULT
	waitfanfare
	msgbox VerdanturfTown_Text_DrakeEnjoy, MSGBOX_DEFAULT
	release
	end

VerdanturfTown_EventScript_DrakeBudew::
	bufferspeciesname 1, SPECIES_BUDEW
	givemon SPECIES_BUDEW, 5, ITEM_NONE
	clearflag FLAG_FORCE_SHINY
	setflag FLAG_VERDANTURF_DRAKE_POKEMON
	playfanfare MUS_OBTAIN_ITEM
	msgbox VerdanturfTown_Text_Received_Pokemon, MSGBOX_DEFAULT
	waitfanfare
	msgbox VerdanturfTown_Text_DrakeEnjoy, MSGBOX_DEFAULT
	release
	end

VerdanturfTown_EventScript_DrakeDeino::
	bufferspeciesname 1, SPECIES_DEINO
	givemon SPECIES_DEINO, 5, ITEM_NONE
	clearflag FLAG_FORCE_SHINY
	setflag FLAG_VERDANTURF_DRAKE_POKEMON
	playfanfare MUS_OBTAIN_ITEM
	msgbox VerdanturfTown_Text_Received_Pokemon, MSGBOX_DEFAULT
	waitfanfare
	msgbox VerdanturfTown_Text_DrakeEnjoy, MSGBOX_DEFAULT
	release
	end

VerdanturfTown_EventScript_DrakePawniard::
	bufferspeciesname 1, SPECIES_PAWNIARD
	givemon SPECIES_PAWNIARD, 5, ITEM_NONE
	clearflag FLAG_FORCE_SHINY
	setflag FLAG_VERDANTURF_DRAKE_POKEMON
	playfanfare MUS_OBTAIN_ITEM
	msgbox VerdanturfTown_Text_Received_Pokemon, MSGBOX_DEFAULT
	waitfanfare
	msgbox VerdanturfTown_Text_DrakeEnjoy, MSGBOX_DEFAULT
	release
	end

VerdanturfTown_EventScript_DrakeJangmoo::
	bufferspeciesname 1, SPECIES_JANGMO_O
	givemon SPECIES_JANGMO_O, 5, ITEM_NONE
	clearflag FLAG_FORCE_SHINY
	setflag FLAG_VERDANTURF_DRAKE_POKEMON
	playfanfare MUS_OBTAIN_ITEM
	msgbox VerdanturfTown_Text_Received_Pokemon, MSGBOX_DEFAULT
	waitfanfare
	msgbox VerdanturfTown_Text_DrakeEnjoy, MSGBOX_DEFAULT
	release
	end

VerdanturfTown_EventScript_DrakeLitwick::
	bufferspeciesname 1, SPECIES_LITWICK
	givemon SPECIES_LITWICK, 5, ITEM_NONE
	clearflag FLAG_FORCE_SHINY
	setflag FLAG_VERDANTURF_DRAKE_POKEMON
	playfanfare MUS_OBTAIN_ITEM
	msgbox VerdanturfTown_Text_Received_Pokemon, MSGBOX_DEFAULT
	waitfanfare
	msgbox VerdanturfTown_Text_DrakeEnjoy, MSGBOX_DEFAULT
	release
	end

VerdanturfTown_EventScript_DrakeTinkatink::
	bufferspeciesname 1, SPECIES_TINKATINK
	givemon SPECIES_TINKATINK, 5, ITEM_NONE
	clearflag FLAG_FORCE_SHINY
	setflag FLAG_VERDANTURF_DRAKE_POKEMON
	playfanfare MUS_OBTAIN_ITEM
	msgbox VerdanturfTown_Text_Received_Pokemon, MSGBOX_DEFAULT
	waitfanfare
	msgbox VerdanturfTown_Text_DrakeEnjoy, MSGBOX_DEFAULT
	release
	end

VerdanturfTown_EventScript_DrakeApplin::
	bufferspeciesname 1, SPECIES_APPLIN
	givemon SPECIES_APPLIN, 5, ITEM_NONE
	clearflag FLAG_FORCE_SHINY
	setflag FLAG_VERDANTURF_DRAKE_POKEMON
	playfanfare MUS_OBTAIN_ITEM
	msgbox VerdanturfTown_Text_Received_Pokemon, MSGBOX_DEFAULT
	waitfanfare
	msgbox VerdanturfTown_Text_DrakeEnjoy, MSGBOX_DEFAULT
	release
	end

VerdanturfTown_EventScript_DrakeDratini::
	bufferspeciesname 1, SPECIES_DRATINI
	givemon SPECIES_DRATINI, 5, ITEM_NONE
	clearflag FLAG_FORCE_SHINY
	setflag FLAG_VERDANTURF_DRAKE_POKEMON
	playfanfare MUS_OBTAIN_ITEM
	msgbox VerdanturfTown_Text_Received_Pokemon, MSGBOX_DEFAULT
	waitfanfare
	msgbox VerdanturfTown_Text_DrakeEnjoy, MSGBOX_DEFAULT
	release
	end

VerdanturfTown_EventScript_DrakeLarvitar::
	bufferspeciesname 1, SPECIES_LARVITAR
	givemon SPECIES_LARVITAR, 5, ITEM_NONE
	clearflag FLAG_FORCE_SHINY
	setflag FLAG_VERDANTURF_DRAKE_POKEMON
	playfanfare MUS_OBTAIN_ITEM
	msgbox VerdanturfTown_Text_Received_Pokemon, MSGBOX_DEFAULT
	waitfanfare
	msgbox VerdanturfTown_Text_DrakeEnjoy, MSGBOX_DEFAULT
	release
	end

VerdanturfTown_EventScript_DrakeGoomy::
	bufferspeciesname 1, SPECIES_GOOMY
	givemon SPECIES_GOOMY, 5, ITEM_NONE
	clearflag FLAG_FORCE_SHINY
	setflag FLAG_VERDANTURF_DRAKE_POKEMON
	playfanfare MUS_OBTAIN_ITEM
	msgbox VerdanturfTown_Text_Received_Pokemon, MSGBOX_DEFAULT
	waitfanfare
	msgbox VerdanturfTown_Text_DrakeEnjoy, MSGBOX_DEFAULT
	release
	end

VerdanturfTown_EventScript_DrakeDreepy::
	bufferspeciesname 1, SPECIES_DREEPY
	givemon SPECIES_DREEPY, 5, ITEM_NONE
	clearflag FLAG_FORCE_SHINY
	setflag FLAG_VERDANTURF_DRAKE_POKEMON
	playfanfare MUS_OBTAIN_ITEM
	msgbox VerdanturfTown_Text_Received_Pokemon, MSGBOX_DEFAULT
	waitfanfare
	msgbox VerdanturfTown_Text_DrakeEnjoy, MSGBOX_DEFAULT
	release
	end

VerdanturfTown_EventScript_DrakeHorsea::
	bufferspeciesname 1, SPECIES_HORSEA
	givemon SPECIES_HORSEA, 5, ITEM_NONE
	clearflag FLAG_FORCE_SHINY
	setflag FLAG_VERDANTURF_DRAKE_POKEMON
	playfanfare MUS_OBTAIN_ITEM
	msgbox VerdanturfTown_Text_Received_Pokemon, MSGBOX_DEFAULT
	waitfanfare
	msgbox VerdanturfTown_Text_DrakeEnjoy, MSGBOX_DEFAULT
	release
	end

VerdanturfTown_EventScript_DrakeFrigibax::
	bufferspeciesname 1, SPECIES_FRIGIBAX
	givemon SPECIES_FRIGIBAX, 5, ITEM_NONE
	clearflag FLAG_FORCE_SHINY
	setflag FLAG_VERDANTURF_DRAKE_POKEMON
	playfanfare MUS_OBTAIN_ITEM
	msgbox VerdanturfTown_Text_Received_Pokemon, MSGBOX_DEFAULT
	waitfanfare
	msgbox VerdanturfTown_Text_DrakeEnjoy, MSGBOX_DEFAULT
	release
	end

VerdanturfTown_EventScript_DrakeMareep::
	bufferspeciesname 1, SPECIES_MAREEP
	givemon SPECIES_MAREEP, 5, ITEM_NONE
	clearflag FLAG_FORCE_SHINY
	setflag FLAG_VERDANTURF_DRAKE_POKEMON
	playfanfare MUS_OBTAIN_ITEM
	msgbox VerdanturfTown_Text_Received_Pokemon, MSGBOX_DEFAULT
	waitfanfare
	msgbox VerdanturfTown_Text_DrakeEnjoy, MSGBOX_DEFAULT
	release
	end

VerdanturfTown_EventScript_DrakeIgglybuff::
	bufferspeciesname 1, SPECIES_IGGLYBUFF
	givemon SPECIES_IGGLYBUFF, 5, ITEM_NONE
	clearflag FLAG_FORCE_SHINY
	setflag FLAG_VERDANTURF_DRAKE_POKEMON
	playfanfare MUS_OBTAIN_ITEM
	msgbox VerdanturfTown_Text_Received_Pokemon, MSGBOX_DEFAULT
	waitfanfare
	msgbox VerdanturfTown_Text_DrakeEnjoy, MSGBOX_DEFAULT
	release
	end

VerdanturfTown_EventScript_Camper::
	msgbox VerdanturfTown_Text_MakeBattleTentDebut, MSGBOX_NPC
	end

VerdanturfTown_EventScript_Boy::
	lock
	faceplayer
	goto_if_set FLAG_RUSTURF_TUNNEL_OPENED, VerdanturfTown_EventScript_BoyTunnelOpen
	msgbox VerdanturfTown_Text_GuyTryingToBustThroughCave, MSGBOX_DEFAULT
	release
	end

VerdanturfTown_EventScript_BoyTunnelOpen::
	msgbox VerdanturfTown_Text_EasyToGetToRustboroNow, MSGBOX_DEFAULT
	release
	end

VerdanturfTown_EventScript_TownSign::
	msgbox VerdanturfTown_Text_TownSign, MSGBOX_SIGN
	end

VerdanturfTown_EventScript_WandasHouseSign::
	msgbox VerdanturfTown_Text_WandasHouse, MSGBOX_SIGN
	end

VerdanturfTown_EventScript_BattleTentSign::
	msgbox VerdanturfTown_Text_BattleTentSign, MSGBOX_SIGN
	end

VerdanturfTown_EventScript_RusturfTunnelSign::
	msgbox VerdanturfTown_Text_RusturfTunnelSign, MSGBOX_SIGN
	end

VerdanturfTown_Text_ManTryingToDigTunnel:
	.string "My papa told me.\p"
	.string "He says this tunnel is full of\n"
	.string "timid POKéMON.\p"
	.string "They get all scared of loud noise and\n"
	.string "make a big uproar.\p"
	.string "So they had to stop the big tunnel\n"
	.string "project.\p"
	.string "But there's one man. He's trying to dig\n"
	.string "the tunnel by himself!$"

VerdanturfTown_Text_ManDugTunnelForLove:
	.string "There was a man who dug a tunnel for\n"
	.string "a lady he loved.\p"
	.string "I don't really get it, but hey!$"

VerdanturfTown_Text_MakeBattleTentDebut:
	.string "My POKéMON and I, we've been riding\n"
	.string "a hot winning streak.\p"
	.string "So I decided to make my BATTLE TENT\n"
	.string "debut in this town.$"

VerdanturfTown_Text_GuyTryingToBustThroughCave:
	.string "Did you see the cave next to the\n"
	.string "POKéMON MART?\p"
	.string "There's a guy in there who's trying to\n"
	.string "bust up boulders so he can bust out\l"
	.string "through to the other side.\p"
	.string "It'd be great if we could go through…\n"
	.string "It'll make it easy to visit RUSTBORO.$"

VerdanturfTown_Text_EasyToGetToRustboroNow:
	.string "That cave next to the POKéMON MART\n"
	.string "is now a tunnel to the other side.\p"
	.string "It's great--it's easy to go shop for\n"
	.string "new DEVON products in RUSTBORO now.$"

VerdanturfTown_Text_TownSign:
	.string "VERDANTURF TOWN\p"
	.string "“The windswept highlands with the\n"
	.string "sweet fragrance of grass.”$"

VerdanturfTown_Text_WandasHouse:
	.string "WANDA'S HOUSE$"

VerdanturfTown_Text_BattleTentSign:
	.string "BATTLE TENT VERDANTURF SITE\n"
	.string "“Feast Your Eyes on Battles!”$"

VerdanturfTown_Text_Received_Pokemon:
	.string "{PLAYER} received a {STR_VAR_2}!$"

VerdanturfTown_Text_RusturfTunnelSign:
	.string "RUSTURF TUNNEL\n"
	.string "“Linking RUSTBORO and VERDANTURF\p"
	.string "“The tunnel project has been\n"
	.string "canceled.”$"

VerdanturfTown_Text_DrakeCongratulations:
	.string "Congratulations on completing the\n"
	.string "trial to arrive before me.\p"
	.string "Your strength shall be rewarded\n"
	.string "by receiving a POKéMON with great\l"
	.string "potential.$"

VerdanturfTown_Text_DrakePartyFull:
	.string "Ah, it would seem as though your\n"
	.string "current roster is too full to\l"
	.string "receive my gift.\p"
	.string "Please make your way to the\n"
	.string "POKéCENTER and make a space.$"

VerdanturfTown_Text_DrakeEnjoy:
	.string "Enjoy your {STR_VAR_2}, {PLAYER}.\n"
	.string "You've earned it.$"

VerdanturfTown_Text_DrakeGiven:
	.string "There be a great many dangers\n"
	.string "out there lad. Strength alone won't\l"
	.string "keep you safe.$"
