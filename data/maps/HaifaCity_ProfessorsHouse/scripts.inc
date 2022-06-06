HaifaCity_ProfessorsHouse_MapScripts::
	.byte 0


HaifaCity_ProfessorsHouse_EventScript_GiveMon::
	lock
	faceplayer
	compare VAR_GET_STARTER, 0
	goto_if_eq HaifaCity_ProfessorsHouse_EventScript_GiveMon_2
	msgbox HaifaCity_ProfessorsHouse_EventScript_GiveMon_Text_0
HaifaCity_ProfessorsHouse_EventScript_GiveMon_1:
	release
	end

HaifaCity_ProfessorsHouse_EventScript_GiveMon_2:
	call HaifaCity_ProfessorsHouse_ChooseStarter
	setflag FLAG_SYS_POKEMON_GET
	setvar VAR_GET_STARTER, 1
	goto HaifaCity_ProfessorsHouse_EventScript_GiveMon_1


HaifaCity_ProfessorsHouse_ChooseStarter::
	msgbox HaifaCity_ProfessorsHouse_ChooseStarter_Text_0
	waitmessage
	multichoice 20, 0, MULTI_CHOOSE_STARTER, 1
	switch VAR_RESULT
	case 0, HaifaCity_ProfessorsHouse_ChooseStarter_3
	case 1, HaifaCity_ProfessorsHouse_ChooseStarter_4
	case 2, HaifaCity_ProfessorsHouse_ChooseStarter_5
	case 3, HaifaCity_ProfessorsHouse_ChooseStarter_6
	case 4, HaifaCity_ProfessorsHouse_ChooseStarter_7
	case 5, HaifaCity_ProfessorsHouse_ChooseStarter_8
	case 6, HaifaCity_ProfessorsHouse_ChooseStarter_9
	case 7, HaifaCity_ProfessorsHouse_ChooseStarter_10
	case 8, HaifaCity_ProfessorsHouse_ChooseStarter_11
HaifaCity_ProfessorsHouse_ChooseStarter_1:
	return

HaifaCity_ProfessorsHouse_ChooseStarter_3:
	goto GiveDratini
	goto HaifaCity_ProfessorsHouse_ChooseStarter_1

HaifaCity_ProfessorsHouse_ChooseStarter_4:
	goto GiveLarvitar
	goto HaifaCity_ProfessorsHouse_ChooseStarter_1

HaifaCity_ProfessorsHouse_ChooseStarter_5:
	goto GiveBagon
	goto HaifaCity_ProfessorsHouse_ChooseStarter_1

HaifaCity_ProfessorsHouse_ChooseStarter_6:
	goto GiveBeldum
	goto HaifaCity_ProfessorsHouse_ChooseStarter_1

HaifaCity_ProfessorsHouse_ChooseStarter_7:
	goto GiveGible
	goto HaifaCity_ProfessorsHouse_ChooseStarter_1

HaifaCity_ProfessorsHouse_ChooseStarter_8:
	goto GiveDeino
	goto HaifaCity_ProfessorsHouse_ChooseStarter_1

HaifaCity_ProfessorsHouse_ChooseStarter_9:
	goto GiveGoomy
	goto HaifaCity_ProfessorsHouse_ChooseStarter_1

HaifaCity_ProfessorsHouse_ChooseStarter_10:
	goto GiveJangmo_o
	goto HaifaCity_ProfessorsHouse_ChooseStarter_1

HaifaCity_ProfessorsHouse_ChooseStarter_11:
	goto GiveDreepy
	goto HaifaCity_ProfessorsHouse_ChooseStarter_1


GiveDratini::
	showmonpic SPECIES_DRATINI, 10, 3
	msgbox GiveDratini_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq GiveDratini_2
	hidemonpic
	goto HaifaCity_ProfessorsHouse_ChooseStarter
GiveDratini_1:
	return

GiveDratini_2:
	givemon SPECIES_DRATINI, 5, ITEM_NONE
	hidemonpic
	playfanfare MUS_OBTAIN_ITEM
	msgbox GiveDratini_Text_1
	goto NicknamePartyMon
	goto GiveDratini_1


GiveLarvitar::
	showmonpic SPECIES_LARVITAR, 10, 3
	msgbox GiveDratini_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq GiveLarvitar_2
	hidemonpic
	goto HaifaCity_ProfessorsHouse_ChooseStarter
GiveLarvitar_1:
	return

GiveLarvitar_2:
	givemon SPECIES_LARVITAR, 5, ITEM_NONE
	hidemonpic
	playfanfare MUS_OBTAIN_ITEM
	msgbox GiveLarvitar_Text_0
	goto NicknamePartyMon
	goto GiveLarvitar_1


GiveBagon::
	showmonpic SPECIES_BAGON, 10, 3
	msgbox GiveDratini_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq GiveBagon_2
	hidemonpic
	goto HaifaCity_ProfessorsHouse_ChooseStarter
