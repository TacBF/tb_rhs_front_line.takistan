
class TB_OPFBasicAmmunitionBox
{
	transportClear = 1;
	proxyObject = "TB_OPFBasicAmmunitionBox";
	class transportCargo
	{
		transportMagazines[] = {
			{"rhs_30Rnd_545x39_AK", 20},
			{"rhs_100Rnd_762x54mmR_green", 4},
			{"rhs_10Rnd_762x54mmR_7N1", 10},
			{"rhs_20rnd_9x39mm_SP5", 4},
			{"SmokeShell", 10},
			{"rhs_mag_rgd5", 6},
			{"1Rnd_Smoke_Grenade_shell", 10},
			{"rhs_VOG25", 6},
			{"5Rnd_127x108_Mag", 5},
			{"rhs_rpg7_PG7VL_mag", 3},			
			{"DemoCharge_Remote_Mag", 2},	
            {"Chemlight_red", 12},
            {"Chemlight_yellow", 12},			
			{"LaserBatteries", 2}
		};
		transportWeapons[] = {{"rhs_weap_rsp30_red", 8}};
		//transportBackpacks[] = {};
		//transportItems[] = {};
	};
};
class TB_Box_East_Mines_F
{
	transportClear = 1;
	proxyObject = "TB_Box_East_Mines_F";
	class transportCargo
	{
		transportMagazines[] = {
			{"rhs_mine_tm62m_mag", 3},
			{"SLAMDirectionalMine_Wire_Mag", 3},
			{"rhs_mine_pmn2_mag", 6},
			{"APERSBoundingMine_Range_Mag", 3},
			{"APERSTripMine_Wire_Mag", 3},
			{"ClaymoreDirectionalMine_Remote_Mag", 3}
		};
		//transportWeapons[] = {};
		transportBackpacks[] = {{"rhs_assault_umbts", 1}};
		//transportItems[] = {{"MineDetector", 1}};
	};
};