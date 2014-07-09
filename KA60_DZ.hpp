class Ka60_PMC;
class Ka60_PMC_DZ: Ka60_PMC {
crew = "";
displayname = "Ka60_PMC_DZ";
faction = "PMC_BAF";
scope = 2;
side = 2;
transportsoldier = 9;
weapons[] = {}; //Added
magazines[] = {}; //Added
commanderCanSee = 2+16+32; //Added
gunnerCanSee = 2+16+32; //Added
driverCanSee = 2+16+32; //Added
transportMaxWeapons = 5; //Added
transportMaxMagazines = 30; //Added
transportmaxbackpacks = 5; //Added
typicalcargo[] = {}; //Added
class AnimationSources: AnimationSources {
class HideWeapon: HideWeapon {
initphase = 1;
};
class MainTurret {
animperiod = "1e-007";
initphase = 0;
source = "user";
};
class MainGun {
animperiod = "1e-007";
initphase = 0;
source = "user";
};
class ReloadAnim {
animperiod = "1e-005";
initphase = 0;
source = "user";
};
class ReloadMagazine {
animperiod = "1e-005";
initphase = 0;
source = "user";
};
class Revolving {
animperiod = "1e-005";
initphase = 0;
source = "user";
};
};
class Turrets {};
};