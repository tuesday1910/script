/*
*    Format:
*        3: STRING (Conditions) - Must return boolean :
*            String can contain any amount of conditions, aslong as the entire
*            string returns a boolean. This allows you to check any levels, licenses etc,
*            in any combination. For example:
*                "call life_coplevel && license_civ_someLicense"
*            This will also let you call any other function.
*
*/
class CfgSpawnPoints {

    class Altis {
        class Civilian {
            class Kavala {
                displayName = "Kavala";
                spawnMarker = "civ_spawn_1";
                icon = "icons\kavala.paa";
                conditions = "";
            };

            class Athira {
                displayName = "Athira";
                spawnMarker = "civ_spawn_3";
                icon = "icons\athira.paa";
                conditions = "";
            };

            class Pyrgos {
                displayName = "Pyrgos";
                spawnMarker = "civ_spawn_2";
                icon = "icons\pyrgos.paa";
                conditions = "";
            };

            class Sofia {
                displayName = "Sofia";
                spawnMarker = "civ_spawn_4";
                icon = "icons\sofia.paa";
                conditions = "";
            };

            class RebelN {
                displayName = "Northern Rebel Base";
                spawnMarker = "Rebelop";
                icon = "icons\rebcity.paa";
                conditions = "call life_donorlevel >= 1";
            };

            class RebelS {
                displayName = "Southern Rebel Base";
                spawnMarker = "Rebelop_1";
                icon = "icons\rebcity.paa";
                conditions = "call life_donorlevel >= 1";
            };

            class RebelE {
                displayName = "Eastern Rebel Base";
                spawnMarker = "Rebelop_2";
                icon = "icons\rebcity.paa";
                conditions = "license_civ_rebel";
            };
			
			class taxi {
                displayName = "TAXI STATION";
                spawnMarker = "taxi_spawn";
                icon = "icons\taxi.paa";
                conditions = "license_civ_taxi";
            };
        };

        class Cop {
            class Kavala {
                displayName = "Kavala HQ";
                spawnMarker = "cop_spawn_1";
                icon = "icons\p22.paa";
                conditions = "";
            };

            class Athira {
                displayName = "Athira HQ";
                spawnMarker = "cop_spawn_3";
                icon = "icons\p22.paa";
                conditions = "";
            };

            class Pyrgos {
                displayName = "Pyrgos HQ";
                spawnMarker = "cop_spawn_2";
                icon = "icons\p22.paa";
                conditions = "";
            };

            class Air {
                displayName = $STR_MAR_Police_Air_HQ;
                spawnMarker = "cop_spawn_Air";
                icon = "images\air.paa";
                conditions = "call life_coplevel >= 5 ";
            };

            class HW {
                displayName = "HW Patrol";
                spawnMarker = "cop_spawn_5";
                icon = "icons\p22.paa";
                conditions = "call life_coplevel >= 3";
            };
			
			class Jail {
                displayName = "Jail";
                spawnMarker = "jail";
                icon = "icons\jail.paa";
                conditions = "call life_coplevel >= 2";
            };
        };

        class Medic {
            class Kavala {
                displayName = "Kavala Hospital";
                spawnMarker = "medic_spawn_1";
                icon = "icons\kavala.paa";
                conditions = "";
            };

            class Athira {
                displayName = "Athira Regional";
                spawnMarker = "medic_spawn_2";
                icon = "icons\Athira.paa";
                conditions = "";
            };

            class Pyrgos {
                displayName = "Pyrgos Hospital";
                spawnMarker = "medic_spawn_3";
                icon = "icons\Pyrgos.paa";
                conditions = "";
            };
        };
		
		class Adac {
			class Adacspawn {
				displayName = "Mercenary Spawn";
                spawnMarker = "Mercenary_spawn";
                icon = "icons\merc.paa";
                conditions = "";
			};
			
			class Kavala {
                displayName = "Kavala";
                spawnMarker = "civ_spawn_1";
                icon = "icons\kavala.paa";
                conditions = "";
            };

            class Athira {
                displayName = "Athira";
                spawnMarker = "civ_spawn_3";
                icon = "icons\athira.paa";
                conditions = "";
            };

