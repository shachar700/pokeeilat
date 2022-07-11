.set LOCALID_MOM, 1

LittlerootTown_BrendansHouse_1F_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LittlerootTown_BrendansHouse_1F_Mapscript2_Init
	.byte 0

LittlerootTown_BrendansHouse_1F_Mapscript2_Init::
	map_script_2 VAR_HAIFA_CITY_MOMS_STATE, 1, LittlerootTown_BrendansHouse_1F_EventScript_Journey
	.2byte 0

LittlerootTown_BrendansHouse_1F_EventScript_Journey:
	goto LittlerootTown_BrendansHouse_1F_EventScript_Farewell
	end

LittlerootTown_BrendansHouse_1F_EventScript_Farewell::
	lock
	msgbox LittlerootTown_BrendansHouse_1F_Text_ComeCloser, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_1F_Movement_ToTheTable
	waitmovement 0
	msgbox LittlerootTown_BrendansHouse_1F_Text_Journey, MSGBOX_DEFAULT
	closemessage
	setvar VAR_HAIFA_CITY_MOMS_STATE, 2
	release
	end

LittlerootTown_BrendansHouse_1F_EventScript_Mom::
	msgbox LittlerootTown_BrendansHouse_1F_Text_MomLove, MSGBOX_NPC
	end

LittlerootTown_BrendansHouse_1F_EventScript_Dad::
	msgbox LittlerootTown_BrendansHouse_1F_Text_CypressEvos, MSGBOX_NPC
	end

LittlerootTown_BrendansHouse_1F_Text_MomLove:
	.string "{COLOR RED}MOM:{COLOR DARK_GRAY} I love you honey.\n"
	.string "Take care on your journey.$"

LittlerootTown_BrendansHouse_1F_Text_ComeCloser:
	.string "{COLOR RED}MOM:{COLOR DARK_GRAY} Here you are!\n"
	.string "We've been waiting, come sit with us.$"

LittlerootTown_BrendansHouse_1F_Text_Journey:
	.string "{COLOR RED}MOM:{COLOR DARK_GRAY} I hope you are all packed up and\n"
	.string "ready to go for your adventure.\p"
	.string "Professor ARAUCARIA told us he'll give\n"
	.string "you your very first POKéMON.\p"
	.string "Take care, make new friends and come\n"
	.string "home when you feel homesick.\p"
	.string "We love you honey.$"

LittlerootTown_BrendansHouse_1F_Text_CypressEvos:
	.string "{COLOR BLUE}DAD:{COLOR DARK_GRAY} Don't do anything\n"
	.string "you might regret in the future.\p"
	.string "It's important to be on top of things.$"

LittlerootTown_1F_Movement_ToTheTable:
	walk_right
	walk_down
    walk_right
    walk_down
    walk_down
    walk_down
    walk_down   
    walk_down
    walk_right
    walk_up
	face_right
	step_end
