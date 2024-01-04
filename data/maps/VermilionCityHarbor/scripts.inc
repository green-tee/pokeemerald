VermilionCityHarbor_MapScripts::
	.byte 0
	MultiRegionHarborK::
	lock
	faceplayer
	msgbox MultiRegionHarborK_Text_0
	message MultiRegionHarborK_Text_1
	multichoice 25, 4, VERMILION_MULTI_REGION, 0
	compare VAR_RESULT, 0
	goto_if_eq MultiRegionHarborK_2
	compare VAR_RESULT, 1
	goto_if_eq MultiRegionHarborK_3
	compare VAR_RESULT, 2
	goto_if_eq MultiRegionHarborK_4
MultiRegionHarborK_1:
	goto MultiRegionHarborK_1

MultiRegionHarborK_2:
	warp MAP_CROSSGATE_TOWN_HARBOR, 8, 5,
	waitstate
	release
	end
MultiRegionHarborK_3:
	warp MAP_OLIVINE_CITY_HARBOR, 8, 5,
	waitstate
	release
	end
MultiRegionHarborK_4:
	multichoice 25, 1, CROSSGATE_MULTI_REGION_SEVII, 0
	goto MultiRegionHarborK_1


MultiRegionHarborK_Text_0:
	.string "Ahoi!$"

MultiRegionHarborK_Text_1:
	.string "Where are we sailing to?$"
