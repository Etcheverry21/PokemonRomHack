.set LOCALID_NURSE, 1

Littleroot_PokemonCenter_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Littleroot_PokemonCenter_1F_OnTransition
	.byte 0

Littleroot_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_LITTLEROOT_TOWN
	end

Littleroot_PokemonCenter_1F_EventScript_Nurse::
	setvar VAR_0x800B, LOCALID_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end

Littleroot_PokemonCenter_1F_EventScript_Gentleman::
	msgbox Littleroot_PokemonCenter_1F_Text_TrainersCanUsePC, MSGBOX_NPC
	end

Littleroot_PokemonCenter_1F_Text_TrainersCanUsePC:
	.string "That PC in the corner there is\n"
	.string "for any POKéMON TRAINER to use.\p"
	.string "Naturally, that means you're welcome\n"
	.string "to use it, too.$"

