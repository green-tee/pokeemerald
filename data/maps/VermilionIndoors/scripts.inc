VermilionIndoors_MapScripts::
	.byte 0

Vermilion_Nidoranm::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_NIDORAN_M, CRY_MODE_NORMAL
	msgbox Vermilion_Nidoranm_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

	Vermilion_Nidoranm_Text:
	.string "NIDORAN: kikiki!$"

Vermilion_Nidoranf::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_NIDORAN_F, CRY_MODE_NORMAL
	msgbox Vermilion_Nidoranf_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

	Vermilion_Nidoranf_Text:
	.string "NIDORAN: kikiki!$"

Vermilion_Poliwag::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_POLIWAG, CRY_MODE_NORMAL
	msgbox Vermilion_Poliwag_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Vermilion_Poliwag_Text:
	.string "POLIWAG: Poli!$"

Vermilion_Rattata::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_RATTATA, CRY_MODE_NORMAL
	msgbox Vermilion_Rattata_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Vermilion_Rattata_Text:
	.string "RATTATA: Tatata!$"