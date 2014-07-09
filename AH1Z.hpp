class AH1Z;
class AH1Z_DZ: AH1Z {
accuracy = 1000;
armor = 60;
cost = "1e+007";
crew = ""; //Edited
damageresistance = 0.00593;
dammagefull[] = {"\Ca\air\data\ah1z_monitor_glass_ca.paa", "\Ca\air\data\ah1z_monitor_glass_destr_co.paa"};
dammagehalf[] = {"\Ca\air\data\ah1z_monitor_glass_ca.paa", "\Ca\air\data\ah1z_monitor_glass_destr_co.paa"};
destrtype = "DestructWreck";
displayname = "AH-1Z";
driveraction = "AH1Z_Pilot";
drivercompartments = "Compartment1";
faction = "USMC";
getinaction = "GetInHigh";
getoutaction = "GetOutHigh";
icon = "\ca\air\data\map_ico\icomap_ah1z_CA.paa";
incommingmissliedetectionsystem = 16;
laserscanner = 1;
lockdetectionsystem = 8;
magazines[] = {"120Rnd_CMFlareMagazine"};
mapsize = 15.5;
maxspeed = 270;
memorypointlmissile = "Missile_1";
memorypointlrocket = "Rocket_1";
memorypointrmissile = "Missile_2";
memorypointrrocket = "Rocket_2";
memorypointsgetindriver = "pos_driver";
memorypointsgetindriverdir = "pos_driver_dir";
model = "\ca\air\ah1z";
picture = "\ca\air\data\ico\ah1z_CA.paa";
radartype = 4;
scope = 2;
selectionfireanim = "muzzleflash";
selectionhrotormove = "mainRotorBlurred";
selectionhrotorstill = "mainRotorStatic";
selectionvrotormove = "tailRotorBlurred";
selectionvrotorstill = "tailRotorStatic";
side = 2;  //Edited
sounddammage[] = {"ca\sounds\air\noises\alarm_loop1", 0.001, 1};
soundengineoffext[] = {"ca\sounds\Air\UH1Y\ext\ext-motor-stop", 1.77828, 1, 700};
soundengineoffint[] = {"ca\sounds\Air\UH1Y\int\int-stop-final", 0.0316228, 1};
soundengineonext[] = {"ca\sounds\Air\UH1Y\ext\ext-motor-start", 1.77828, 1, 700};
soundengineonint[] = {"ca\sounds\Air\UH1Y\int\int-start-final", 0.0316228, 1};
soundgetin[] = {"ca\sounds\air\noises\heli_door_01", 0.316228, 1};
soundgetout[] = {"ca\sounds\air\noises\heli_door_01", 0.316228, 1, 50};
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
class HitPoints: HitPoints {
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
class Sounds {
class Engine {
frequency = "rotorSpeed";
sound[] = {"ca\sounds\air\ah1\ext\ext-ah1z-engine-01", 3.16228, 1, 800};
volume = "camPos*((rotorSpeed-0.72)*4)";
};
class RotorLowOut {
cone[] = {1.8, 3.14, 2, 0.9};
frequency = "rotorSpeed";
sound[] = {"ca\sounds\air\uh1y\int\int-rotor-single5b", 3.16228, 1, 1500};
volume = "camPos*(0 max (rotorSpeed-0.1))";
};
class RotorHighOut {
cone[] = {1.8, 3.14, 2, 0.9};
frequency = "rotorSpeed";
sound[] = {"ca\sounds\air\uh1y\int\int-rotor-single5a", 3.16228, 1, 1800};
volume = "camPos*10*(0 max (rotorThrust-0.95))";
};
class EngineIn {
frequency = "rotorSpeed";
sound[] = {"ca\sounds\air\uh1y\int\int-fly-mode7", 1.77828, 1};
volume = "(1-camPos)*((rotorSpeed-0.75)*4)";
};
class RotorLowIn {
frequency = "rotorSpeed";
sound[] = {"ca\sounds\air\uh1y\int\int-rotor-single5b", 1.77828, 1};
volume = "2*(1-camPos)*((rotorSpeed factor[0.3, 1.1]) min (rotorSpeed factor[1.1, 0.3]))";
};
class RotorHighIn {
frequency = "rotorSpeed";
sound[] = {"ca\sounds\air\uh1y\int\int-rotor-single5a", 1.77828, 1};
volume = "(1-camPos)*3*(rotorThrust-0.9)";
};
};
class Turrets: Turrets {
class MainTurret: MainTurret {
discretedistance[] = {300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200};
discretedistanceinitindex = 2;
enablemanualfire = 1;
gunneraction = "AH1Z_Gunner";
gunnercompartments = "Compartment2";
gunnergetinaction = "GetInHigh";
gunnergetoutaction = "GetOutHigh";
gunnerinaction = "AH1Z_Gunner";
gunneropticseffect[] = {"TankCommanderOptics1", "BWTV"};
gunneropticsmodel = "\ca\air\optika_AH1Z";
initelev = 0;
initturn = 0;
magazines[] = {"750Rnd_M197_AH1"}; //Edited
maxelev = 10;
maxturn = 70;
memorypointgun = "machinegun";
memorypointsgetingunner = "pos_gunner";
memorypointsgetingunnerdir = "pos_gunner_dir";
minelev = -60;
minturn = -70;
turretinfotype = "RscUnitInfo_AH64D_gunner";
weapons[] = {"M197"}; //Edited
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
class AnimationSources: AnimationSources {
class 20mmBarrels {
source = "revolving";
weapon = "M197";
};
class mainRotor_folded {
animperiod = 0.001;
initphase = 1;
source = "user";
};
class mainRotor_unfolded: mainRotor_folded {
initphase = 0;
};
class rotorShaft_unfolded: mainRotor_unfolded {
};
};
class Library {
libtextdesc = "The AH-1Z Super Cobra is the Marine CorpsÃ¢ÂÂ primary attack helicopter, providing close air support, reconnaissance, point target attacks and anti armor capabilities.<br />It is armed with 8 air-to-ground Hellfire missile platforms, a dual Hydra rocket system, dual AIM-9 air-to-air guided missile platforms and a 20mm gatling gun.";
};
class Damage {
mat[] = {"ca\air\data\ah1z_body.rvmat", "ca\air\data\ah1z_body_damage.rvmat", "ca\air\data\ah1z_body_destruct.rvmat", "ca\air\data\ah1z_glass.rvmat", "ca\air\data\ah1z_glass_damage.rvmat", "ca\air\data\ah1z_glass_damage.rvmat", "ca\air\data\ah1z_glass_in.rvmat", "ca\air\data\ah1z_glass_in_damage.rvmat", "ca\air\data\ah1z_glass_in_damage.rvmat", "ca\air\data\ah1z_cockpit.rvmat", "ca\air\data\ah1z_cockpit.rvmat", "ca\air\data\ah1z_cockpit_destruct.rvmat", "ca\air\data\ah1z_engines.rvmat", "ca\air\data\ah1z_engines_damage.rvmat", "ca\air\data\ah1z_engines_destruct.rvmat", "Ca\air\data\ah1z_monitors.rvmat", "Ca\air\data\ah1z_monitors.rvmat", "Ca\air\data\ah1z_monitors_destruct.rvmat"};
tex[] = {};
};
};

class AH1Z_DZE: AH1Z_DZ {
	class Turrets: Turrets {
		class MainTurret: MainTurret {
			magazines[] = {}; //Edited
		};
	};
};