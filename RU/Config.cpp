#include "BIS_AddonInfo.hpp"
#include "CfgSounds.hpp"
#include "Nationality_RU_Config.hpp"

class CfgPatches {
	class UVO_RHS_RU {
		name = "Озвучка RHS-CUP юнитов";
		version = "3";
		author = "Domy L'Ours Brun/edit. Pirat";
		url = "https://steamcommunity.com/sharedfiles/filedetails/?id=2781300946";
		units[] = {};
		weapons[] = {};
		requiredVersion = 3.8;
		requiredAddons[] = {
			"cba_common",
			"cba_events",
			"cba_keybinding",
			"cba_settings",
			"cba_statemachine",
			"cba_xeh",
			"UAS",
			"UVO"
		};
	};
};

class Extended_PreInit_EventHandlers {
    class UVO_CUSTOM_RU {
        init = "[configFile >> 'UVO_RU_NationalityConfig'] call UVO_fnc_createNationalityFromConfig";
    };
};