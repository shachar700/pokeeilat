.set LOCALID_MOM, 1

LittlerootTown_BrendansHouse_1F_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LittlerootTown_BrendansHouse_1F_Mapscript2_Init
	.byte 0

LittlerootTown_BrendansHouse_1F_Mapscript2_Init::
	map_script_2 VAR_HAIFA_CITY_MOMS_STATE, 1, LittlerootTown_BrendansHouse_1F_EventScript_Vacation
	.2byte 0

LittlerootTown_BrendansHouse_1F_EventScript_Vacation:
	goto LittlerootTown_BrendansHouse_1F_EventScript_Farewell
	end

LittlerootTown_BrendansHouse_1F_EventScript_Farewell::
	lock
	msgbox LittlerootTown_BrendansHouse_1F_Text_ComeCloser, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_1F_Movement_ToTheTable
	waitmovement 0
	msgbox LittlerootTown_BrendansHouse_1F_Text_Vacation, MSGBOX_DEFAULT
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
	.string "{COLOR RED}MOM:{COLOR DARK_GRAY} I love you honey.$"

LittlerootTown_BrendansHouse_1F_Text_ComeCloser:
	.string "{COLOR RED}MOM:{COLOR DARK_GRAY} Come closer honey.$"

LittlerootTown_BrendansHouse_1F_Text_Vacation:
	.string "{COLOR RED}MOM:{COLOR DARK_GRAY} Your father and I are going\n"
	.string "to HOENN for the summer.\p"
	.string "We will be gone for a while so I cooked\n"
	.string "your favorites.\p"
	.string "Don't do anything dangerous, honey.\p"
	.string "Professor Cypress will take of you on\n"
	.string "our absent.\p"
	.string "Go say hello to him next door.$"

LittlerootTown_BrendansHouse_1F_Text_CypressEvos:
	.string "{COLOR BLUE}DAD:{COLOR DARK_GRAY} Professor Cypress came\n"
	.string "to town for his experiments.\p"
	.string "He is studying the evolutions of\n"
	.string "POKéMON.$"

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
	step_end