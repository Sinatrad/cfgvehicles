Class AH64D;
class AH64D_DZ: AH64D {
accuracy = 1000;
armor = 60;
backrotorspeed = 3;
cost = "1e+007";
crew = ""; //Edited
damageresistance = 0.00593;
dammagefull[] = {"\CA\Air_E\AH64\data\AH64D_mfd_normal_co.paa", "\CA\Air_E\AH64\data\AH64D_mfd_malfc_co.paa"};
dammagehalf[] = {"\CA\Air_E\AH64\data\AH64D_mfd_normal_co.paa", "\CA\Air_E\AH64\data\AH64D_mfd_malfc_co.paa"};
destrtype = "DestructWreck";
displayname = "AH-64D_DZ";
driveraction = "AH64_Pilot";
icon = "\ca\AH64\data\UI\Icon_ah64d_CA.paa";
laserscanner = 1;
magazines[] = {"60Rnd_CMFlareMagazine"};
mainrotorspeed = -1;
mapsize = 15.5;
maxspeed = 293;
memorypointlmissile = "Missile_1";
memorypointlrocket = "Rocket_1";
memorypointrmissile = "Missile_2";
memorypointrrocket = "Rocket_2";
model = "\ca\air_E\AH64\AH64D";
picture = "\ca\AH64\data\UI\Picture_ah64d_CA.paa";
scope = 2;
side = 2; //Added
selectionfireanim = "zasleh";
sounddammage[] = {"ca\Sounds\Air\Noises\alarm_loop1", 0.562341, 1};
soundengineoffext[] = {"Ca\Sounds_E\Air_E\AH64\AH64_stop_ext", 0.562341, 1, 800};
soundengineoffint[] = {"Ca\Sounds_E\Air_E\AH64\AH64_stop_int", 0.1, 1};
soundengineonext[] = {"Ca\Sounds_E\Air_E\AH64\AH64_start_ext", 0.562341, 1, 800};
soundengineonint[] = {"Ca\Sounds_E\Air_E\AH64\AH64_start_int", 0.1, 1};
soundgetin[] = {"Ca\Sounds_E\Air_E\AH64\close", 0.316228, 1};
soundgetout[] = {"Ca\Sounds_E\Air_E\AH64\open", 0.316228, 1, 40};
threat[] = {0.3, 1, 0.8};
typicalcargo[] = {}; //Edited
vehicleclass = "Air";
weapons[] = {"CMFlareLauncher"};
commanderCanSee = 2+16+32; //Added
gunnerCanSee = 2+16+32; //Added
driverCanSee = 2+16+32; //Added
transportMaxWeapons = 3; //Added
transportMaxMagazines = 20; //Added
transportmaxbackpacks = 2; //Added
class Sounds {
class Engine {
frequency = "rotorSpeed";
sound[] = {"Ca\Sounds_E\Air_E\AH64\AH64_engine_1", 3.16228, 1, 1000};
volume = "camPos*((rotorSpeed-0.72)*4)";
};
class RotorLowOut {
cone[] = {1.8, 3.14, 2, 0.9};
frequency = "rotorSpeed";
sound[] = {"Ca\Sounds_E\Air_E\AH64\AH64_rotor_ext2", 3.16228, 1, 1200};
volume = "camPos*(0 max (rotorSpeed-0.1))";
};
class RotorHighOut {
cone[] = {1.8, 3.14, 2, 0.9};
frequency = "rotorSpeed";
sound[] = {"Ca\Sounds_E\Air_E\AH64\AH64_rotor_high_ext2", 1.77828, 1, 1300};
volume = "camPos*10*(0 max (rotorThrust-0.95))";
};
class EngineIn {
frequency = "rotorSpeed";
sound[] = {"Ca\Sounds_E\Air_E\AH64\AH64_engine_int", 1.77828, 1};
volume = "(1-camPos)*((rotorSpeed-0.75)*4)";
};
class RotorLowIn {
frequency = "rotorSpeed";
sound[] = {"Ca\Sounds_E\Air_E\AH64\AH64_rotor_int2", 1.77828, 1};
volume = "2*(1-camPos)*((rotorSpeed factor[0.3, 1.1]) min (rotorSpeed factor[1.1, 0.3]))";
};
class RotorHighIn {
frequency = "rotorSpeed";
sound[] = {"Ca\Sounds_E\Air_E\AH64\AH64_rotor_high_int2", 1.77828, 1};
volume = "(1-camPos)*3*(rotorThrust-0.9)";
};
};
class HitPoints: HitPoints {
class HitGlass1: HitGlass1 {
armor = 0.5;
};
class HitGlass2: HitGlass2 {
armor = 0.5;
};
class HitGlass3: HitGlass3 {
armor = 0.5;
};
class HitGlass4: HitGlass4 {
armor = 0.5;
};
class HitGlass5: HitGlass5 {
armor = 0.5;
};
};
class Damage {
mat[] = {"ca\air_e\ah64\Data\AH64D_body.rvmat", "ca\air_e\ah64\Data\AH64D_body_damage.rvmat", "ca\air_e\ah64\Data\AH64D_body_destruct.rvmat", "ca\air_e\ah64\Data\AH64D_details.rvmat", "ca\air_e\ah64\Data\AH64D_details_damage.rvmat", "ca\air_e\ah64\Data\AH64D_details_destruct.rvmat", "ca\air_e\ah64\Data\AH64D_inter.rvmat", "ca\air_e\ah64\Data\AH64D_inter_damage.rvmat", "ca\air_e\ah64\Data\AH64D_inter_destruct.rvmat", "ca\air_e\ah64\Data\AH64D_glass.rvmat", "ca\air_e\ah64\Data\AH64D_glass_damage.rvmat", "ca\air_e\ah64\Data\AH64D_glass_damage.rvmat", "ca\air_e\ah64\Data\AH64D_glass_in.rvmat", "ca\air_e\ah64\Data\AH64D_glass_in_damage.rvmat", "ca\air_e\ah64\Data\AH64D_glass_in_damage.rvmat", "Ca\Ca_E\data\default.rvmat", "Ca\Ca_E\data\default.rvmat", "Ca\Ca_E\data\default_destruct.rvmat"};
tex[] = {};
};
class Turrets: Turrets {
class MainTurret: MainTurret {
discretedistance[] = {300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200};
discretedistanceinitindex = 2;
enablemanualfire = 1;
gunneraction = "AH64_Gunner_EP1";
gunnergetinaction = "GetInHigh";
gunnergetoutaction = "GetOutHigh";
gunnerinaction = "AH64_Gunner_EP1";
gunneropticsmodel = "\ca\air_e\gunnerOptics_ah64";
initelev = 0;
initturn = 0;
magazines[] = {"1200Rnd_30x113mm_M789_HEDP"};
maxelev = 30;
maxturn = 120;
memorypointgun = "machinegun";
memorypointsgetingunner = "pos_gunner";
memorypointsgetingunnerdir = "pos_gunner_dir";
minelev = -60;
minturn = -120;
turretinfotype = "RscUnitInfo_AH64D_gunner";
weapons[] = {"M230"};
class ViewOptics {
initanglex = 0;
initangley = 0;
initfov = 0.155;
maxanglex = 30;
maxangley = 100;
maxfov = 0.155;
minanglex = -30;
minangley = -100;
minfov = 0.047;
};
class OpticsIn {
class Wide {
gunneropticsmodel = "\ca\air_e\gunnerOptics_ah64";
initanglex = 0;
initangley = 0;
initfov = 0.466;
maxanglex = 30;
maxangley = 100;
maxfov = 0.466;
minanglex = -30;
minangley = -100;
minfov = 0.466;
opticsdisplayname = "W";
thermalmode[] = {0, 1};
visionmode[] = {"Normal", "NVG", "Ti"};
};
class Medium: Wide {
gunneropticsmodel = "\ca\air_e\gunnerOptics_ah64_2";
initfov = 0.093;
maxfov = 0.093;
minfov = 0.093;
opticsdisplayname = "M";
};
class Narrow: Wide {
gunneropticsmodel = "\ca\air_e\gunnerOptics_ah64_3";
initfov = 0.029;
maxfov = 0.029;
minfov = 0.029;
opticsdisplayname = "N";
};
};
class OpticsOut {
class Monocular {
gunneropticseffect[] = {};
gunneropticsmodel = "";
initanglex = 0;
initangley = 0;
initfov = 1.1;
maxanglex = 30;
maxangley = 100;
maxfov = 1.1;
minanglex = -30;
minangley = -100;
minfov = 0.133;
visionmode[] = {"Normal", "NVG"};
};
};
};
};
};

class AH64D_DZE: AH64D_DZ {
	class Turrets: Turrets {
		class MainTurret: MainTurret {
			magazines[] = {}; //Edited
		};
	};
};