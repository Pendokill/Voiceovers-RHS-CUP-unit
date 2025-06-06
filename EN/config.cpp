#include "CfgSounds.hpp"
#include "UVO_EN_NationalityConfig.hpp"

class CfgPatches {
	class UVO_RHS_EN {
		name = "Озвучка RHS-CUP юнитов";
		version = "3";
		author = "Pirat";
		url = "https://steamcommunity.com/sharedfiles/filedetails/?id=2781300946";
		units[] = {};
		weapons[] = {};
		requiredVersion = 3.7;
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
	class UVO_CUSTOM_EN {
		init = "[configFile >> 'UVO_EN_NationalityConfig'] call UVO_fnc_createNationalityFromConfig";
	};
};

class Extended_PostInit_EventHandlers
{
	class EN
	{
		init = "call compileScript ['\EN\throwables.sqf']";
	};
};