GiveBagon_1:
	return

GiveBagon_2:
	givemon SPECIES_BAGON, 5, ITEM_NONE
	hidemonpic
	playfanfare MUS_OBTAIN_ITEM
	msgbox GiveBagon_Text_0
	goto NicknamePartyMon
	goto GiveBagon_1


GiveBeldum::
	showmonpic SPECIES_BELDUM, 10, 3
	msgbox GiveDratini_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq GiveBeldum_2
	hidemonpic
	goto HaifaCity_ProfessorsHouse_ChooseStarter
GiveBeldum_1:
	return

GiveBeldum_2:
	givemon SPECIES_BELDUM, 5, ITEM_NONE
	hidemonpic
	playfanfare MUS_OBTAIN_ITEM
	msgbox GiveBeldum_Text_0
	goto NicknamePartyMon
	goto GiveBeldum_1


GiveGible::
	showmonpic SPECIES_GIBLE, 10, 3
	msgbox GiveDratini_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq GiveGible_2
	hidemonpic
	goto HaifaCity_ProfessorsHouse_ChooseStarter
GiveGible_1:
	return

GiveGible_2:
	givemon SPECIES_GIBLE, 5, ITEM_NONE
	hidemonpic
	playfanfare MUS_OBTAIN_ITEM
	msgbox GiveGible_Text_0
	goto NicknamePartyMon
	goto GiveGible_1


GiveDeino::
	showmonpic SPECIES_DEINO, 10, 3
	msgbox GiveDratini_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq GiveDeino_2
	hidemonpic
	goto HaifaCity_ProfessorsHouse_ChooseStarter
GiveDeino_1:
	return

GiveDeino_2:
	givemon SPECIES_DEINO, 5, ITEM_NONE
	hidemonpic
	playfanfare MUS_OBTAIN_ITEM
	msgbox GiveDeino_Text_0
	goto NicknamePartyMon
	goto GiveDeino_1


GiveGoomy::
	showmonpic SPECIES_GOOMY, 10, 3
	msgbox GiveDratini_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq GiveGoomy_2
	hidemonpic
	goto HaifaCity_ProfessorsHouse_ChooseStarter
GiveGoomy_1:
	return

GiveGoomy_2:
	givemon SPECIES_GOOMY, 5, ITEM_NONE
	hidemonpic
	playfanfare MUS_OBTAIN_ITEM
	msgbox GiveGoomy_Text_0
	goto NicknamePartyMon
	goto GiveGoomy_1


GiveJangmo_o::
	showmonpic SPECIES_JANGMO_O, 10, 3
	msgbox GiveDratini_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq GiveJangmo_o_2
	hidemonpic
	goto HaifaCity_ProfessorsHouse_ChooseStarter
GiveJangmo_o_1:
	return

GiveJangmo_o_2:
	givemon SPECIES_JANGMO_O, 5, ITEM_NONE
	hidemonpic
	playfanfare MUS_OBTAIN_ITEM
	msgbox GiveJangmo_o_Text_0
	goto NicknamePartyMon
	goto GiveJangmo_o_1


GiveDreepy::
	showmonpic SPECIES_DREEPY, 10, 3
	msgbox GiveDratini_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq GiveDreepy_2
	hidemonpic
	goto HaifaCity_ProfessorsHouse_ChooseStarter
GiveDreepy_1:
	return

GiveDreepy_2:
	givemon SPECIES_DREEPY, 5, ITEM_NONE
	hidemonpic
	playfanfare MUS_OBTAIN_ITEM
	msgbox GiveDreepy_Text_0
	goto NicknamePartyMon
	goto GiveDreepy_1


NicknamePartyMon::
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_2
NicknamePartyMon_1:
	return

NicknamePartyMon_2:
	call Common_EventScript_GetGiftMonPartySlot
	call Common_EventScript_NameReceivedPartyMon
	goto NicknamePartyMon_1


HaifaCity_ProfessorsHouse_EventScript_GiveMon_Text_0:
	.string "Good luck on your journey!$"

HaifaCity_ProfessorsHouse_ChooseStarter_Text_0:
	.string "Which starter will you choose?$"

GiveDratini_Text_0:
	.string "Would you like this Pokemon?$"

GiveDratini_Text_1:
	.string "Received Dratini$"

GiveLarvitar_Text_0:
	.string "Received Larvitar$"

GiveBagon_Text_0:
	.string "Received Bagon$"

GiveBeldum_Text_0:
	.string "Received Beldum$"

GiveGible_Text_0:
	.string "Received Gible$"

GiveDeino_Text_0:
	.string "Received Deino$"

GiveGoomy_Text_0:
	.string "Received Goomy$"

GiveJangmo_o_Text_0:
	.string "Received Jangmo-o$"

GiveDreepy_Text_0:
	.string "Received Dreepy$"

NicknamePartyMon_Text_0:
	.string "Give it a nickname?$"
