class Mi24_D;
class Mi24_D_DZ: Mi24_D {
		accuracy = 1000;
		crew = "";
		displayname = "Mi-24D_DZ";
		hiddenselectionstextures[] = {"\ca\air2\mi35\data\mi35_001_co.paa", "\ca\air2\mi35\data\mi35_002_co.paa"};
		magazines[] = {"120Rnd_CMFlareMagazine"};
		model = "\ca\air_E\Mi35\mi35.p3d";
		scope = 2;
		side = 2;
		typicalcargo[] = {};
		vehicleclass = "Air";
		weapons[] = {"CMFlareLauncher"};
		class Turrets: Turrets {
			class MainTurret: MainTurret {
				magazines[] = {"1470Rnd_127x108_YakB"};
				weapons[] = {"YakB"};
			};
		};
		class AnimationSources: AnimationSources {
		};
		class Library {
			libtextdesc = "The Mil Mi-24 (NATO reporting name: Hind) is a Russian-made large helicopter gunship also capable of a low-capacity troop transportation.<br/>The Mil Mi-24P (NATO reporting name: Hind-D) is a more advanced version of the original Mi-24 designed primarily as a weapons platform.";
		};
		commanderCanSee = 2+16+32;
		gunnerCanSee = 2+16+32;
		driverCanSee = 2+16+32;
		transportMaxWeapons = 10;
		transportMaxMagazines = 50;
		transportmaxbackpacks = 5;
	
	};	
	
class Mi24_D_DZE: Mi24_D_DZ {
		displayname = "Mi-24D_DZE";
		class Turrets: Turrets {
			class MainTurret: MainTurret {
				magazines[] = {};
			};
		};
	};