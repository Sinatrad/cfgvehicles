class Ka60_GL_PMC;
class Ka60_GL_DZ: Ka60_GL_PMC {
accuracy = 1000;
crew = ""; //Added
displayname = "Ka-60 (M32)";
scope = 2; 
weapons[] = {}; //Added
magazines[] = {}; //Added
commanderCanSee = 2+16+32; //Added
gunnerCanSee = 2+16+32; //Added
driverCanSee = 2+16+32; //Added
transportMaxWeapons = 5; //Added
transportMaxMagazines = 30; //Added
transportmaxbackpacks = 5; //Added
typicalcargo[] = {}; //Added
	class Turrets: Turrets {
		class MainTurret: MainTurret {
			magazines[] = {"6Rnd_HE_M203"}; //changed ammo type, reduced to one
			weapons[] = {"M32_heli_DZ"};  //New Weapon Class to remove functional ammo copies
		};
	};

};

class Ka60_GL_DZE: Ka60_GL_DZ {
class Turrets: Turrets {
		class MainTurret: MainTurret {
			magazines[] = {}; 
		};
	};

};