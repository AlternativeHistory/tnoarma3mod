//////////////////////////////////////////////////////////////////////////////////
// Config Automatically Generated by ALiVE ORBAT Creator
// Generated with Arma 3 version 206.148470 on Stable branch
// Generated with ALiVE version 1.15.0.2112041
//////////////////////////////////////////////////////////////////////////////////


class CBA_Extended_EventHandlers_base;

class CfgVehicles {

    class O_Russian_National_Reclamation_Governmenthttp_alivemod_com_Russian_National_Reclamation_GovernmentArmy_Field_Officer_West_Russia_01;
    class O_Russian_National_Reclamation_Governmenthttp_alivemod_com_Russian_National_Reclamation_GovernmentArmy_Field_Officer_West_Russia_01_OCimport_01 : O_Russian_National_Reclamation_Governmenthttp_alivemod_com_Russian_National_Reclamation_GovernmentArmy_Field_Officer_West_Russia_01 { scope = 0; class EventHandlers; };
    class O_Russian_National_Reclamation_Governmenthttp_alivemod_com_Russian_National_Reclamation_GovernmentArmy_Field_Officer_West_Russia_01_OCimport_02 : O_Russian_National_Reclamation_Governmenthttp_alivemod_com_Russian_National_Reclamation_GovernmentArmy_Field_Officer_West_Russia_01_OCimport_01 { class EventHandlers; };


    class O_RUArmy_Regency_Royal_Guard_01 : O_Russian_National_Reclamation_Governmenthttp_alivemod_com_Russian_National_Reclamation_GovernmentArmy_Field_Officer_West_Russia_01_OCimport_02 {
        author = "yaydrian yay";
        scope = 2;
        scopeCurator = 2;
        displayName = "Regency Royal Guard";
        side = 0;
        faction = "O_RUArmy";

        identityTypes[] = {"Head_Euro","LanguageRUS_F","LIB_Glasses"};

        uniformClass = "CUP_U_O_CHDKZ_Kam_06";

        linkedItems[] = {"V_LIB_SOV_IShBrVestPPShMag","UK3CB_TKP_I_H_SSh68_BLK","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"V_LIB_SOV_IShBrVestPPShMag","UK3CB_TKP_I_H_SSh68_BLK","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKM_Early","LIB_TT33","Binocular"};
        respawnWeapons[] = {"CUP_arifle_AKM_Early","LIB_TT33","Binocular"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_bakelite_M","LIB_8Rnd_762x25","CUP_30Rnd_762x39_AK47_bakelite_M","LIB_8Rnd_762x25"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_bakelite_M","LIB_8Rnd_762x25","CUP_30Rnd_762x39_AK47_bakelite_M","LIB_8Rnd_762x25"};

        backpack = "CUP_B_RUS_Backpack";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKM_Early","","","",{"CUP_30Rnd_762x39_AK47_bakelite_M",30},{},""},{},{"LIB_TT33","","","",{"LIB_8Rnd_762x25",8},{},""},{"CUP_U_O_CHDKZ_Kam_06",{{"PiR_bint",1},{"NVG_Gloves_Wool_Grey",2},{"LIB_F1",2,1}}},{"V_LIB_SOV_IShBrVestPPShMag",{{"LIB_8Rnd_762x25",3,8},{"LIB_RDG",1,1},{"CUP_30Rnd_762x39_AK47_bakelite_M",6,30}}},{"CUP_B_RUS_Backpack",{{"ACE_fieldDressing",5},{"ACE_Canteen",1},{"ACE_MRE_SteakVegetables",1},{"PiR_bint",1},{"LIB_8Rnd_762x25",6,8},{"CUP_HandGrenade_RGD5",2,1},{"NORTH_molotov",1,1},{"CUP_30Rnd_TE1_Yellow_Tracer_762x39_bakelite_AK47_M",8,30},{"CUP_30Rnd_762x39_AK47_bakelite_M",4,30}}},"UK3CB_TKP_I_H_SSh68_BLK","SE_GP7_Gas_Mask",{"Binocular","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'insignia_test5'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_insignia = "insignia_test5";

    };

    class O_RUArmy_Imperial_Cult_Enforcer_01 : O_RUArmy_Regency_Royal_Guard_01 {
        author = "yaydrian yay";
        scope = 2;
        scopeCurator = 2;
        displayName = "Imperial Cult Enforcer";
        side = 0;
        faction = "O_RUArmy";

        identityTypes[] = {"Head_Euro","LanguageRUS_F","LIB_Glasses"};

        uniformClass = "CUP_U_O_CHDKZ_Kam_06";

