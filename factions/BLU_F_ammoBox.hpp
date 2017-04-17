class TB_BLUBasicAmmunitionBox
{
	transportClear = 1;
	proxyObject = "TB_BLUBasicAmmunitionBox";
	class transportCargo
	{
		transportMagazines[] = {
			{"rhs_mag_30Rnd_556x45_M855A1_Stanag", 20},
			{"rhsusf_100Rnd_556x45_soft_pouch", 2},
			{"rhsusf_100Rnd_762x51", 2},
			{"rhsusf_20Rnd_762x51_m118_special_Mag", 5},
			{"30Rnd_9x21_Mag", 4},
			{"SmokeShell", 10},
			{"rhs_mag_m67", 6},
			{"1Rnd_HE_Grenade_shell", 6},
			{"1Rnd_Smoke_Grenade_shell", 10},
			{"rhsusf_5Rnd_300winmag_xm2010", 5},
			{"rhs_mag_smaw_HEAA", 3},
			//{"CUP_Dragon_EP1_M", 1},
			{"rhs_mag_smaw_HEDP", 3},
			{"DemoCharge_Remote_Mag", 2},	
            {"Chemlight_green", 12},
            {"Chemlight_blue", 12},			
			{"LaserBatteries", 2}
		};
		transportWeapons[] = {{"rhs_weap_rsp30_green", 8}};
		//transportBackpacks[] = {};
		//transportItems[] = {};
	};
};
class TB_Box_West_Mines_F
{
	transportClear = 1;
	proxyObject = "TB_Box_West_Mines_F";
	class transportCargo
	{
		transportMagazines[] = {
			{"rhs_mine_M19_mag", 3},
			{"SLAMDirectionalMine_Wire_Mag", 3},
			{"APERSMine_Range_Mag", 6},
			{"APERSBoundingMine_Range_Mag", 3},
			{"APERSTripMine_Wire_Mag", 3},
			{"ClaymoreDirectionalMine_Remote_Mag", 3}
		};
		//transportWeapons[] = {};
		transportBackpacks[] = {{"rhsusf_assault_eagleaiii_coy", 1}};
		//transportItems[] = {{"MineDetector", 1}};
	};
};