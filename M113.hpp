//The M113 DZ variants do not function on my server. They no longer error like they did in 1.0.42
//but they do not allow one to get into gunners seat. I think this is due to the external class 
//reference line on  29 and 30.  Due to the DZE inheriting the variables of the DZ, I get a error
//bin\config.bin/CFGVehicles/M113_UN_EP1_DZE/Turrets/MainTurret.minElev when spawning in the DZE variants
//and they do not allow one to enter the gunners seat either.





class M113_UN_EP1;
class M113_UN_EP1_DZ: M113_UN_EP1 {
	crew = ""; //Added
	scope = 2; //Edited
	side = TGuerrila;
	displayName = "M113 DZ";

	commanderCanSee = 2+16+32;
	gunnerCanSee = 2+16+32;
	driverCanSee = 2+16+32;

	crew = "";
	typicalCargo[] = {};
	class TransportMagazines{};
	class TransportWeapons {}; //Added

	transportMaxMagazines = 100; // Default: 100
	transportMaxWeapons = 20; // Default: 20
	transportmaxbackpacks = 2; // -- This should be changed to at least one, to prevent people's backpacks from deleting if accidently put into the vehicle. 

	class Turrets: Turrets {
		class MainTurret: MainTurret {
			magazines[] = {"100Rnd_127X99_M2", "100Rnd_127x99_M2"} //Reduced Ammo to 2 Boxes of M2
		};
	};
};
class M113_TK_EP1;
class M113_TK_EP1_DZ: M113_TK_EP1 {
	crew = "";
	scope = 2;
	side = TGuerrila;
	displayName = "M113 DZ";

	commanderCanSee = 2+16+32;
	gunnerCanSee = 2+16+32;
	driverCanSee = 2+16+32;

	crew = "";
	typicalCargo[] = {};
	class TransportMagazines{};
	class TransportWeapons {}; //Added

	transportMaxMagazines = 100; // Default: 100
	transportMaxWeapons = 20; // Default: 20
	transportmaxbackpacks = 2; // --See above

	class Turrets: Turrets {
		class MainTurret: MainTurret {
			magazines[] = {"100Rnd_127X99_M2", "100Rnd_127x99_M2"} //Reduced Ammo to 2 Boxes of M2
		};
	};
};

// Ammo Less
class M113_UN_EP1_DZE: M113_UN_EP1_DZ {
	displayName = "M113 AL";
	class Turrets: Turrets {
		class MainTurret: MainTurret {
			magazines[] = {};
		};
	};
};
class M113_TK_EP1_DZE: M113_TK_EP1_DZ {
	displayName = "M113 AL";
	class Turrets: Turrets {
		class MainTurret: MainTurret {
			magazines[] = {};
		};
	};
};

// Unarmed
class M113Ambul_UN_EP1;
class M113Ambul_UN_EP1_DZ: M113Ambul_UN_EP1 {
	scope = 2; //edited
	side = TGuerrila;
	crew = "";
	typicalCargo[] = {};
	hiddenSelections[] = {};
	class TransportMagazines{};
	class TransportWeapons{};
	commanderCanSee = 2+16+32;
	gunnerCanSee = 2+16+32;
	driverCanSee = 2+16+32;
	transportMaxWeapons = 5;
	transportMaxMagazines = 25;
	transportmaxbackpacks = 4;
};
class M113Ambul_TK_EP1;
class M113Ambul_TK_EP1_DZ: M113Ambul_TK_EP1 {
	scope = 2; //edited
	side = TGuerrila;
	crew = "";
	typicalCargo[] = {};
	hiddenSelections[] = {};
	class TransportMagazines{};
	class TransportWeapons{};
	commanderCanSee = 2+16+32;
	gunnerCanSee = 2+16+32;
	driverCanSee = 2+16+32;
	transportMaxWeapons = 5;
	transportMaxMagazines = 25;
	transportmaxbackpacks = 4;
};