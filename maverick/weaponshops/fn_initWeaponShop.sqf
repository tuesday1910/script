/*--------------------------------------------------------------------------
    Author:     Maverick Applications
    Website:    https://maverick-applications.com

    You're not allowed to use this file without permission from the author!
---------------------------------------------------------------------------*/

private _shop = param [3, "", [""]];

if (_exit) exitWith {};

_exit = [_conditions] call life_fnc_levelCheck;
if !(_exit) exitWith {hint localize "STR_Shop_Veh_NotAllowed";};

try {
	if (_shop isEqualTo "") throw (getText(missionConfigFile >> "maverick_weaponshop_cfg" >> "localization" >> "msgParamEmpty"));
	if !(isNull objectParent player) throw (getText(missionConfigFile >> "maverick_weaponshop_cfg" >> "localization" >> "msgInVehicle"));

    private _cfg = missionConfigFile >> "maverick_weaponshop_cfg" >> "shops" >> _shop;

    if !(isClass _cfg) throw (getText(missionConfigFile >> "maverick_weaponshop_cfg" >> "localization" >> "msgShopExists"));
    if !(call compile (getText(_cfg >> "condition"))) throw (getText(missionConfigFile >> "maverick_weaponshop_cfg" >> "localization" >> "msgCondition"));

    if (getNumber (_cfg >> "simple") isEqualTo 0) then {
        MAV_guiWeaponShop_Type = _shop;
        MAV_guiWeaponShop_Cfg = _cfg;

        createDialog "MAV_guiWeaponShop";
    } else {
        MAV_guiWeaponShopSimple_Type = _shop;
        MAV_guiWeaponShopSimple_Cfg = _cfg;

        createDialog "MAV_guiWeaponShopSimple";
    };
} catch {
	hint _exception;
};