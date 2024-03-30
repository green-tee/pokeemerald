CeruleanCity_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, CeruleanCity_OnTransition
	.byte 0

CeruleanCity_OnTransition:
	setflag FLAG_UNUSED_0x496
	end

Cerulean_Slowbro::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_SLOWBRO, CRY_MODE_NORMAL
	msgbox Cerulean_Slowbro_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Cerulean_Slowbro_Text:
	.string "SLOWBRO: Graoh!$"

Cerulean_Kangaskhan::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_KANGASKHAN, CRY_MODE_NORMAL
	msgbox Cerulean_Kangaskhan_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Cerulean_Kangaskhan_Text:
	.string "KANGASKHAN: Graoh!$"

Cerulean_Snubbull::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_SNUBBULL, CRY_MODE_NORMAL
	msgbox Cerulean_Snubbull_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Cerulean_Snubbull_Text:
	.string "SNUBBULL: Worf!$"