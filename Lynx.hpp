/*Since the Lynx is a base class, a cut-paste of its entire attributes is used. 
** My Idea here is that the attributes will be edited, and then all non edited attributes can be
** deleted in the final build, as they can just as well be called from the origional base class.
*/

class AW159_Lynx_BAF;
class AW159_Lynx_BAF_DZ: AW159_Lynx_BAF {
accuracy = 1.5;
cargoaction[] = {"AW159_Cargo_BAF", "AW159_Cargo01_BAF", "AW159_Cargo01_BAF", "AW159_Cargo01_BAF", "AW159_Cargo01_BAF", "AW159_Cargo01_BAF", "AW159_Cargo01_BAF", "AW159_Cargo01_BAF"};
cargoiscodriver[] = {1, 0};
commanderCanSee="2+16+32"; //Added to change value inherited from "Helicopter" Superclass
cost = "1e+007";
crew = ""; //Removed Crew
crewvulnerable = 1;
damageresistance = 0.00555;
destrtype = "DestructWreck";
displayname = "Wildcat AH11_DZ"; //DZ Modification
driveraction = "AW159_Pilot_BAF";
drivercansee = "2+16+32";  // Removed Radar
enablemanualfire = 0;
expansion = 2;
faction = "BIS_BAF";
getinaction = "GetInHigh";
getoutaction = "GetOutHigh";
gunbeg = "muzzle_1";
gunend = "chamber_1";
gunnercansee = "2+16+32"; //Remove Radar
gunnerusespilotview = 0;
headaimdown = -5.2;
icon = "\Ca\air_d_baf\Data\UI\icon_lynx_ca.paa";
incommingmissliedetectionsystem = 16;
laserscanner = 1;
lockdetectionsystem = "8 + 4";
magazines[] = {"1200Rnd_20mm_M621", "120Rnd_CMFlareMagazine"}; //Removed Rockets
mainrotorspeed = 0.5;
mapsize = 20;
maxspeed = 293;
memorypointgun = "muzzle_1";
memorypointlmissile = "P strela";
memorypointrmissile = "P strela";
memorypointsgetincargo[] = {"pos codriver", "pos cargo"};
memorypointsgetincargodir[] = {"pos codriver dir", "pos cargo dir"};
memorypointsgetingunner[] = {"pos codriver", "pos cargo"};
memorypointsgetingunnerdir[] = {"pos codriver dir", "pos cargo dir"};
model = "\Ca\air_d_baf\AW159_BAF";
picture = "\Ca\air_d_baf\Data\UI\picture_lynx_ca.paa";
radartype = 4; //  See Footnote 1
scope = 2;
selectionfireanim = "zasleh";
side = 2; //Changed Side
sounddammage[] = {"Ca\sounds_baf\air\int-alarm_loop", 0.562341, 1};
soundengineoffext[] = {"Ca\sounds_baf\air\uk_stop_ext_2", 0.562341, 1, 800};
soundengineoffint[] = {"\Ca\sounds_baf\air\uk_stop_int_1", 0.1, 1};
soundengineonext[] = {"Ca\sounds_baf\air\uk_start_ext_1", 0.562341, 1, 800};
soundengineonint[] = {"Ca\sounds_baf\air\uk_start_int_1", 0.1, 1};
soundgetin[] = {"Ca\sounds_baf\air\getin", 0.316228, 1};
soundgetout[] = {"Ca\sounds_baf\air\getin", 0.316228, 1, 40};
soundincommingmissile[] = {"Ca\sounds_baf\air\int-alarm_loop", 0.000316228, 4};
soundlocked[] = {"Ca\sounds_baf\air\int-alarm_loop", 0.000316228, 2};
supplyradius = 5;
threat[] = {1, 1, 0.5};
transportmaxbackpacks = 5; //Edited
transportmaxmagazines = 50; //Edited
transportmaxweapons = 5; //Edited
transportsoldier = 8;
typicalcargo[] = {}; //Edited
vehicleclass = "Air";
weapons[] = {"M621", "CMFlareLauncher"}; // Removed Rocket Launcher
class Library {
libtextdesc = "The Wildcat AH11 is a British multi-purpose military helicopter, designed to serve in battlefield utility, search and rescue and anti-submarine warfare roles. <br />The AH11 is armed with the CRV7 rocket system and with the M621 20mm automatic cannon.";
};
class Reflectors {
class Middle {
ambient[] = {};
brightness = 0;
color[] = {};
direction = "svetlo konec";
hitpoint = "svetlo";
position = "svetlo";
selection = "svetlo";
size = 0;
};
};
class MarkerLights {
class GreenStill {
ambient[] = {0.01, 0.1, 0.01, 1};
blinking = 0;
brightness = 0.001;
color[] = {0.006, 0.12, 0.006, 1};
name = "light_nav_right";
};
class RedBlinking {
ambient[] = {0.1, 0.01, 0.01, 1};
blinking = 1;
brightness = 0.01;
color[] = {1, 0.1, 0.1, 1};
name = "light_nav_top";
};
class RedStill {
ambient[] = {0.1, 0.01, 0.01, 1};
blinking = 0;
brightness = 0.001;
color[] = {0.24, 0.006, 0.006, 1};
name = "light_nav_left";
};
class WhiteStill {
ambient[] = {0.1, 0.01, 0.01, 1};
blinking = 0;
brightness = 0.001;
color[] = {0.0388, 0.0388, 0.0388, 1};
name = "light_nav_back";
};
};
class MFD {
class AirplaneHUD {
borderbottom = 0;
borderleft = 0;
borderright = 0;
bordertop = 0;
bottomleft = "HUD LD";
color[] = {0, 1, 0, 0.1};
helmetdown[] = {0, -0.05, 0};
helmetmounteddisplay = 1;
helmetposition[] = {-0.025, 0.025, 0.1};
helmetright[] = {0.05, 0, 0};
topleft = "HUD LH";
topright = "HUD PH";
class Pos10Vector {
pos0[] = {0.5, "0.27+0.23"};
pos10[] = {0.85, 0.85};
type = "vector";
};
class Bones {
class PlaneW {
pos[] = {0.5, "0.34+0.23"};
type = "fixed";
};
class WeaponAim: Pos10Vector {
source = "weapon";
};
class GunnerAim: Pos10Vector {
pos0[] = {0, -0.0025};
pos10[] = {0.01, 0.0025};
source = "weapon";
};
class Target: Pos10Vector {
source = "target";
};
class Velocity: Pos10Vector {
pos0[] = {0.5, "0.27+0.23"};
pos10[] = {0.85, 0.85};
source = "velocity";
type = "vector";
};
class ILS_H {
pos0[] = {0.5, "0.27+0.23"};
pos3[] = {0.605, "0.27+0.23"};
type = "ils";
};
class ILS_W: ILS_H {
pos3[] = {0.5, 0.605};
};
class Level0: Pos10Vector {
angle = 0;
pos0[] = {0.5, "0.34+0.23"};
pos10[] = {0.85, 0.92};
type = "horizon";
};
class LevelP10: Level0 {
angle = 10;
};
class LevelM10: Level0 {
angle = -10;
};
class LevelP20: Level0 {
angle = 20;
};
class LevelM20: Level0 {
angle = -20;
};
class LevelP30: Level0 {
angle = 30;
};
class LevelM30: Level0 {
angle = -30;
};
class LevelP40: Level0 {
angle = 40;
};
class LevelM40: Level0 {
angle = -40;
};
class LevelP50: Level0 {
angle = 50;
};
class LevelM50: Level0 {
angle = -50;
};
};
class Draw {
alpha = 0.6;
color[] = {0, 0.5, 0.05};
condition = "on";
class PlaneW {
clipbr[] = {1, 0};
cliptl[] = {0, 1};
points[] = {{"PlaneW", {0, -0.02}, 1}, {"PlaneW", {0.014, -0.014}, 1}, {"PlaneW", {0.02, 0}, 1}, {"PlaneW", {0.014, 0.014}, 1}, {"PlaneW", {0, 0.02}, 1}, {"PlaneW", {-0.014, 0.014}, 1}, {"PlaneW", {-0.02, 0}, 1}, {"PlaneW", {-0.014, -0.014}, 1}, {"PlaneW", {0, -0.02}, 1}, {}};
type = "line";
width = 4;
};
class PlaneHeading {
clipbr[] = {1, 0};
cliptl[] = {0, 1};
points[] = {{"Velocity", {0, -0.02}, 1}, {"Velocity", {0.014, -0.014}, 1}, {"Velocity", {0.02, 0}, 1}, {"Velocity", {0.014, 0.014}, 1}, {"Velocity", {0, 0.02}, 1}, {"Velocity", {-0.014, 0.014}, 1}, {"Velocity", {-0.02, 0}, 1}, {"Velocity", {-0.014, -0.014}, 1}, {"Velocity", {0, -0.02}, 1}, {}, {"Velocity", {0.04, 0}, 1}, {"Velocity", {0.02, 0}, 1}, {}, {"Velocity", {-0.04, 0}, 1}, {"Velocity", {-0.02, 0}, 1}, {}, {"Velocity", {0, -0.04}, 1}, {"Velocity", {0, -0.02}, 1}, {}};
type = "line";
width = 4;
};
class Static {
clipbr[] = {1, 0};
cliptl[] = {0, 0.1};
points[] = {{{0.79, 0.52}, 1}, {{0.81, 0.5}, 1}, {{0.79, 0.48}, 1}, {}, {{0.52, "0.08+0.06"}, 1}, {{0.5, "0.06+0.06"}, 1}, {{0.48, "0.08+0.06"}, 1}, {}, {{"0.5-0.1", "0.9-0.04"}, 1}, {{"0.5-0.1", "0.9+0.04"}, 1}, {{"0.5+0.1", "0.9+0.04"}, 1}, {{"0.5+0.1", "0.9-0.04"}, 1}, {{"0.5-0.1", "0.9-0.04"}, 1}, {}, {{"0.5-0.1", 0.9}, 1}, {{"0.5-0.092", 0.9}, 1}, {}, {{"0.5+0.1", 0.9}, 1}, {{"0.5+0.092", 0.9}, 1}, {}, {{0.5, "0.9-0.04"}, 1}, {{0.5, "0.9-0.032"}, 1}, {}, {{0.5, "0.9+0.04"}, 1}, {{0.5, "0.9+0.032"}, 1}, {}};
type = "line";
width = 4;
};
class Gunner {
points[] = {{"GunnerAim", {"0.5-0.015", "0.9-0.008"}, 1}, {"GunnerAim", {"0.5-0.015", "0.9+0.008"}, 1}, {"GunnerAim", {"0.5+0.015", "0.9+0.008"}, 1}, {"GunnerAim", {"0.5+0.015", "0.9-0.008"}, 1}, {"GunnerAim", {"0.5-0.015", "0.9-0.008"}, 1}};
type = "line";
width = 4;
};
class MGun {
condition = "mgun";
class Circle {
points[] = {{"WeaponAim", {0.05, 0}, 1}, {"WeaponAim", {0.015, 0}, 1}, {}, {"WeaponAim", {0, 0.05}, 1}, {"WeaponAim", {0, 0.015}, 1}, {}, {"WeaponAim", {-0.05, 0}, 1}, {"WeaponAim", {-0.015, 0}, 1}, {}, {"WeaponAim", {0, -0.05}, 1}, {"WeaponAim", {0, -0.015}, 1}, {}};
type = "line";
width = 4;
};
};
class Bomb {
condition = "bomb";
class Circle {
points[] = {{"WeaponAim", {0, -0.1}, 1}, {"WeaponAim", {0.05, -0.087}, 1}, {"WeaponAim", {0.087, -0.05}, 1}, {"WeaponAim", {0.1, 0}, 1}, {"WeaponAim", {0.087, 0.05}, 1}, {"WeaponAim", {0.05, 0.087}, 1}, {"WeaponAim", {0, 0.1}, 1}, {"WeaponAim", {-0.05, 0.087}, 1}, {"WeaponAim", {-0.087, 0.05}, 1}, {"WeaponAim", {-0.1, 0}, 1}, {"WeaponAim", {-0.087, -0.05}, 1}, {"WeaponAim", {-0.05, -0.087}, 1}, {"WeaponAim", {0, -0.1}, 1}, {}, {"Velocity", 0.001, "WeaponAim", {0, 0}, 1}, {"Velocity", {0, 0}, 1}, {}, {"Target", {0, -0.07}, 1}, {"Target", {0.07, 0}, 1}, {"Target", {0, 0.07}, 1}, {"Target", {-0.07, 0}, 1}, {"Target", {0, -0.07}, 1}};
type = "line";
width = 4;
};
};
class AAMissile {
condition = "AAmissile";
class Circle {
points[] = {{"WeaponAim", {0, -0.25}, 1}, {"WeaponAim", {0.125, -0.2175}, 1}, {"WeaponAim", {0.2175, -0.125}, 1}, {"WeaponAim", {0.25, 0}, 1}, {"WeaponAim", {0.2175, 0.125}, 1}, {"WeaponAim", {0.125, 0.2175}, 1}, {"WeaponAim", {0, 0.25}, 1}, {"WeaponAim", {-0.125, 0.2175}, 1}, {"WeaponAim", {-0.2175, 0.125}, 1}, {"WeaponAim", {-0.25, 0}, 1}, {"WeaponAim", {-0.2175, -0.125}, 1}, {"WeaponAim", {-0.125, -0.2175}, 1}, {"WeaponAim", {0, -0.25}, 1}, {}, {"Target", {0, -0.07}, 1}, {"Target", {0.07, 0}, 1}, {"Target", {0, 0.07}, 1}, {"Target", {-0.07, 0}, 1}, {"Target", {0, -0.07}, 1}};
type = "line";
width = 4;
};
};
class ATMissile {
condition = "ATmissile";
class Circle {
points[] = {{"WeaponAim", {-0.15, -0.15}, 1}, {"WeaponAim", {-0.15, "-0.15+0.02"}, 1}, {}, {"WeaponAim", {-0.15, 0.15}, 1}, {"WeaponAim", {-0.15, "+0.15-0.02"}, 1}, {}, {"WeaponAim", {0.15, -0.15}, 1}, {"WeaponAim", {0.15, "-0.15+0.02"}, 1}, {}, {"WeaponAim", {0.15, 0.15}, 1}, {"WeaponAim", {0.15, "+0.15-0.02"}, 1}, {}, {"WeaponAim", {-0.15, -0.15}, 1}, {"WeaponAim", {"-0.15+0.02", -0.15}, 1}, {}, {"WeaponAim", {-0.15, 0.15}, 1}, {"WeaponAim", {"-0.15+0.02", 0.15}, 1}, {}, {"WeaponAim", {0.15, -0.15}, 1}, {"WeaponAim", {"0.15-0.02", -0.15}, 1}, {}, {"WeaponAim", {0.15, 0.15}, 1}, {"WeaponAim", {"0.15-0.02", 0.15}, 1}, {}};
type = "line";
width = 4;
};
};
class Rockets {
condition = "Rocket";
class Circle {
points[] = {{"WeaponAim", {-0.25, -0.25}, 1}, {"WeaponAim", {-0.25, "-0.25+0.05"}, 1}, {}, {"WeaponAim", {-0.25, 0.25}, 1}, {"WeaponAim", {-0.25, "+0.25-0.05"}, 1}, {}, {"WeaponAim", {0.25, -0.25}, 1}, {"WeaponAim", {0.25, "-0.25+0.05"}, 1}, {}, {"WeaponAim", {0.25, 0.25}, 1}, {"WeaponAim", {0.25, "+0.25-0.05"}, 1}, {}, {"WeaponAim", {-0.25, -0.25}, 1}, {"WeaponAim", {"-0.25+0.05", -0.25}, 1}, {}, {"WeaponAim", {-0.25, 0.25}, 1}, {"WeaponAim", {"-0.25+0.05", 0.25}, 1}, {}, {"WeaponAim", {0.25, -0.25}, 1}, {"WeaponAim", {"0.25-0.05", -0.25}, 1}, {}, {"WeaponAim", {0.25, 0.25}, 1}, {"WeaponAim", {"0.25-0.05", 0.25}, 1}, {}, {"WeaponAim", {0.035, 0.035}, 1}, {"WeaponAim", {0.01, 0.01}, 1}, {}, {"WeaponAim", {-0.035, 0.035}, 1}, {"WeaponAim", {-0.01, 0.01}, 1}, {}, {"WeaponAim", {-0.035, -0.035}, 1}, {"WeaponAim", {-0.01, -0.01}, 1}, {}, {"WeaponAim", {0.035, -0.035}, 1}, {"WeaponAim", {0.01, -0.01}, 1}, {}};
type = "line";
width = 4;
};
};
class SpeedNumber {
align = "right";
down[] = {{0.06, 0.52}, 1};
pos[] = {{0.06, 0.47}, 1};
right[] = {{"0.14-0.02", 0.47}, 1};
scale = 1;
source = "speed";
sourcescale = 3.6;
type = "text";
};
class AltNumber: SpeedNumber {
down[] = {{"0.86-0.15", 0.52}, 1};
pos[] = {{"0.86-0.15", 0.47}, 1};
right[] = {{"0.94-0.15-0.02", 0.47}, 1};
source = "altitudeAGL";
sourcescale = 1;
};
class AltScale {
align = "right";
bottom = 0.2;
center = 0.5;
down[] = {0.86, 0.87};
horizontal = 0;
linexleft = 0.825;
linexleftmajor = 0.825;
lineyright = 0.835;
lineyrightmajor = 0.845;
majorlineeach = 5;
max = "none";
min = "none";
numbereach = 5;
pos[] = {0.86, 0.82};
right[] = {"0.94-0.02", 0.82};
scale = 1;
source = "altitudeAGL";
sourcescale = 1;
step = 20;
stepsize = "(0.85- 0.2)/20";
top = 0.85;
type = "scale";
width = 4;
};
class weapons {
align = "right";
down[] = {{0.1, 0.92}, 1};
pos[] = {{0.1, 0.88}, 1};
right[] = {{"0.16-0.02", 0.88}, 1};
scale = 0.5;
source = "weapon";
sourcescale = 1;
type = "text";
};
class ammo {
align = "right";
down[] = {{0.1, 0.97}, 1};
pos[] = {{0.1, 0.93}, 1};
right[] = {{"0.16-0.02", 0.93}, 1};
scale = 0.5;
source = "ammo";
sourcescale = 1;
type = "text";
};
class HeadingScale {
align = "center";
bottom = 0.7;
center = 0.5;
down[] = {"0.32-0.01", "0.04+0.05"};
horizontal = 1;
linexleft = "0.06+0.05";
linexleftmajor = "0.07+0.05";
lineyright = "0.05+0.05";
lineyrightmajor = "0.04+0.05";
majorlineeach = 3;
max = "none";
min = "none";
numbereach = 3;
pos[] = {"0.32-0.01", "0.0+0.05"};
right[] = {"0.38-0.01", "0.0+0.05"};
scale = 1;
source = "Heading";
sourcescale = 1;
step = 10;
stepsize = "(0.70- 0.3)/15";
top = 0.3;
type = "scale";
width = 4;
};
class HorizontalLine {
clipbr[] = {0.8, 0.96};
cliptl[] = {0.2, 0.12};
class HorizontalLineDraw {
points[] = {{"Level0", {"-6*0.075/2", 0.02}, 1}, {"Level0", {"-5*0.075/2", 0.02}, 1}, {}, {"Level0", {"-4*0.075/2", 0.02}, 1}, {"Level0", {"-3*0.075/2", 0.02}, 1}, {}, {"Level0", {"-2*0.075/2", 0.02}, 1}, {"Level0", {"-1*0.075/2", 0.02}, 1}, {}, {"Level0", {"1*0.075/2", 0.02}, 1}, {"Level0", {"2*0.075/2", 0.02}, 1}, {}, {"Level0", {"3*0.075/2", 0.02}, 1}, {"Level0", {"4*0.075/2", 0.02}, 1}, {}, {"Level0", {"5*0.075/2", 0.02}, 1}, {"Level0", {"6*0.075/2", 0.02}, 1}};
source = "Level0";
type = "line";
};
};
};
};
};
class Turrets: Turrets {
class MainTurret: MainTurret {
animationsourcebody = "obsTurret";
animationsourcegun = "obsGun";
body = "obsTurret";
gun = "obsGun";
gunbeg = "commanderview";
gunend = "laserstart";
gunneraction = "AW159_Pilot_BAF";
gunnergetinaction = "GetInHigh";
gunnergetoutaction = "GetOutHigh";
gunnerhasflares = 0;
gunneropticseffect[] = {};
gunneropticsmodel = "\ca\air_e\gunnerOptics_ah64";
ingunnermayfire = 1;
initelev = 0;
initturn = 0;
magazines[] = {"Laserbatteries"};
maxelev = 20;
maxturn = 120;
memorypointgun = "laserstart";
memorypointgunneroptics = "commanderview";
minelev = -40;
minturn = -120;
soundservo[] = {"\ca\sounds\vehicles\servos\turret-1", 0.01, 1, 30};
stabilizedinaxes = 3;
startengine = 0;
turretinfotype = "RscUnitInfo_AH64D_gunner";
weapons[] = {"Laserdesignator_mounted"};
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
class ReloadMGAnim {
source = "reload";
weapon = "M621";
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
class HitEngine {
armor = 0.5;
material = 51;
name = "motor";
passthrough = 0.5;
visual = "motor";
};
class HitAvionics {
armor = 0.15;
material = 51;
name = "elektronika";
passthrough = 0.2;
visual = "elektronika";
};
class HitVRotor {
armor = 0.3;
material = 51;
name = "mala vrtule";
passthrough = 0.1;
visual = "mala vrtule staticka";
};
class HitHRotor {
armor = 0.2;
material = 51;
name = "velka vrtule";
passthrough = 0.1;
visual = "velka vrtule staticka";
};
class HitGlass6 {
armor = 0.5;
material = -1;
name = "glass6";
passthrough = 0;
visual = "glass6";
};
class HitGlass7 {
armor = 0.5;
material = -1;
name = "glass7";
passthrough = 0;
visual = "glass7";
};
class HitGlass8 {
armor = 0.5;
material = -1;
name = "glass8";
passthrough = 0;
visual = "glass8";
};
class HitGlass9 {
armor = 0.5;
material = -1;
name = "glass9";
passthrough = 0;
visual = "glass9";
};
class HitGlass10 {
armor = 0.5;
material = -1;
name = "glass10";
passthrough = 0;
visual = "glass10";
};
class HitGlass11 {
armor = 0.5;
material = -1;
name = "glass11";
passthrough = 0;
visual = "glass11";
};
};
class Damage {
mat[] = {"ca\air_d_BAF\Data\Lynx_base.rvmat", "ca\air_d_BAF\Data\Lynx_base_damage.rvmat", "ca\air_d_BAF\Data\Lynx_base_destruct.rvmat", "ca\air_d_BAF\Data\Lynx_glass.rvmat", "ca\air_d_BAF\Data\Lynx_glass_damage.rvmat", "ca\air_d_BAF\Data\Lynx_glass_damage.rvmat", "ca\air_d_BAF\Data\Lynx_interior.rvmat", "ca\air_d_BAF\Data\Lynx_interior_damage.rvmat", "ca\air_d_BAF\Data\Lynx_interior_destruct.rvmat"};
tex[] = {};
};
class Sounds {
class Engine {
frequency = "rotorSpeed";
sound[] = {"Ca\sounds_baf\air\uk_engine_ext_2", 3.16228, 1.2, 1000};
volume = "camPos*((rotorSpeed-0.72)*4)";
};
class RotorLowOut {
cone[] = {1.8, 3.14, 2, 0.9};
frequency = "rotorSpeed";
sound[] = {"\Ca\sounds_baf\air\uk_rotor_4h", 3.16228, 1.1, 1200};
volume = "camPos*(0 max (rotorSpeed-0.1))";
};
class RotorHighOut {
cone[] = {1.8, 3.14, 2, 0.9};
frequency = "rotorSpeed";
sound[] = {"\Ca\sounds_baf\air\uk_rotor_4h_swist", 1.77828, 1.1, 1300};
volume = "camPos*10*(0 max (rotorThrust-0.95))";
};
class EngineIn {
frequency = "rotorSpeed";
sound[] = {"\Ca\sounds_baf\air\uk_engine_int_2", 0.562341, 1.2};
volume = "(1-camPos)*((rotorSpeed-0.75)*4)";
};
class RotorLowIn {
frequency = "rotorSpeed";
sound[] = {"Ca\sounds_baf\air\uk_rotor_4h_int", 1, 1.1};
volume = "2*(1-camPos)*((rotorSpeed factor[0.3, 1.1]) min (rotorSpeed factor[1.1, 0.3]))";
};
class RotorHighIn {
frequency = "rotorSpeed";
sound[] = {"Ca\sounds_baf\air\uk_rotor_4h_int", 3.16228, 1.1};
volume = "(1-camPos)*3*(rotorThrust-0.9)";
};
};
class TransportMagazines {}; //Removed Data
class TransportWeapons {}; //Removed Data
};


class AW159_Lynx_BAF_DZE: AW159_Lynx_BAF_DZ {
		displayname = "AW159_Lynx_BAF_DZE";
		magazines[] = {"120Rnd_CMFlareMagazine"};
	};
	
	
/********************FOOTNOTES*******************\
**	1: 	This value has something to do with the radar functions.  My own SWAG at it is that it
		has to do with missle lock tone. This value on the EPOCH LB was a 4, and was changed to 
		a 0, whereas the Merlin base class is a 4, and it currently is still a 4.  You can still
		hear a missle tone in EPOCH from the Merlin so I need to test this further. This is also 
		not listed in the BI Wiki.
*/
		