class Ka137_Base_DZ;
class Ka137_MG_PMC_DZ: Ka137_Base_DZ {
accuracy = 2;
displayname = "Ka-137 (PK)";
enablemanualfire = 0;
faction = "PMC_BAF";
icon = "\Ca\Air_PMC\data\ui\Icon_ka137pk_PMC_ca.paa";
picture = "\Ca\Air_PMC\data\ui\picture_ka137_PKMG_PMC_ca.paa";
scope = 2;
side = 2;
class Turrets: Turrets {
class MainTurret: MainTurret {
discretedistance[] = {300, 400, 500, 600, 700, 800};
discretedistanceinitindex = 0;
enablemanualfire = 1;
gunnerforceoptics = 1;
gunneropticsmodel = "\ca\air\optika_AH1Z";
initelev = 0;
initturn = 0;
magazines[] = {"200Rnd_762x54_PKT"}; // Reduced to 1
maxelev = 15;
maxturn = 180;
minelev = -80;
minturn = -180;
turretinfotype = "RscWeaponRangeZeroing";
weapons[] = {"PKT_high_AI_dispersion"};
class ViewOptics {
initanglex = 0;
initangley = 0;
initfov = 0.5;
maxanglex = 30;
maxangley = 100;
maxfov = 0.5;
minanglex = -30;
minangley = -100;
minfov = 0.1;
thermalmode[] = {0, 1};
visionmode[] = {"Normal", "Ti"};
};
};
};
class AnimationSources: AnimationSources {
class HideTurret: HideTurret {
initphase = 0;
};
};
class Library {
libtextdesc = "Being an unmanned multipurpose helicopter, this aircraft can be used for many unique roles, such as recoinnaissance, surveillance and data transmission. A piston engine drives a coaxial rotor-system and the spherical fuselage lacks a feature often seen on helicopters: a tail.<br /><br /> Upon customer request, the special engine compartment can be outfitted with special imaging cameras, signal repeaters and more equipment up to a total weight of 80 kilogrammes. The Ka-137 can be controlled by pre-programmed flight programmes, by manual control from the ground or a combination of the two.<br /><br /> This particular version is armed with a 7.62mm PKT machine gun.";
};
};

class Ka137_MG_PMC_DZE: Ka137_MG_PMC_DZ {
magazines[] = {};
};
