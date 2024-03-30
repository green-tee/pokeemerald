CherrygroveCity_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, CherrygroveCity_OnTransition
	.byte 0

CherrygroveCity_OnTransition:
	setflag FLAG_UNUSED_0x4A0
	end

Cherrygrove_Butterfree::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_BUTTERFREE, CRY_MODE_NORMAL
	msgbox Cherrygrove_Butterfree_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Cherrygrove_Butterfree_Text:
	.string "BUTTERFREE: Frfrfr!$"

Cherrygrove_Furret::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_FURRET, CRY_MODE_NORMAL
	msgbox Cherrygrove_Furret_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Cherrygrove_Furret_Text:
	.string "FURRET: Furrrr!$"

Cherrygrove_Sentret::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_SENTRET, CRY_MODE_NORMAL
	msgbox Cherrygrove_Sentret_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Cherrygrove_Sentret_Text:
	.string "SENTRET: Furfur!$"

Cherrygrove_Murkrow::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_MURKROW, CRY_MODE_NORMAL
	msgbox Cherrygrove_Murkrow_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Cherrygrove_Murkrow_Text:
	.string "MURKROW: Krowkrow!$"

Cherrygrove_Farfetchd::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_FARFETCHD, CRY_MODE_NORMAL
	msgbox Cherrygrove_Farfetchd_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Cherrygrove_Farfetchd_Text:
	.string "FARFETCH'D: Fiufiu!$"

Cherrygrove_Ledyba::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_LEDYBA, CRY_MODE_NORMAL
	msgbox Cherrygrove_Ledyba_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Cherrygrove_Ledyba_Text:
	.string "LEDYBA: Frfrfr!$"

Cherrygrove_Spinarak::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_SPINARAK, CRY_MODE_NORMAL
	msgbox Cherrygrove_Spinarak_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Cherrygrove_Spinarak_Text:
	.string "SPINARAK: Krkrkr!$"

Cherrygrove_Heracross::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_HERACROSS, CRY_MODE_NORMAL
	msgbox Cherrygrove_Heracross_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Cherrygrove_Heracross_Text:
	.string "HERACROSS: Krkrkr!$"

Cherrygrove_Natu::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_NATU, CRY_MODE_NORMAL
	msgbox Cherrygrove_Natu_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Cherrygrove_Natu_Text:
	.string "NATU: Tututu!$"

Cherrygrove_Stantler::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_STANTLER, CRY_MODE_NORMAL
	msgbox Cherrygrove_Stantler_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Cherrygrove_Stantler_Text:
	.string "STANTLER: Hurrrgh!$"

Cherrygrove_Bellossom::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_BELLOSSOM, CRY_MODE_NORMAL
	msgbox Cherrygrove_Bellossom_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Cherrygrove_Bellossom_Text:
	.string "BELLOSSOM: Hihihi!$"

Cherrygrove_Scyther::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_SCYTHER, CRY_MODE_NORMAL
	msgbox Cherrygrove_Scyther_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Cherrygrove_Scyther_Text:
	.string "SCYTHER: Gruagh!$"

Cherrygrove_Kadabra::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_KADABRA, CRY_MODE_NORMAL
	msgbox Cherrygrove_Kadabra_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Cherrygrove_Kadabra_Text:
	.string "KADABRA: ..!$"

Cherrygrove_Ampharos::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_AMPHAROS, CRY_MODE_NORMAL
	msgbox Cherrygrove_Ampharos_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Cherrygrove_Ampharos_Text:
	.string "AMPHAROS: Meeeh!$"

Cherrygrove_Mareep::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_MAREEP, CRY_MODE_NORMAL
	msgbox Cherrygrove_Mareep_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Cherrygrove_Mareep_Text:
	.string "MAREEP: Meeeh!$"

Cherrygrove_Flaaffy::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_FLAAFFY, CRY_MODE_NORMAL
	msgbox Cherrygrove_Flaaffy_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Cherrygrove_Flaaffy_Text:
	.string "FLAAFFY: Meeeh!$"

Cherrygrove_Phanpy::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_PHANPY, CRY_MODE_NORMAL
	msgbox Cherrygrove_Phanpy_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Cherrygrove_Phanpy_Text:
	.string "PHANPY: Proot!$"

Cherrygrove_Donphan::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_DONPHAN, CRY_MODE_NORMAL
	msgbox Cherrygrove_Donphan_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Cherrygrove_Donphan_Text:
	.string "DONPHAN: PROOOT!$"

Cherrygrove_Slowking::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_SLOWKING, CRY_MODE_NORMAL
	msgbox Cherrygrove_Slowking_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Cherrygrove_Slowking_Text:
	.string "SLOWKING: ..!$"

Cherrygrove_Krabby::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_KRABBY, CRY_MODE_NORMAL
	msgbox Cherrygrove_Krabby_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Cherrygrove_Krabby_Text:
	.string "KRABBY: Krab!$"

Cherrygrove_Doduo::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_DODUO, CRY_MODE_NORMAL
	msgbox Cherrygrove_Doduo_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Cherrygrove_Doduo_Text:
	.string "DODUO: Dododo!$"

Cherrygrove_Shuckle::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_SHUCKLE, CRY_MODE_NORMAL
	msgbox Cherrygrove_Shuckle_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Cherrygrove_Shuckle_Text:
	.string "SCHUCKLE: Uoo?$"

Cherrygrove_Skarmory::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_SKARMORY, CRY_MODE_NORMAL
	msgbox Cherrygrove_Skarmory_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Cherrygrove_Skarmory_Text:
	.string "SKARMORY: Kraaak!$"

Cherrygrove_Totodile::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_TOTODILE, CRY_MODE_NORMAL
	msgbox Cherrygrove_Totodile_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Cherrygrove_Totodile_Text:
	.string "TOTODILE: Tototo!$"

Cherrygrove_Charizard::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_CHARIZARD, CRY_MODE_NORMAL
	msgbox Cherrygrove_Charizard_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Cherrygrove_Charizard_Text:
	.string "CHARIZARD: GRAORGH!$"

Cherrygrove_Salamence::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_SALAMENCE, CRY_MODE_NORMAL
	msgbox Cherrygrove_Salamence_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Cherrygrove_Salamence_Text:
	.string "SALAMENCE: ROARGH!$"