        linkedItems[] = {"CUP_V_RUS_Smersh_New_Radio","UK3CB_TKP_I_H_SSh68_BLK","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CUP_V_RUS_Smersh_New_Radio","UK3CB_TKP_I_H_SSh68_BLK","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKM_Early","LIB_TT33","Binocular"};
        respawnWeapons[] = {"CUP_arifle_AKM_Early","LIB_TT33","Binocular"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_bakelite_M","LIB_8Rnd_762x25","CUP_30Rnd_762x39_AK47_bakelite_M","LIB_8Rnd_762x25"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_bakelite_M","LIB_8Rnd_762x25","CUP_30Rnd_762x39_AK47_bakelite_M","LIB_8Rnd_762x25"};

        backpack = "B_LIB_SOV_RA_Rucksack_Gas_Kit_Green";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKM_Early","","","",{"CUP_30Rnd_762x39_AK47_bakelite_M",30},{},""},{},{"LIB_TT33","","","",{"LIB_8Rnd_762x25",8},{},""},{"CFP_U_O_RUMVD_Gorka_Grey",{{"PiR_bint",1},{"NVG_Gloves_Wool_Grey",1},{"LIB_F1",2,1},{"CUP_30Rnd_762x39_AK47_bakelite_M",2,30}}},{"CUP_V_RUS_Smersh_New_Radio",{{"LIB_8Rnd_762x25",3,8},{"LIB_RDG",1,1},{"CUP_30Rnd_762x39_AK47_bakelite_M",1,30}}},{"B_LIB_SOV_RA_Rucksack_Gas_Kit_Green",{{"ACE_fieldDressing",5},{"ACE_Canteen",1},{"ACE_MRE_SteakVegetables",1},{"PiR_bint",1},{"LIB_8Rnd_762x25",4,8},{"CUP_HandGrenade_RGD5",2,1},{"NORTH_molotov",1,1},{"CUP_30Rnd_TE1_Yellow_Tracer_762x39_bakelite_AK47_M",4,30}}},"UK3CB_TKP_I_H_SSh68_BLK","SE_GP7_Gas_Mask",{"Binocular","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'insignia_test5'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_insignia = "insignia_test5";

    };

    class O_RUArmy_Imperial_Cult_Commissar_01 : O_RUArmy_Imperial_Cult_Enforcer_01 {
        author = "yaydrian yay";
        scope = 2;
        scopeCurator = 2;
        displayName = "Imperial Cult Commissar";
        side = 0;
        faction = "O_RUArmy";

        identityTypes[] = {"Head_Euro","LanguageRUS_F","LIB_Glasses"};

        uniformClass = "CUP_U_O_CHDKZ_Kam_06";

        linkedItems[] = {"V_LIB_SOV_RA_OfficerVest","SP_OfficerHat_Black","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"V_LIB_SOV_RA_OfficerVest","SP_OfficerHat_Black","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKM_Early","LIB_TT33","Binocular"};
        respawnWeapons[] = {"CUP_arifle_AKM_Early","LIB_TT33","Binocular"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_bakelite_M","LIB_8Rnd_762x25","CUP_30Rnd_762x39_AK47_bakelite_M","LIB_8Rnd_762x25"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_bakelite_M","LIB_8Rnd_762x25","CUP_30Rnd_762x39_AK47_bakelite_M","LIB_8Rnd_762x25"};

        backpack = "CUP_B_RUS_Backpack";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKM_Early","","","",{"CUP_30Rnd_762x39_AK47_bakelite_M",30},{},""},{},{"LIB_TT33","","","",{"LIB_8Rnd_762x25",8},{},""},{"CUP_U_O_CHDKZ_Kam_06",{{"PiR_bint",1},{"NVG_Gloves_Wool_Grey",2},{"LIB_F1",2,1}}},{"V_LIB_SOV_RA_OfficerVest",{{"LIB_8Rnd_762x25",3,8},{"LIB_RDG",1,1},{"CUP_30Rnd_762x39_AK47_bakelite_M",4,30}}},{"CUP_B_RUS_Backpack",{{"ACE_fieldDressing",5},{"ACE_Canteen",1},{"ACE_MRE_SteakVegetables",1},{"LIB_8Rnd_762x25",6,8},{"NORTH_molotov",1,1},{"CUP_30Rnd_TE1_Yellow_Tracer_762x39_bakelite_AK47_M",8,30},{"CUP_30Rnd_762x39_AK47_bakelite_M",6,30},{"CUP_HandGrenade_RGD5",2,1}}},"SP_OfficerHat_Black","",{"Binocular","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'insignia_test5'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_insignia = "insignia_test5";

    };

};