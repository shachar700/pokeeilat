.set LOCALID_BIRCH, 5

HaifaCity_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, HaifaCity_EventScript_OnFrame
	.byte 0

HaifaCity_EventScript_OnFrame:
	map_script_2 VAR_HAIFA_CITY_STATE, 0, HaifaCity_EventScript_PickStarter	
	.2byte 0

HaifaCity_EventScript_PickStarter::
	lockall
	applymovement LOCALID_BIRCH, Common_Movement_FacePlayer
	waitmovement 0
	playse SE_PIN	
	applymovement LOCALID_BIRCH, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_BIRCH, HaifaCity_Movement_WalkInPlace   
	waitmovement 0
	msgbox HaifaCity_Text_ProfIntro, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_BIRCH, HaifaCity_Movement_BirchWalksAway
	waitmovement 0
	removeobject LOCALID_BIRCH
	setflag FLAG_HIDE_BIRCH_HAIFA
	setvar VAR_HAIFA_CITY_STATE, 1
	releaseall
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

HaifaCity_Text_ProfIntro:
	.string "PROF: Oh hi there {PLAYER}!\p"
	.string "I came here to let you know that\n"
	.string "your very first Pokemon is\l"
	.string "waiting for you.\p"
	.string "Come see me at my POKEMON LAB.$"

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

HaifaCity_Movement_WalkInPlace:
	walk_in_place_slow_left
	walk_left
	step_end

HaifaCity_Movement_ProfWalksToLab:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	walk_up
	step_end

HaifaCity_Movement_PlayerWalksToLab:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	step_end

HaifaCity_Movement_ProfApproachDoor:
	delay_16
	delay_8
	walk_up
	step_end

HaifaCity_Movement_ProfEnterHouse:
	walk_up
	set_invisible
	step_end

HaifaCity_Movement_PlayerApproachDoor:
	delay_16
	delay_8
	walk_up
	step_end

HaifaCity_Movement_PlayerEnterHouse:
	walk_up
	set_invisible
	step_end

HaifaCity_Movement_BirchWalksAway:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

HaifaCity_EventScript_WonderOffSouth::
	lock
	msgbox HaifaCity_EventScript_WonderOffSouth_Text_0
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, PlayerWalksUp
	waitmovement 0
	release
	return


PlayerWalksUp:
	walk_up
	step_end

HaifaCity_EventScript_WonderOffSouth_Text_0:
	.string "I should probably not wonder off\n"
	.string "without a Pokemon.$"
