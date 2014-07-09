Class Ka137_Base_PMC;
class Ka137_Base_DZ: Ka137_Base_PMC {
accuracy = 0.5;
armor = 1;
audible = 6;
backrotorspeed = -1;
camouflage = 4;
crew = ""; //Edited
commanderCanSee = 2+16+32; //Added
gunnerCanSee = 2+16+32;  //Added
driverCanSee = 2+16+32; //Added
destrtype = "DestructWreck";
displayname = "Ka-137";
driveraction = "ManActTestDriver";
driverforceoptics = 1;
enablemanualfire = 0;
expansion = 4;
icon = "\Ca\Air_PMC\data\ui\Icon_ka137_PMC_ca.paa";
irscanrangemax = 1000;
irscanrangemin = 100;
irscantoeyefactor = 2;
isuav = 1;
mainrotorspeed = 1;
maxspeed = 290;
model = "\Ca\Air_PMC\Ka137\Ka137.p3d";
picture = "\Ca\Air_PMC\data\ui\picture_ka137_PMC_ca.paa";
radartype = 4;
sensitivity = 2;
sounddammage[] = {"", 0.562341, 1};
soundengineoffext[] = {"Ca\Sounds_PMC\Air_PMC\Ka_157_stop", 0.562341, 1, 800};
soundengineoffint[] = {"Ca\Sounds_PMC\Air_PMC\Ka_157_stop_int", 0.1, 1};
soundengineonext[] = {"Ca\Sounds_PMC\Air_PMC\Ka_157_start", 0.562341, 1, 800};
soundengineonint[] = {"Ca\Sounds_PMC\Air_PMC\Ka_157_start_int", 0.1, 1};
soundgetin[] = {"", 0.316228, 1};
soundgetout[] = {"", 0.316228, 1, 40};
typicalcargo[] = {}; //Added 
transportMaxWeapons = 2; //Added
transportMaxMagazines = 5; //Added
transportmaxbackpacks = 2; //Added
threat[] = {0.6, 0, 0.1};
class Sounds {
class Engine {
frequency = "rotorSpeed";
sound[] = {"Ca\Sounds_PMC\Air_PMC\Ka_157_engi", 3.16228, 1.4, 600};
volume = "camPos*((rotorSpeed-0.72)*4)";
};
class RotorLowOut {
cone[] = {1.8, 3.14, 2, 0.9};
frequency = "rotorSpeed";
sound[] = {"Ca\Sounds_PMC\Air_PMC\Ka_157_rotor", 3.16228, 1, 700};
volume = "camPos*(0 max (rotorSpeed-0.1))";
};
class RotorHighOut {
cone[] = {1.1, 3.14, 2, 0.9};
frequency = "rotorSpeed";
sound[] = {"Ca\Sounds_PMC\Air_PMC\Ka_157_rotor_swist", 5.62341, 1, 800};
volume = "camPos*10*(0 max (rotorThrust-0.95))";
};
class EngineIn {
frequency = "rotorSpeed";
sound[] = {"Ca\Sounds_PMC\Air_PMC\Ka_157_engi_int", 3.16228, 1};
volume = "(1-camPos)*((rotorSpeed-0.75)*4)";
};
class RotorLowIn {
frequency = "rotorSpeed";
sound[] = {"Ca\Sounds_PMC\Air_PMC\Ka_157_rotor", 0.562341, 1};
volume = "2*(1-camPos)*((rotorSpeed factor[0.3, 1.1]) min (rotorSpeed factor[1.1, 0.3]))";
};
class RotorHighIn {
frequency = "rotorSpeed";
sound[] = {"Ca\Sounds_PMC\Air_PMC\Ka_157_rotor_swist_int", 0.316228, 1};
volume = "(1-camPos)*3*(rotorThrust-0.9)";
};
};
class Reflectors {
};
class AnimationSources: AnimationSources {
class HideTurret {
animperiod = "1e-007";
initphase = 1;
source = "user";
};
};
class Library {
libtextdesc = "Being an unmanned multipurpose helicopter, this aircraft can be used for many unique roles, such as recoinnaissance, surveillance and data transmission. A piston engine drives a coaxial rotor-system and the spherical fuselage lacks a feature often seen on helicopters: a tail.<br /><br /> Upon customer request, the special engine compartment can be outfitted with special imaging cameras, signal repeaters and more equipment up to a total weight of 80 kilogrammes. The Ka-137 can be controlled by pre-programmed flight programmes, by manual control from the ground or a combination of the two.";
};
};