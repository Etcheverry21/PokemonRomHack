@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/Littleroot_PokemonCenter_1F/map.json
@

Littleroot_PokemonCenter_1F_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_NURSE, 0, 7, 2, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, TRAINER_TYPE_NONE, 0, OldaleTown_PokemonCenter_1F_EventScript_Nurse, 0
	object_event 2, OBJ_EVENT_GFX_GENTLEMAN, 0, 4, 4, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, TRAINER_TYPE_NONE, 0, OldaleTown_PokemonCenter_1F_EventScript_Gentleman, 0

Littleroot_PokemonCenter_1F_MapWarps:
	warp_def 1, 6, 0, 0, MAP_LITTLEROOT_POKEMON_CENTER_2F
	warp_def 6, 8, 0, 2, MAP_LITTLEROOT_TOWN
	warp_def 7, 8, 0, 2, MAP_LITTLEROOT_POKEMON_CENTER_1F

Littleroot_PokemonCenter_1F_MapEvents::
	map_events Littleroot_PokemonCenter_1F_ObjectEvents, Littleroot_PokemonCenter_1F_MapWarps, 0x0, 0x0

