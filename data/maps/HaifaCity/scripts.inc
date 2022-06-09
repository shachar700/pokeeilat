.set LOCALID_BIRCH, 5

HaifaCity_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, HaifaCity_EventScript_OnTransition
	.byte 0

HaifaCity_EventScript_OnTransition:
	call_if_unset FLAG_UNUSED_0x021, HaifaCity_EventScript_SetUpRivalBattle
	end

HaifaCity_EventScript_CityGym::
	msgbox HaifaCity_Text_CityGym, MSGBOX_NPC
	end

HaifaCity_EventScript_FatMan::
	msgbox HaifaCity_Text_CanUsePCToStoreItems, MSGBOX_NPC
	end

HaifaCity_EventScript_Boy::
	msgbox HaifaCity_Text_BirchSpendsDaysInLab, MSGBOX_NPC
	end

HaifaCity_EventScript_LittleKid::
	msgbox HaifaCity_Text_LittleKid, MSGBOX_NPC
	end

HaifaCity_EventScript_LittleGirl::
	msgbox HaifaCity_Text_LittleGirl, MSGBOX_NPC
	end

HaifaCity_EventScript_TownSign::
	msgbox HaifaCity_Text_TownSign, MSGBOX_SIGN
	end

HaifaCity_EventScript_BirchsLabMailbox::
	msgbox HaifaCity_Text_ProfBirchsLab, MSGBOX_SIGN
	end

HaifaCity_EventScript_PlayersMailbox::
	msgbox HaifaCity_Text_PlayersMailbox, MSGBOX_SIGN
	end

HaifaCity_EventScript_RivalsMailbox::
	msgbox HaifaCity_Text_RivalsMailbox, MSGBOX_SIGN
	end

HaifaCity_Text_CanUsePCToStoreItems:
	.string "I never thought of the day people could\n"
	.string "store items in the clouds.\p"
	.string "The power of science is astounding!$"

HaifaCity_Text_BirchSpendsDaysInLab:
	.string "PROF. ARAUCARIA is a very messy guy.\n"
	.string "His house has piles of books and trash\l"
	.string "all over the place…\p"
	.string "He should really clean up his\n"
	.string "living room.$"

HaifaCity_Text_LittleKid:
	.string "Weeeeeeeeeeeeee.$"

HaifaCity_Text_LittleGirl:
	.string "Help me! I'm getting chased.$"

HaifaCity_Text_TownSign:
	.string "HAIFA CITY\n"
	.string "“A city that can never bore.”$"

HaifaCity_Text_ProfBirchsLab:
	.string "PROF. ARAUCARIA'S mailbox.\n"
	.string "It's full of letters.$"

HaifaCity_Text_PlayersMailbox:
	.string "My family's mailbox…\n"
	.string "None of the letters are for me though.$"

HaifaCity_Text_RivalsMailbox:
	.string "Maya's mailbox…\n"
	.string "It would be rude to sniff around.$"

HaifaCity_Text_CityGym:
	.string "HAIFA CITY GYM\n"
	.string "Where the sea hits the shore.$"

HaifaCity_Movement_BirchGreet:
	face_left
	step_end

HaifaCity_Movement_PlayerGetsCloser:
	walk_down
	walk_right
	walk_right
	walk_down
	face_right
	step_end

HaifaCity_EventScript_SetUpRivalBattle::
	goto_if_unset FLAG_SYS_POKEMON_GET, HaifaCity_EventScript_SetUpRivalBattle_1
	clearflag FLAG_TRAINER_BATTLE_1
	return

HaifaCity_EventScript_SetUpRivalBattle_1:
	setflag FLAG_TRAINER_BATTLE_1
	return


HaifaCity_EventScript_RivalBattle::
	trainerbattle_single TRAINER_MAY_ROUTE_103_TORCHIC, May_Intro, May_Outro
	msgbox PostBattle_May, MSGBOX_AUTOCLOSE
	waitmessage
	end


May_Intro::
	.string "You'll never win$"

May_Outro::
	.string "Doesn't count$"

PostBattle_May::
	.string "I'll win next time$"
