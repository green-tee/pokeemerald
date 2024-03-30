SaffronIndoors_MapScripts::
	.byte 0

	Saffron_Ponyta::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_PONYTA, CRY_MODE_NORMAL
	msgbox Saffron_Ponyta_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Saffron_Ponyta_Text:
	.string "PONYTA: hiiiiui!$"

	Saffron_MrMime::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_MR_MIME, CRY_MODE_NORMAL
	msgbox Saffron_MrMime_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Saffron_MrMime_Text:
	.string "MR.MIME: ...Mime?$"