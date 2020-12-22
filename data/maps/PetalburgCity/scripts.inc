.set LOCALID_WALLY, 2
.set LOCALID_BOY, 3
.set LOCALID_WALLYS_DAD, 5
.set LOCALID_GYM_BOY, 8
.set LOCALID_SCOTT, 9

PetalburgCity_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, PetalburgCity_OnTransition
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PetalburgCity_OnFrame
	.byte 0

PetalburgCity_OnTransition: @ 81DC2D7
	setflag FLAG_VISITED_PETALBURG_CITY
	end

PetalburgCity_EventScript_MoveGymBoyToWestEntrance:: @ 81DC307
	setobjectxyperm LOCALID_GYM_BOY, 5, 11
	return



PetalburgCity_OnFrame: @ 81DC31C
	map_script_2 VAR_PETALBURG_CITY_STATE, 2, PetalburgCity_EventScript_WallyTutorial
	.2byte 0

PetalburgCity_EventScript_WallyTutorial:: @ 81DC32E
	lockall
	waitstate
	releaseall
	end

PetalburgCity_EventScript_Nick:: @ 81DC3E6
	lock
	faceplayer
	goto_if_set FLAG_BADGE01_GET, PetalburgCity_EventScript_Nick_AskRemoveChallenge
	goto_if_set FLAG_NUZLOCKE_MODE, PetalburgCity_EventScript_Nick_ChallengeGoing
	msgbox PetalburgCity_Text_Nick_1, MSGBOX_DEFAULT
	msgbox PetalburgCity_Text_Nick_2, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq PetalburgCity_EventScript_Nick_StartChallenge
	closemessage
	release
	end

PetalburgCity_EventScript_Nick_StartChallenge::
	setflag FLAG_NUZLOCKE_MODE
	msgbox PetalburgCity_Text_Nick_3, MSGBOX_DEFAULT
	closemessage
	release
	end

PetalburgCity_EventScript_Nick_ChallengeGoing::
	msgbox PetalburgCity_Text_Nick_4, MSGBOX_DEFAULT
	closemessage
	release
	end

PetalburgCity_EventScript_Nick_AskRemoveChallenge::
	goto_if_unset FLAG_NUZLOCKE_MODE, PetalburgCity_EventScript_Nick_ChallengeOver
	msgbox PetalburgCity_Text_Nick_5, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq PetalburgCity_EventScript_Nick_ChallengeOver
	goto PetalburgCity_EventScript_Nick_ChallengeGoing
	end

PetalburgCity_EventScript_Nick_ChallengeOver::
	clearflag FLAG_NUZLOCKE_MODE
	msgbox PetalburgCity_Text_Nick_6, MSGBOX_DEFAULT
	closemessage
	release
	end


PetalburgCity_EventScript_Unnamed:: @ 81DC3E6
	lock
	faceplayer
	goto_if_set FLAG_BADGE01_GET, PetalburgCity_EventScript_Unnamed_AskRemoveChallenge
	goto_if_set FLAG_CHALLENGE_MODE, PetalburgCity_EventScript_Unnamed_ChallengeGoing
	msgbox PetalburgCity_Text_Unnamed_1, MSGBOX_DEFAULT
	msgbox PetalburgCity_Text_Unnamed_2, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq PetalburgCity_EventScript_Unnamed_StartChallenge
	closemessage
	release
	end

PetalburgCity_EventScript_Unnamed_StartChallenge::
	setflag FLAG_CHALLENGE_MODE
	msgbox PetalburgCity_Text_Unnamed_3, MSGBOX_DEFAULT
	closemessage
	release
	end

PetalburgCity_EventScript_Unnamed_ChallengeGoing::
	msgbox PetalburgCity_Text_Unnamed_4, MSGBOX_DEFAULT
	closemessage
	release
	end

PetalburgCity_EventScript_Unnamed_AskRemoveChallenge::
	goto_if_unset FLAG_CHALLENGE_MODE, PetalburgCity_EventScript_Unnamed_ChallengeOver
	msgbox PetalburgCity_Text_Unnamed_5, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq PetalburgCity_EventScript_Unnamed_ChallengeOver
	goto PetalburgCity_EventScript_Unnamed_ChallengeGoing
	end

PetalburgCity_EventScript_Unnamed_ChallengeOver::
	clearflag FLAG_CHALLENGE_MODE
	msgbox PetalburgCity_Text_Unnamed_6, MSGBOX_DEFAULT
	closemessage
	release
	end


PetalburgCity_Movement_WalkToWallyHousePlayer: @ 81DC406
	delay_8
	walk_down
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end





@ Unused
PetalburgCity_Movement_Delay48:: @ 81DC611
	delay_16
	delay_16
	delay_16
	step_end

PetalburgCity_Movement_BoyApproachPlayer0: @ 81DC615
	walk_right
	walk_right
	walk_right
	walk_in_place_fastest_up
	step_end

PetalburgCity_Movement_BoyApproachPlayer1: @ 81DC61A
	walk_right
	walk_right
	step_end

PetalburgCity_Movement_BoyApproachPlayer2: @ 81DC61D
	walk_right
	walk_right
	walk_right
	walk_in_place_fastest_down
	step_end

