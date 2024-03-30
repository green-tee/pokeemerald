FuchsiaCity_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, FuchsiaCity_OnTransition
	.byte 0

FuchsiaCity_OnTransition:
	setflag FLAG_UNUSED_0x498
	end

	Fuchsia_Ivysaur::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_IVYSAUR, CRY_MODE_NORMAL
	msgbox Fuchsia_Ivysaur_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Fuchsia_Ivysaur_Text:
	.string "IVYSAUR: Iiiiivy!$"

Fuchsia_Fearow::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_FEAROW, CRY_MODE_NORMAL
	msgbox Fuchsia_Fearow_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Fuchsia_Fearow_Text:
	.string "FEAROW: Piiiiii!$"

Fuchsia_Magikarp::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_MAGIKARP, CRY_MODE_NORMAL
	msgbox Fuchsia_Magikarp_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Fuchsia_Magikarp_Text:
	.string "MAGIKARP: Eugh$"

Fuchsia_Jigglypuff::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_JIGGLYPUFF, CRY_MODE_NORMAL
	msgbox Fuchsia_Jigglypuff_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Fuchsia_Jigglypuff_Text:
	.string "JIGGLYPUFF: Puff Puff!$"

Fuchsia_Chansey::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_CHANSEY, CRY_MODE_NORMAL
	msgbox Fuchsia_Chansey_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Fuchsia_Chansey_Text:
	.string "CHANSEY: Chan Chan!$"