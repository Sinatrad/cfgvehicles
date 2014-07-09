 class L39_Base;
 class L39_DZ: L39_Base {
acceleration = 250;
accuracy = 0.2;
aileronsensitivity = 1;
armor = 60;
armorstructured = 1;
crew = ""; //Added
commanderCanSee = 2+16+32; //Added
gunnerCanSee = 2+16+32; //Added
driverCanSee = 2+16+32; //Added
damageresistance = 0.004;
destrtype = "DestructWreck";
displayname = "L-39ZA_DZ";  //Edited
driveraction = "L39_pilot_EP1";
elevatorsensitivity = 0.8;
envelope[] = {0, 0.1, 0.95, 2.7, 4.5, 5.65, 6, 5.85, 5.5, 4.8, 3.6, 1.8, 0};
flapsfrictioncoef = 0.32;
gunaimdown = 0.045;
icon = "ca\l39\Data\ui\icon_l39_ca.paa";
irscanrangemax = 3000;
irscanrangemin = 100;
irscantoeyefactor = 2;
landingaoa = "rad 10";
landingspeed = 166;
laserscanner = 1;
magazines[] = {"4000Rnd_762x51_M134"}; //Switched to M134
mapsize = 20;
maxspeed = 750;
memorypointlrocket = "L raketa";
memorypointrrocket = "P raketa";
minfiretime = 30;
model = "\ca\L39\L39.p3d";
picture = "ca\l39\Data\ui\picture_l39_ca.paa";
radartype = 4;  //Radar (See Lynx Footnote 1)
side = 2; //Edited
scope = 2; //Added
sounddammage[] = {"ca\sounds\Air\AV8\int\alarm_loop1", 0.562341, 1};
soundengineoffext[] = {"ca\sounds\Air\AV8\ext\ext-jetair-stop1", 0.562341, 1, 500};
soundengineoffint[] = {"ca\sounds\Air\AV8\int\int-av8b-stop-1", 0.316228, 1};
soundengineonext[] = {"ca\sounds\Air\AV8\ext\ext-jetair-start1", 0.562341, 1, 500};
soundengineonint[] = {"ca\sounds\Air\AV8\int\int-av8b-start-1", 0.316228, 1};
soundgetin[] = {"ca\sounds\Air\AV8\ext\ext-jetair-cabine-close1", 0.0562341, 1};
soundgetout[] = {"ca\sounds\Air\AV8\ext\ext-jetair-cabine-open1", 0.0562341, 1, 40};
threat[] = {1, 1, 1};
typicalcargo[] = {}; //Added
weapons[] = {"TwinM134"};  //Edited
class Library {
libtextdesc = "The Aero L-39 Albatros is a high-performance jet trainer aircraft. It was developed in Czechoslovakia and was widely used for pilot training all over the world. <br>This L-39DZ version is armed with a M134 Revolving Minigun"; //Edited
};
class Sounds {
class EngineLowOut {
frequency = "1.0 min (rpm + 0.5)";
sound[] = {"ca\sounds\Air\AV8\ext\ext-jetair-engine-low2", 2.51189, 1.3, 1400};
volume = "engineOn*camPos*(rpm factor[0.85, 0])";
};
class EngineHighOut {
frequency = 1;
sound[] = {"ca\sounds\Air\AV8\ext\ext-jetair-engine-high2", 2.51189, 1.3, 1800};
volume = "engineOn*camPos*(rpm factor[0.55, 1.0])";
};
class ForsageOut {
cone[] = {3, 3.92, 1.9, 0.5};
frequency = 1;
sound[] = {"ca\sounds\Air\AV8\ext\ext-jetair-forsage1", 1.77828, 0.8, 2000};
volume = "engineOn*camPos*(thrust factor[0.5, 1.0])";
};
class WindNoiseOut {
frequency = "(0.1+(1.2*(speed factor[1, 150])))";
sound[] = {"ca\sounds\Air\AV8\ext\ext-jetair-wind1", 0.562341, 1, 150};
volume = "camPos*(speed factor[1, 150])";
};
class EngineLowIn {
frequency = "1.0 min (rpm + 0.5)";
sound[] = {"ca\sounds\Air\AV8\int\int-av8b-engine-low", 1, 1.3};
volume = "(1-camPos)*(engineOn*(rpm factor[0.85, 0]))";
};
class EngineHighIn {
frequency = 1;
sound[] = {"ca\sounds\Air\AV8\int\int-av8b-engine", 1, 1.3};
volume = "(1-camPos)*(engineOn*(rpm factor[0.55, 1.0]))";
};
class ForsageIn {
frequency = 1;
sound[] = {"ca\sounds\Air\AV8\int\int-av8b-forsage-1", 0.316228, 1};
volume = "(1-camPos)*(engineOn*(thrust factor[0.5, 1.0]))";
};
class WindNoiseIn {
frequency = "(0.1+(1.2*(speed factor[1, 150])))";
sound[] = {"ca\sounds\Air\AV8\int\int-jetair-wind1", 0.316228, 1};
volume = "(1-camPos)*(speed factor[1, 150])";
};
};
class Reflectors {
class Left {
ambient[] = {0.07, 0.07, 0.07, 1};
brightness = 1;
color[] = {0.8, 0.8, 1, 1};
direction = "konec L svetla";
hitpoint = "L svetlo";
position = "L svetlo";
selection = "L svetlo";
size = 1;
};
class Right {
ambient[] = {0.07, 0.07, 0.07, 1};
brightness = 1;
color[] = {0.8, 0.8, 1, 1};
direction = "konec P svetla";
hitpoint = "P svetlo";
position = "P svetlo";
selection = "P svetlo";
size = 1;
};
};
class Damage {
mat[] = {"ca\l39\Data\l-39_body.rvmat", "ca\l39\Data\l-39_body_damage.rvmat", "ca\l39\Data\l-39_body_destruct.rvmat", "ca\l39\Data\l-39_body_1.rvmat", "ca\l39\Data\l-39_body_1_damage.rvmat", "ca\l39\Data\l-39_body_1_destruct.rvmat", "ca\l39\Data\l-39_glass.rvmat", "ca\l39\Data\l-39_glass_damage.rvmat", "ca\l39\Data\l-39_glass_destruct.rvmat", "ca\l39\Data\l-39_glass_in.rvmat", "ca\l39\Data\l-39_glass_damage.rvmat", "ca\l39\Data\l-39_glass_destruct.rvmat"};
tex[] = {};
};
class MFD {
class AirplaneHUD {
borderbottom = 0;
borderleft = 0;
borderright = 0;
bordertop = 0;
bottomleft = "HUD LD";
color[] = {0, 1, 0, 0.1};
enableparallax = 1;
topleft = "HUD LH";
topright = "HUD PH";
class Pos10Vector {
pos0[] = {0.5, -0.25};
pos10[] = {2.7, 1.95};
type = "vector";
};
class Bones {
class ILS_H {
pos0[] = {0.5, 0.42};
pos3[] = {1.16, "(0.42)"};
type = "ils";
};
class ILS_W: ILS_H {
pos3[] = {0.5, 1.08};
};
class PlaneW {
pos[] = {0.5, 0.42};
type = "fixed";
};
class HorizonBankMGun {
aspectratio = 1;
center[] = {0, 0};
max = 6.28319;
maxangle = 360;
min = -6.28319;
minangle = -360;
source = "HorizonBank";
type = "rotational";
};
class HorizonBankReverted {
aspectratio = 1;
center[] = {0, 0};
max = "3.14159265*2";
maxangle = -360;
min = "-3.14159265*2";
minangle = 360;
source = "HorizonBank";
type = "rotational";
};
class HorizonDive {
max = 1;
maxpos[] = {0, -0.08};
min = -1;
minpos[] = {0, 0.92};
source = "horizonDive";
type = "linear";
};
class WeaponAim: Pos10Vector {
source = "weapon";
};
class Target: Pos10Vector {
source = "target";
};
class VelocityNotCenter: Pos10Vector {
pos0[] = {0, 0};
pos10[] = {2.2, 2.2};
source = "velocity";
type = "vector";
};
class SpdMove2 {
max = 200;
maxpos[] = {0, 1};
min = 0;
minpos[] = {0, 0};
source = "speed";
type = "linear";
};
class ASLMove1 {
max = 500;
maxpos[] = {0, 0.8};
min = 0;
minpos[] = {0, 0.1};
source = "altitudeASL";
type = "linear";
};
class Heading {
max = 36;
maxpos[] = {1, 0};
min = -36;
minpos[] = {0, 0};
source = "Heading";
type = "linear";
};
};
class Draw {
alpha = 0.6;
color[] = {0, 0.3, 0.05};
condition = "on";
class Static {
clipbr[] = {1, 0};
cliptl[] = {0, 0.1};
points[] = {{"PlaneW", {-0.21, "9.17939e-009"}, 1}, {"PlaneW", {-0.28, "1.22392e-008"}, 1}, {}, {"PlaneW", {0.21, "-2.50423e-009"}, 1}, {"PlaneW", {0.28, "-3.33897e-009"}, 1}, {}, {"PlaneW", {-0.105, 0.181865}, 1}, {"PlaneW", {-0.14, 0.242487}, 1}, {}, {"PlaneW", {0.105, 0.181865}, 1}, {"PlaneW", {0.14, 0.242487}, 1}, {}, {"PlaneW", {-0.181865, 0.105}, 1}, {"PlaneW", {-0.242487, 0.14}, 1}, {}, {"PlaneW", {0.181865, 0.105}, 1}, {"PlaneW", {0.242487, 0.14}, 1}, {}, {"PlaneW", {-0.202844, 0.054352}, 1}, {"PlaneW", {-0.270459, 0.0724693}, 1}, {}, {"PlaneW", {0.202844, 0.054352}, 1}, {"PlaneW", {0.270459, 0.0724693}, 1}, {}, {"PlaneW", {-0.209201, 0.0183027}, 1}, {"PlaneW", {-0.244068, 0.0213532}, 1}, {}, {"PlaneW", {-0.20681, 0.0364661}, 1}, {"PlaneW", {-0.241278, 0.0425438}, 1}, {}, {"PlaneW", {0.20681, 0.0364661}, 1}, {"PlaneW", {0.241278, 0.0425438}, 1}, {}, {"PlaneW", {0.209201, 0.0183027}, 1}, {"PlaneW", {0.244068, 0.0213531}, 1}, {}};
type = "line";
};
class HorizonBank {
clipbr[] = {1, 0.9};
cliptl[] = {0, 0.1};
points[] = {{"PlaneW", 1, "HorizonBankReverted", {0.21, 0}, 1}, {"PlaneW", 1, "HorizonBankReverted", {0.07, 0}, 1}, {}, {"PlaneW", 1, "HorizonBankReverted", {-0.21, 0}, 1}, {"PlaneW", 1, "HorizonBankReverted", {-0.07, 0}, 1}, {}, {"PlaneW", 1, "HorizonBankReverted", {0, 0.14}, 1}, {"PlaneW", 1, "HorizonBankReverted", {0, 0.07}, 1}};
type = "line";
};
class HorizonDive {
clipbr[] = {1, 0};
cliptl[] = {0, 0.1};
points[] = {{"HorizonDive", {0.8, 0}, 1}, {"HorizonDive", {0.2, 0}, 1}};
type = "line";
};
class Missile {
condition = "missile";
class Target {
points[] = {{"Target", {0, -0.1}, 1}, {"Target", {0.05, -0.087}, 1}, {"Target", {0.087, "-0.50*(0.10)*((2.2/2.2))"}, 1}, {"Target", {"+(0.10)", 0}, 1}, {"Target", {0.087, 0.05}, 1}, {"Target", {0.05, "+0.87*(0.10)*((2.2/2.2))"}, 1}, {"Target", {0, 0.1}, 1}, {"Target", {-0.05, 0.087}, 1}, {"Target", {-0.087, "+0.50*(0.10)*((2.2/2.2))"}, 1}, {"Target", {"-(0.10)", 0}, 1}, {"Target", {-0.087, -0.05}, 1}, {"Target", {-0.05, "-0.87*(0.10)*((2.2/2.2))"}, 1}, {"Target", {0, -0.1}, 1}};
type = "line";
};
};
class Cros {
condition = "on";
class Cros {
points[] = {{"WeaponAim", {0.05, 0}, 1}, {"WeaponAim", {0.015, 0}, 1}, {}, {"WeaponAim", {0, 0.05}, 1}, {"WeaponAim", {0, 0.015}, 1}, {}, {"WeaponAim", {-0.05, 0}, 1}, {"WeaponAim", {-0.015, 0}, 1}, {}, {"WeaponAim", {0, -0.05}, 1}, {"WeaponAim", {0, -0.015}, 1}};
type = "line";
};
};
class SpeedNumber {
align = "right";
down[] = {{0.06, 0.12}, 1};
pos[] = {{0.06, 0.07}, 1};
right[] = {{0.14, 0.07}, 1};
scale = 1;
source = "speed";
sourcescale = 3.6;
type = "text";
};
class AltNumber: SpeedNumber {
down[] = {{0.86, 0.12}, 1};
pos[] = {{0.86, 0.07}, 1};
right[] = {{0.94, 0.07}, 1};
source = "altitudeASL";
sourcescale = 1;
};
class HeadingNumber: SpeedNumber {
align = "right";
down[] = {"HorizonDive", {0.81, 0}, 1};
pos[] = {"HorizonDive", {0.81, -0.05}, 1};
right[] = {"HorizonDive", {0.89, -0.05}, 1};
source = "HorizonDive";
sourcescale = 57.2958;
};
class MGun {
condition = "mgun";
class Lines {
points[] = {{"VelocityNotCenter", 0.001, "WeaponAim", 1, "HorizonBankMGun", {0.2, 0}, 1}, {"VelocityNotCenter", 0.1, "WeaponAim", 1, "HorizonBankMGun", {0.18, -0.01}, 1}, {"VelocityNotCenter", 0.2, "WeaponAim", 1, "HorizonBankMGun", {0.16, -0.03}, 1}, {"VelocityNotCenter", 0.3, "WeaponAim", 1, "HorizonBankMGun", {0.14, -0.06}, 1}, {"VelocityNotCenter", 0.4, "WeaponAim", 1, "HorizonBankMGun", {0.12, -0.1}, 1}, {"VelocityNotCenter", 0.5, "WeaponAim", 1, "HorizonBankMGun", {0.1, -0.15}, 1}, {"VelocityNotCenter", 0.6, "WeaponAim", 1, "HorizonBankMGun", {0.08, -0.21}, 1}, {"VelocityNotCenter", 0.7, "WeaponAim", 1, "HorizonBankMGun", {0.06, -0.28}, 1}, {"VelocityNotCenter", 0.8, "WeaponAim", 1, "HorizonBankMGun", {0.04, -0.4}, 1}, {}, {"VelocityNotCenter", 0.001, "WeaponAim", 1, "HorizonBankMGun", {-0.2, 0}, 1}, {"VelocityNotCenter", 0.1, "WeaponAim", 1, "HorizonBankMGun", {-0.18, -0.01}, 1}, {"VelocityNotCenter", 0.2, "WeaponAim", 1, "HorizonBankMGun", {-0.16, -0.03}, 1}, {"VelocityNotCenter", 0.3, "WeaponAim", 1, "HorizonBankMGun", {-0.14, -0.06}, 1}, {"VelocityNotCenter", 0.4, "WeaponAim", 1, "HorizonBankMGun", {-0.12, -0.1}, 1}, {"VelocityNotCenter", 0.5, "WeaponAim", 1, "HorizonBankMGun", {-0.1, -0.15}, 1}, {"VelocityNotCenter", 0.6, "WeaponAim", 1, "HorizonBankMGun", {-0.08, -0.21}, 1}, {"VelocityNotCenter", 0.7, "WeaponAim", 1, "HorizonBankMGun", {-0.06, -0.28}, 1}, {"VelocityNotCenter", 0.8, "WeaponAim", 1, "HorizonBankMGun", {-0.04, -0.4}, 1}};
type = "line";
};
};
class weapons {
align = "right";
down[] = {{0.06, 0.92}, 1};
pos[] = {{0.06, 0.88}, 1};
right[] = {{0.12, 0.88}, 1};
scale = 1;
source = "weapon";
sourcescale = 1;
type = "text";
};
class ammo {
align = "right";
down[] = {{0.06, 0.97}, 1};
pos[] = {{0.06, 0.93}, 1};
right[] = {{0.12, 0.93}, 1};
scale = 1;
source = "ammo";
sourcescale = 1;
type = "text";
};
class ILS {
condition = "ils";
class Glideslope {
clipbr[] = {1, 1};
cliptl[] = {0, 0};
class ILS {
points[] = {{"ILS_W", {-0.4, 0}, 1}, {"ILS_W", {0.4, 0}, 1}, {}, {"ILS_W", {0, 0.04}, 1}, {"ILS_W", {0, -0.04}, 1}, {}, {"ILS_W", {0.2, 0.04}, 1}, {"ILS_W", {0.2, -0.04}, 1}, {}, {"ILS_W", {0.4, 0.04}, 1}, {"ILS_W", {0.4, -0.04}, 1}, {}, {"ILS_W", {-0.2, 0.04}, 1}, {"ILS_W", {-0.2, -0.04}, 1}, {}, {"ILS_W", {-0.4, 0.04}, 1}, {"ILS_W", {-0.4, -0.04}, 1}, {}, {"ILS_H", {0, -0.4}, 1}, {"ILS_H", {0, 0.4}, 1}, {}, {"ILS_H", {0.04, 0}, 1}, {"ILS_H", {-0.04, 0}, 1}, {}, {"ILS_H", {0.04, 0.2}, 1}, {"ILS_H", {-0.04, 0.2}, 1}, {}, {"ILS_H", {0.04, 0.4}, 1}, {"ILS_H", {-0.04, 0.4}, 1}, {}, {"ILS_H", {0.04, -0.2}, 1}, {"ILS_H", {-0.04, -0.2}, 1}, {}, {"ILS_H", {0.04, -0.4}, 1}, {"ILS_H", {-0.04, -0.4}, 1}, {}};
type = "line";
};
};
};
};
};
};
};

 class L39_DZE: L39_DZ {
 magazines[] = {};
 }