PetalburgCity_Movement_BoyApproachPlayer3: @ 81DC622
	walk_down
	walk_right
	walk_right
	walk_right
	walk_in_place_fastest_down
	step_end

PetalburgCity_Movement_BoyWalkToGym0: @ 81DC628
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_right
	walk_in_place_fastest_up
	step_end

PetalburgCity_Movement_BoyWalkToGym1: @ 81DC633
	walk_down
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
	walk_right
	walk_in_place_fastest_up
	step_end

PetalburgCity_Movement_BoyWalkToGym2: @ 81DC641
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_right
	walk_in_place_fastest_up
	step_end

PetalburgCity_Movement_BoyWalkToGym3: @ 81DC64C
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	walk_right
	walk_in_place_fastest_up
	step_end

PetalburgCity_Movement_BoyWalkAway: @ 81DC658
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

PetalburgCity_Movement_PlayerWalkToGym0: @ 81DC665
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	step_end

PetalburgCity_Movement_PlayerWalkToGym1: @ 81DC66F
	delay_16
	delay_16
	walk_down
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

PetalburgCity_Movement_PlayerWalkToGym2: @ 81DC67C
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	step_end

PetalburgCity_Movement_PlayerWalkToGym3: @ 81DC686
	walk_up
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

PetalburgCity_EventScript_Scott0:: @ 81DC691
	lockall
	addobject LOCALID_SCOTT
	setvar VAR_0x8008, 0
	setobjectxy LOCALID_SCOTT, 13, 10
	goto PetalburgCity_EventScript_Scott
	end

PetalburgCity_EventScript_Scott1:: @ 81DC6A7
	lockall
	addobject LOCALID_SCOTT
	setvar VAR_0x8008, 1
	setobjectxy LOCALID_SCOTT, 13, 11
	goto PetalburgCity_EventScript_Scott
	end

PetalburgCity_EventScript_Scott2:: @ 81DC6BD
	lockall
	addobject LOCALID_SCOTT
	setvar VAR_0x8008, 2
	setobjectxy LOCALID_SCOTT, 13, 12
	goto PetalburgCity_EventScript_Scott
	end

PetalburgCity_EventScript_Scott3:: @ 81DC6D3
	lockall
	addobject LOCALID_SCOTT
	setvar VAR_0x8008, 3
	setobjectxy LOCALID_SCOTT, 13, 13
	goto PetalburgCity_EventScript_Scott
	end

PetalburgCity_EventScript_Scott:: @ 81DC6E9
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottStartWalkLeft
	waitmovement 0
	playse SE_PIN
	applymovement LOCALID_SCOTT, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_SCOTT, Common_Movement_Delay48
	waitmovement 0
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottApproachPlayer
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFastestRight
	waitmovement 0
	setvar VAR_SCOTT_STATE, 1
	msgbox PetalburgCity_Text_AreYouATrainer, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_SCOTT, Common_Movement_WalkInPlaceFastestRight
	waitmovement 0
	delay 30
	msgbox PetalburgCity_Text_WellMaybeNot, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_SCOTT, Common_Movement_WalkInPlaceFastestLeft
	waitmovement 0
	delay 30
	msgbox PetalburgCity_Text_ImLookingForTalentedTrainers, MSGBOX_DEFAULT
	closemessage
	compare VAR_0x8008, 0
	call_if_eq PetalburgCity_EventScript_ScottExit0
	compare VAR_0x8008, 1
	call_if_eq PetalburgCity_EventScript_ScottExit1
	compare VAR_0x8008, 2
	call_if_eq PetalburgCity_EventScript_ScottExit2
	compare VAR_0x8008, 3
	call_if_eq PetalburgCity_EventScript_ScottExit3
	setvar VAR_SCOTT_PETALBURG_ENCOUNTER, 1
	removeobject LOCALID_SCOTT
	releaseall
	end

PetalburgCity_EventScript_ScottExit0:: @ 81DC78E
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit0
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottExit0
	waitmovement 0
	return

PetalburgCity_EventScript_ScottExit1:: @ 81DC7A0
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit1
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottExit1
	waitmovement 0
	return

PetalburgCity_EventScript_ScottExit2:: @ 81DC7B2
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit2
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottExit2
	waitmovement 0
	return

PetalburgCity_EventScript_ScottExit3:: @ 81DC7C4
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit3
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottExit3
	waitmovement 0
	return

PetalburgCity_Movement_ScottStartWalkLeft: @ 81DC7D6
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

PetalburgCity_Movement_ScottApproachPlayer: @ 81DC7DB
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

PetalburgCity_Movement_ScottExit0: @ 81DC7E0
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

PetalburgCity_Movement_PlayerWatchScottExit0: @ 81DC7EE
	delay_16
	walk_in_place_fastest_down
	delay_16
	delay_16
	delay_8
	walk_in_place_fastest_left
	step_end

PetalburgCity_Movement_ScottExit1: @ 81DC7F5
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