            class Pyrgos {
                displayName = "Pyrgos";
                spawnMarker = "civ_spawn_2";
                icon = "icons\pyrgos.paa";
                conditions = "";
            };

            class Sofia {
                displayName = "Sofia";
                spawnMarker = "civ_spawn_4";
                icon = "icons\sofia.paa";
                conditions = "";
            };

            class RebelN {
                displayName = "Northern Rebel Base";
                spawnMarker = "Rebelop";
                icon = "icons\rebcity.paa";
                conditions = "call life_donorlevel >= 1";
            };

            class RebelS {
                displayName = "Southern Rebel Base";
                spawnMarker = "Rebelop_1";
                icon = "icons\rebcity.paa";
                conditions = "call life_donorlevel >= 1";
            };

            class RebelE {
                displayName = "Eastern Rebel Base";
                spawnMarker = "Rebelop_2";
                icon = "icons\rebcity.paa";
                conditions = "call life_donorlevel >= 1";
            };
		};
    };

    class Tanoa {

        class Civilian {
            class Georgetown {
                displayName = "Georgetown";
                spawnMarker = "civ_spawn_1";
                icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
                conditions = "!license_civ_rebel";
            };

            class Balavu {
                displayName = "Balavu";
                spawnMarker = "civ_spawn_3";
                icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
                conditions = "";
            };

            class Tuvanaka {
                displayName = "Tuvanaka";
                spawnMarker = "civ_spawn_2";
                icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
                conditions = "";
            };

            class Lijnhaven {
                displayName = "Lijnhaven";
                spawnMarker = "civ_spawn_4";
                icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
                conditions = "";
            };

            class RebelNW {
                displayName = "North Western Rebel Base";
                spawnMarker = "Rebelop";
                icon = "\a3\ui_f\data\map\MapControl\bunker_ca.paa";
                conditions = "license_civ_rebel";
            };

            class RebelS {
                displayName = "Southern Rebel Base";
                spawnMarker = "Rebelop_1";
                icon = "\a3\ui_f\data\map\MapControl\bunker_ca.paa";
                conditions = "license_civ_rebel";
            };

            class RebelNE {
                displayName = "North Eastern Rebel Base";
                spawnMarker = "Rebelop_2";
                icon = "\a3\ui_f\data\map\MapControl\bunker_ca.paa";
                conditions = "license_civ_rebel";
            };
        };

        class Cop {
            class NAirport {
                displayName = "North Airport HQ";
                spawnMarker = "cop_spawn_1";
                icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
                conditions = "";
            };

            class SWAirport {
                displayName = "South Western Airport HQ";
                spawnMarker = "cop_spawn_3";
                icon = "\a3\ui_f\data\map\MapControl\fuelstation_ca.paa";
                conditions = "";
            };

            class GeorgetownHQ {
                displayName = "Georgetown HQ";
                spawnMarker = "cop_spawn_2";
                icon = "\a3\ui_f\data\map\GroupIcons\badge_rotate_0_gs.paa";
                conditions = "";
            };

            class Air {
                displayName = "Air HQ";
                spawnMarker = "cop_spawn_4";
                icon = "\a3\ui_f\data\map\Markers\NATO\b_air.paa";
                conditions = "call life_coplevel >= 2 && {license_cop_cAir}";
            };

            class HW {
                displayName = "HW Patrol";
                spawnMarker = "cop_spawn_5";
                icon = "\a3\ui_f\data\map\GroupIcons\badge_rotate_0_gs.paa";
                conditions = "call life_coplevel >= 3";
            };
        };

        class Medic {

            class SEHospital {
                displayName = "South East Hospital";
                spawnMarker = "medic_spawn_1";
                icon = "\a3\ui_f\data\map\MapControl\hospital_ca.paa";
                conditions = "";
            };

            class TanoukaHospital {
                displayName = "Tanouka Regional";
                spawnMarker = "medic_spawn_2";
                icon = "\a3\ui_f\data\map\MapControl\hospital_ca.paa";
                conditions = "";
            };

            class NEAirportHospital {
                displayName = "North East Airport Hospital";
                spawnMarker = "medic_spawn_3";
                icon = "\a3\ui_f\data\map\MapControl\hospital_ca.paa";
                conditions = "";
            };

        };

    };

};
