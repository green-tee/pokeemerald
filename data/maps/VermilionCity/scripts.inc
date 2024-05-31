VermilionCity_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, VermilionCity_OnTransition
	.byte 0

VermilionCity_OnTransition:
	setflag FLAG_UNUSED_0x494
	end

	Vermilion_Machop::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_MACHOP, CRY_MODE_NORMAL
	msgbox Vermilion_Machop_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

VermilionCity_Truck::
	warp MAP_VERMILION_TRUCK, 4, 2,
	setdynamicwarp MAP_VERMILION_CITY, 40, 42
	waitstate
	release
	end

Vermilion_Machop_Text:
	.string "MACHOP: Chop chop!$"