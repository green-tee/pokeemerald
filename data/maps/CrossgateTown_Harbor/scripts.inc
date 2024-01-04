CrossgateTown_Harbor_MapScripts::
	.byte 0
MultiRegionHarbor::
	lock
	faceplayer
	msgbox MultiRegionHarbor_Text_0
	message MultiRegionHarbor_Text_1
	multichoice 25, 4, CROSSGATE_MULTI_REGION, 0
	compare VAR_RESULT, 0
	goto_if_eq MultiRegionHarbor_2
	compare VAR_RESULT, 1
	goto_if_eq MultiRegionHarbor_3
	compare VAR_RESULT, 2
	goto_if_eq MultiRegionHarbor_4
MultiRegionHarbor_1:
	end

MultiRegionHarbor_2:
	warp MAP_VERMILION_CITY_HARBOR, 8, 5,
	waitstate
	release
	end
MultiRegionHarbor_3:
	warp MAP_OLIVINE_CITY_HARBOR, 8, 5,
	waitstate
	release
	end
MultiRegionHarbor_4:
	multichoice 25, 1, CROSSGATE_MULTI_REGION_SEVII, 0
	goto MultiRegionHarbor_1


MultiRegionHarbor_Text_0:
	.string "Ahoi!$"

MultiRegionHarbor_Text_1:
	.string "Where are we sailing to?$"