PetalburgCity_Movement_PlayerWatchScottExit1: @ 81DC802
	delay_16
	walk_in_place_fastest_down
	delay_16
	delay_8
	walk_in_place_fastest_left
	step_end

PetalburgCity_Movement_ScottExit2: @ 81DC808
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

PetalburgCity_Movement_PlayerWatchScottExit2: @ 81DC815
	delay_16
	walk_in_place_fastest_down
	delay_16
	delay_8
	walk_in_place_fastest_left
	step_end

PetalburgCity_Movement_ScottExit3: @ 81DC81B
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

PetalburgCity_Movement_PlayerWatchScottExit3: @ 81DC828
	delay_16
	walk_in_place_fastest_up
	delay_16
	delay_8
	walk_in_place_fastest_left
	step_end

PetalburgCity_EventScript_GymBoy:: @ 81DC82E
	msgbox PetalburgCity_Text_AreYouRookieTrainer, MSGBOX_NPC
	end

PetalburgCity_Text_WhereIsWally: @ 81DC837
	.string "Where has our WALLY gone?\p"
	.string "We have to leave for VERDANTURF TOWN\n"
	.string "very soon…$"

PetalburgCity_Text_AreYouRookieTrainer: @ 81DC881
	.string "Hiya! Are you maybe…\n"
	.string "A rookie TRAINER?\p"
	.string "Do you know what POKéMON TRAINERS\n"
	.string "do when they reach a new town?\p"
	.string "They first check what kind of GYM\n"
	.string "is in the town.$"

PetalburgCity_Text_ThisIsPetalburgGym: @ 81DC91B
	.string "See? This is PETALBURG CITY's GYM.$"

PetalburgCity_Text_ThisIsGymSign: @ 81DC93E
	.string "This is the GYM's sign. Look for it\n"
	.string "whenever you're looking for a GYM.$"

PetalburgCity_Text_Nick_1: @ 81DC985
	.string "Hi, I'm Nick!\n"
	.string "I'm the creator of the nuzlocke challenge\p"
	.string "The challenge is quite simple…\n"
	.string "Any Pokémon that faints is released.\p"
	.string "You can only catch the first Pokémon\n"
	.string "on a route. (Species clause in place)\p"
	.string "Nick: Also nickname all your Pokémon\n"
	.string "to form stronger bonds!$"

PetalburgCity_Text_Nick_2: @ 81DCA30
	.string "Nick: Would you like to give the\n"
	.string "nuzlocke challenge a try?.$"

PetalburgCity_Text_Nick_3:
	.string "Nick: Thats great!\p"
	.string "Give it your best! If it becomes to\n"
	.string "much you can come see me again later.$"

PetalburgCity_Text_Nick_4:
	.string "Nick: Nuzlockes are not easy…\p"
	.string "Give it your best and you'll keep on\n"
	.string "improving with every battle.\p"
	.string "Good luck!$"

PetalburgCity_Text_Nick_5:
	.string "Nick: Hope everything is going well.\n"
	.string "I can disable the challenge?\n"
	.string "But I can not enable it again.$"

PetalburgCity_Text_Nick_6:
	.string "Nick: That's ok.\n"
	.string "The important thing is you have fun!$"

PetalburgCity_Text_Unnamed_1: @ 81DC985
	.string "Think your an expert?\p"
	.string "What if I added some rules?\p"
	.string "Wild pokemon are higher leveled.\l"
	.string "No items in trainer battles.\l"
	.string "PokéCenters are no longer free.\l"
	.string "No Legendary Pokémon.\l"
	.string "Limits to EXP gain.$"

PetalburgCity_Text_Unnamed_2: @ 81DCA30
	.string "Would you like to give this impossible\n"
	.string "expert mode a try?$"

PetalburgCity_Text_Unnamed_3:
	.string "Its your funeral…$"

PetalburgCity_Text_Unnamed_4:
	.string "When you're ready to quit\n"
	.string "come back and see me later$"

PetalburgCity_Text_Unnamed_5:
	.string "Ready to give up?.\n"
	.string "(Not reversible)$"

PetalburgCity_Text_Unnamed_6:
	.string "Knew you weren't ready yet.$"

PetalburgCity_Text_CitySign: @ 81DCAF1
	.string "PETALBURG CITY\n"
	.string "“Where people mingle with nature.”$"

PetalburgCity_Text_WallyHouseSign: @ 81DCB23
	.string "WALLY'S HOUSE$"

PetalburgCity_Text_AreYouATrainer: @ 81DCB31
	.string "Excuse me!\p"
	.string "Let me guess, from the way you're\n"
	.string "dressed, are you a POKéMON TRAINER?$"

PetalburgCity_Text_WellMaybeNot: @ 81DCB82
	.string "… … … … … …\p"
	.string "Well, maybe not.\n"
	.string "Your clothes aren't all that dirty.\p"
	.string "You're either a rookie TRAINER,\n"
	.string "or maybe you're just an ordinary kid.$"

PetalburgCity_Text_ImLookingForTalentedTrainers: @ 81DCC09
	.string "I'm roaming the land in search of\n"
	.string "talented TRAINERS.\p"
	.string "I'm sorry to have taken your time.$"
