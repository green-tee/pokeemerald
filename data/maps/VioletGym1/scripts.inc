VioletGym1_MapScripts::
	.byte 0

VioletGym1_EventScript_Falkner::
	trainerbattle_single TRAINER_FALKNER_1, VioletGym1_Text_FalknerIntro, VioletGym1_Text_FalknerDefeat, VioletGym1_EventScript_FalknerDefeated, NO_MUSIC
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, VioletGym1_EventScript_FalknerRematch
	msgbox VioletGym1_Text_FalknerPostBattle, MSGBOX_DEFAULT
	release
	end

VioletGym1_EventScript_FalknerRematch::
	trainerbattle_rematch_double TRAINER_FALKNER_1, VioletGym1_Text_FalknerPreRematch, VioletGym1_Text_FalknerRematchDefeat, VioletGym1_Text_FalknerRematchNeedTwoMons
	msgbox VioletGym1_Text_FalknerPostRematch, MSGBOX_AUTOCLOSE
	end

VioletGym1_EventScript_FalknerDefeated::
	message VioletGym1_Text_ReceivedBadge
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	msgbox VioletGym1_Text_BadgeInfo, MSGBOX_DEFAULT
	closemessage
	delay 30
	playfanfare MUS_REGISTER_MATCH_CALL
	msgbox VioletGym1_Text_RegisteredFalkner, MSGBOX_DEFAULT
	waitfanfare
	closemessage
	delay 30
	setflag FLAG_UNUSED_0x4B8
	release
	end

VioletGym1_Text_FalknerIntro:
	.string "I'm Falkner, the Violet City\n"
	.string "Pokémon Gym leader!\p"
	.string "People say you can clip flying-type\n"
	.string "Pokémon's wings with a jolt\p"
	.string "of electricity...\p"
	.string "I won't allow such insults to bird\n"
	.string "Pokémon!\p"
	.string "I'll show you the real power of\n"
	.string "the magnificent bird Pokémon!$"

VioletGym1_Text_FalknerDefeat:
	.string "...Darn!\n"
	.string "My Dad's cherished bird Pokémon...\p"
	.string "All right. Take this.\p"
	.string "It's the official Pokémon\n"
	.string "League ZEPHYR BADGE.$"

VioletGym1_Text_ReceivedBadge:
	.string "{PLAYER} received the ZEPHYR BADGE\n"
	.string "from Falkner.$"

VioletGym1_Text_BadgeInfo:
	.string "ZEPHYR BADGE raises the\n"
	.string "attack power of Pokémon.\p"
	.string "There are other Pokémon Gyms\l"
	.string "in cities and towns ahead.\p"
	.string "You should test your skills\l"
	.string "at these Gyms.\p"
	.string "I'm going to train hard to\l"
	.string "become the greatest bird master!$"

VioletGym1_Text_RegisteredFalkner:
	.string "Registered GYM LEADER FALKNER\n"
	.string "in the POKéNAV.$"

VioletGym1_Text_FalknerPreRematch:
	.string "FALKNER: Hi!\n"
	.string "I've been waiting for you!\p"
	.string "It's a pleasure to be able\n"
	.string " to battle you again!$"

VioletGym1_Text_FalknerRematchDefeat:
	.string "Mmm...n"
	.string "It's still a long way\p"
	.string "to become the best Trainer...$"

VioletGym1_Text_FalknerPostRematch:
	.string "FALKNER: As long as I have\n"
	.string "lofty ambitions, I can fly\p"
	.string "as far as I want.\n"
	.string "I'll keep flying and aiming high!\p"
	.string " Just like you!$"

VioletGym1_Text_FalknerRematchNeedTwoMons:
	.string "FALKNER: We humans can never escape\n"
	.string "gravity's pull on the ground.\p"
	.string "But by striving for excellence,\n"
	.string "we have the power to soar!\p"
	.string "You have scaled the pinnacle as\n"
	.string "the reigning CHAMPION.\p"
	.string "Please, allow me to see your power\n"
	.string "at full flight!\p"
	.string "Oh, no… Do you have but one\n"
	.string "POKéMON with you?\p"
	.string "Please return with two POKéMON\n"
	.string "at the very least.$"

VioletGym1_Text_FalknerPostBattle:
	.string "There are other Pokémon Gyms\l"
	.string "in cities and towns ahead.\p"
	.string "You should test your skills\l"
	.string "at these Gyms.\p"
	.string "I'm going to train hard to\l"
	.string "become the greatest bird master!$"