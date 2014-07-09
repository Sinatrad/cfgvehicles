cfgvehicles
===========

CfgVehicles

This is a place to store vehicle config .hpps and a chance to learn github. 

Sources Used: 
Examples from VBAwol's DayZ Epoch -- https://github.com/vbawol/DayZ-Epoch
Play With Six's CFG Browser Project -- http://browser.six-projects.net/cfg_vehicles
Bohemia Interactive's Wiki:
			CfgVehicles Reference: https://community.bistudio.com/wiki/CfgVehicles_Config_Reference
			
Now to just figure out how to test it..

Max Internal Payload for the CH53E  is 30,000 lbs represented in game by a value of 25/85/10 
Mi24 payload is 5000lbs-ish (sources greatly differ), with base Arma Value of 30/150/10
The MV-22B has a Capacity of 20,000 lbs internal cargo, represented in game by a value of 20/400/10
For Reference 	CH53E	25/85/10	(30,000 lbs real life) (32,000 lbs externally)
					CH-47F 	10/200/5  	(28,000 lbs real life)
					MV-22	20/400/10	(20,000 lbs real life)
					Merlin: 15/150/5 	(11,000 lbs real life)
					UH1Y	5/25/4		(6,660  lbs real life)
					Mi24	30/150/10	(5,000 lbs real life)
				UH60 Var.	10/100/5	(2,640 	-L model 3,190 -M model lbs real life) (9,000 lbs externally)
	
Suggest the following values: 
					CH53E	25/300/10	
					CH-47F 	20/280/10  	
					MV-22	20/200/10	
					Merlin: 15/110/5 	
					UH1Y	10/60/5	
					Mi24D	10/50/5	
					Lynx	5/50/5
				UH60 Var.	10/30/5
				KA60 Var,	5/30/5
					AH64	3/20/2
					AH1Z	3/20/2
				KA137 Var.	2/5/2
				
The above suggestions are based off one magazine object being roughly 1 lbs on average as 
well as 20 gun slots being the max previously. 
The only issue I see with those realistic numbers is that the UH60 variants take a big hit
to the amount of cargo they can hold. On the 5-10 goverment websites used for payload information
it was clear that internal cargo was replaced with on-hook external payload ability. 
Since the cargo slots above reflect internal cargo, it unfortunately does reflect a more 
realistic amount. 
http://fas.org/man/dod-101/sys/land/wsh2012/48.pdf

