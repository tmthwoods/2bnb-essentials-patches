#define CAMO0_ASTEAMLEADER "BNB_FA_Nor_IC_MTP"
#define CAMO0_TEAMLEADER "BNB_FA_Nor_IC_MTP"
#define CAMO0_MEDIC "BNB_FA_Nor_Medic_MTP"
#define CAMO0_RIFLEMAN "BNB_FA_Nor_Rifleman_MTP"

#define CAMO1_ASTEAMLEADER "BNB_FA_Nor_IC_Desert"
#define CAMO1_TEAMLEADER "BNB_FA_Nor_IC_Desert"
#define CAMO1_MEDIC "BNB_FA_Nor_Medic_Desert"
#define CAMO1_RIFLEMAN "BNB_FA_Nor_Rifleman_Desert"

#define CAMO2_ASTEAMLEADER "BNB_FA_Nor_IC_Woodland"
#define CAMO2_TEAMLEADER "BNB_FA_Nor_IC_Woodland"
#define CAMO2_MEDIC "BNB_FA_Nor_Medic_Woodland"
#define CAMO2_RIFLEMAN "BNB_FA_Nor_Rifleman_Woodland"

#define CAMO3_ASTEAMLEADER "BNB_FA_Nor_IC_Winter"
#define CAMO3_TEAMLEADER "BNB_FA_Nor_IC_Winter"
#define CAMO3_MEDIC "BNB_FA_Nor_Medic_Winter"
#define CAMO3_RIFLEMAN "BNB_FA_Nor_Rifleman_Winter"

// FOR NOW THE BAL FACTIONS ARE JUST EXTRA CAMO TYPES, THIS WILL BE A SEPERATE OPTION LATER

#define CAMO4_ASTEAMLEADER "BNB_FA_Bal_IC_MTP"
#define CAMO4_TEAMLEADER "BNB_FA_Bal_IC_MTP"
#define CAMO4_MEDIC "BNB_FA_Bal_Medic_MTP"
#define CAMO4_RIFLEMAN "BNB_FA_Bal_Rifleman_MTP"

#define CAMO5_ASTEAMLEADER "BNB_FA_Bal_IC_Desert"
#define CAMO5_TEAMLEADER "BNB_FA_Bal_IC_Desert"
#define CAMO5_MEDIC "BNB_FA_Bal_Medic_Desert"
#define CAMO5_RIFLEMAN "BNB_FA_Bal_Rifleman_Desert"

#define CAMO6_ASTEAMLEADER "BNB_FA_Bal_IC_Woodland"
#define CAMO6_TEAMLEADER "BNB_FA_Bal_IC_Woodland"
#define CAMO6_MEDIC "BNB_FA_Bal_Medic_Woodland"
#define CAMO6_RIFLEMAN "BNB_FA_Bal_Rifleman_Woodland"

#define CAMO7_ASTEAMLEADER "BNB_FA_Bal_IC_Winter"
#define CAMO7_TEAMLEADER "BNB_FA_Bal_IC_Winter"
#define CAMO7_MEDIC "BNB_FA_Bal_Medic_Winter"
#define CAMO7_RIFLEMAN "BNB_FA_Bal_Rifleman_Winter"


#define PILOT "CUP_B_BAF_Soldier_Pilot_MTP"
#define CREW "CUP_B_BAF_Soldier_Crew_MTP"

class ctrlMenuStrip;
class display3DEN
{
	class Controls
	{
		class MenuStrip: ctrlMenuStrip
		{
			class Items
			{
				class Tools {
					items[] += {"BNB_ES_Tools"};
				};
				class bnb_es_tools {
					text = "JEF Tools...";
					items[] = {"BNB_ES_Settings", "BNB_ES_Assets"};
				};
				class bnb_es_settings {
					text = "Load JEF Settings";
					action = "['Are you sure you want to overwrite current settings with JEF defaults?', 'Load JEF Settings', ['Overwrite', {[] call bnb_es_core_fnc_edenLoadSettings}], true] call BIS_fnc_3DENShowMessage";
				};
				class bnb_es_assets {
					text = "Load JEF Slots & Modules";
					action = "findDisplay 313 createDisplay 'bnb_es_edenGUI'";
				};
			};
		};
	};
};
class CfgGroups
{
	class West {
		class bnb_es_compositions {
			name = "JEF";
			scope = 0;
			class infantry {
				name = "";
				class CAMO0_zeus {
					name = "";
					scope = 0;
					faction = "BLU_F";
					side = 1;
					class Unit0 {
						position[] = {0,0,0};
						vehicle = CAMO0_ASTEAMLEADER;
						rank = "PRIVATE";
					};
					class Unit1 {
						position[] = {1,0,0};
						vehicle = CAMO0_ASTEAMLEADER;
						rank = "PRIVATE";
					};
				};
				class CAMO0_section {
					name = "";
					scope = 0;
					faction = "BLU_F";
					side = 1;
					class Unit0 {
						position[] = {0,0,0};
						vehicle = CAMO0_TEAMLEADER;
						rank = "PRIVATE";
					};
					class Unit1 {
						position[] = {0,-3,0};
						vehicle = CAMO0_ASTEAMLEADER;
						rank = "PRIVATE";
					};
					class Unit2 {
						position[] = {0,-6,0};
						vehicle = CAMO0_MEDIC;
						rank = "PRIVATE";
					};
					class Unit3 {
						position[] = {0,-9,0};
						vehicle = CAMO0_RIFLEMAN;
						rank = "PRIVATE";
					};
					class Unit4 {
						position[] = {1,0,0};
						vehicle = CAMO0_RIFLEMAN;
						rank = "PRIVATE";
					};
					class Unit5 {
						position[] = {1,-3,0};
						vehicle = CAMO0_RIFLEMAN;
						rank = "PRIVATE";
					};
					class Unit6 {
						position[] = {1,-6,0};
						vehicle = CAMO0_RIFLEMAN;
						rank = "PRIVATE";
					};
					class Unit7 {
						position[] = {1,-9,0};
						vehicle = CAMO0_RIFLEMAN;
						rank = "PRIVATE";
					};

				};
				class CAMO0_command {
					name = "";
					scope = 0;
					faction = "BLU_F";
					side = 1;
					class Unit0 {
						position[] = {0,0,0};
						vehicle = CAMO0_TEAMLEADER;
						rank = "PRIVATE";
					};
					class Unit1 {
						position[] = {0,-3,0};
						vehicle = CAMO0_ASTEAMLEADER;
						rank = "PRIVATE";
					};
					class Unit2{
						position[] = {0,-6,0};
						vehicle = CAMO0_MEDIC;
						rank = "PRIVATE";
					};
					class Unit3 {
						position[] = {0,-9,0};
						vehicle = CAMO0_RIFLEMAN;
						rank = "PRIVATE";
					};
				};
				class CAMO0_defaults {
					name = "";
					scope = 0;
					faction = "BLU_F";
					side = 1;
					class Unit0 {
						position[] = {0,0,0};
						vehicle = CAMO0_TEAMLEADER;
						rank = "PRIVATE";
					};
					class Unit1{
						position[] = {0,-6,0};
						vehicle = CAMO0_MEDIC;
						rank = "PRIVATE";
					};
					class Unit2 {
						position[] = {0,-9,0};
						vehicle = CAMO0_RIFLEMAN;
						rank = "PRIVATE";
					};
				};
				class CAMO1_zeus {
					name = "";
					scope = 0;
					faction = "BLU_F";
					side = 1;
					class Unit0 {
						position[] = {0,0,0};
						vehicle = CAMO1_ASTEAMLEADER;
						rank = "PRIVATE";
					};
					class Unit1 {
						position[] = {1,0,0};
						vehicle = CAMO1_ASTEAMLEADER;
						rank = "PRIVATE";
					};
				};
				class CAMO1_section {
					name = "";
					scope = 0;
					faction = "BLU_F";
					side = 1;
					class Unit0 {
						position[] = {0,0,0};
						vehicle = CAMO1_TEAMLEADER;
						rank = "PRIVATE";
					};
					class Unit1 {
						position[] = {0,-3,0};
						vehicle = CAMO1_ASTEAMLEADER;
						rank = "PRIVATE";
					};
					class Unit2 {
						position[] = {0,-6,0};
						vehicle = CAMO1_MEDIC;
						rank = "PRIVATE";
					};
					class Unit3 {
						position[] = {0,-9,0};
						vehicle = CAMO1_RIFLEMAN;
						rank = "PRIVATE";
					};
					class Unit4 {
						position[] = {1,0,0};
						vehicle = CAMO1_RIFLEMAN;
						rank = "PRIVATE";
					};
					class Unit5 {
						position[] = {1,-3,0};
						vehicle = CAMO1_RIFLEMAN;
						rank = "PRIVATE";
					};
					class Unit6 {
						position[] = {1,-6,0};
						vehicle = CAMO1_RIFLEMAN;
						rank = "PRIVATE";
					};
					class Unit7 {
						position[] = {1,-9,0};
						vehicle = CAMO1_RIFLEMAN;
						rank = "PRIVATE";
					};

				};
				class CAMO1_command {
					name = "";
					scope = 0;
					faction = "BLU_F";
					side = 1;
					class Unit0 {
						position[] = {0,0,0};
						vehicle = CAMO1_TEAMLEADER;
						rank = "PRIVATE";
					};
					class Unit1 {
						position[] = {0,-3,0};
						vehicle = CAMO1_ASTEAMLEADER;
						rank = "PRIVATE";
					};
					class Unit2{
						position[] = {0,-6,0};
						vehicle = CAMO1_MEDIC;
						rank = "PRIVATE";
					};
					class Unit3 {
						position[] = {0,-9,0};
						vehicle = CAMO1_RIFLEMAN;
						rank = "PRIVATE";
					};
				};
				class CAMO1_defaults {
					name = "";
					scope = 0;
					faction = "BLU_F";
					side = 1;
					class Unit0 {
						position[] = {0,0,0};
						vehicle = CAMO1_TEAMLEADER;
						rank = "PRIVATE";
					};
					class Unit1{
						position[] = {0,-6,0};
						vehicle = CAMO1_MEDIC;
						rank = "PRIVATE";
					};
					class Unit2 {
						position[] = {0,-9,0};
						vehicle = CAMO1_RIFLEMAN;
						rank = "PRIVATE";
					};
				};
				class CAMO2_zeus {
					name = "";
					scope = 0;
					faction = "BLU_F";
					side = 1;
					class Unit0 {
						position[] = {0,0,0};
						vehicle = CAMO2_ASTEAMLEADER;
						rank = "PRIVATE";
					};
					class Unit1 {
						position[] = {1,0,0};
						vehicle = CAMO2_ASTEAMLEADER;
						rank = "PRIVATE";
					};
				};
				class CAMO2_section {
					name = "";
					scope = 0;
					faction = "BLU_F";
					side = 1;
					class Unit0 {
						position[] = {0,0,0};
						vehicle = CAMO2_TEAMLEADER;
						rank = "PRIVATE";
					};
					class Unit1 {
						position[] = {0,-3,0};
						vehicle = CAMO2_ASTEAMLEADER;
						rank = "PRIVATE";
					};
					class Unit2 {
						position[] = {0,-6,0};
						vehicle = CAMO2_MEDIC;
						rank = "PRIVATE";
					};
					class Unit3 {
						position[] = {0,-9,0};
						vehicle = CAMO2_RIFLEMAN;
						rank = "PRIVATE";
					};
					class Unit4 {
						position[] = {1,0,0};
						vehicle = CAMO2_RIFLEMAN;
						rank = "PRIVATE";
					};
					class Unit5 {
						position[] = {1,-3,0};
						vehicle = CAMO2_RIFLEMAN;
						rank = "PRIVATE";
					};
					class Unit6 {
						position[] = {1,-6,0};
						vehicle = CAMO2_RIFLEMAN;
						rank = "PRIVATE";
					};
					class Unit7 {
						position[] = {1,-9,0};
						vehicle = CAMO2_RIFLEMAN;
						rank = "PRIVATE";
					};

				};
				class CAMO2_command {
					name = "";
					scope = 0;
					faction = "BLU_F";
					side = 1;
					class Unit0 {
						position[] = {0,0,0};
						vehicle = CAMO2_TEAMLEADER;
						rank = "PRIVATE";
					};
					class Unit1 {
						position[] = {0,-3,0};
						vehicle = CAMO2_ASTEAMLEADER;
						rank = "PRIVATE";
					};
					class Unit2{
						position[] = {0,-6,0};
						vehicle = CAMO2_MEDIC;
						rank = "PRIVATE";
					};
					class Unit3 {
						position[] = {0,-9,0};
						vehicle = CAMO2_RIFLEMAN;
						rank = "PRIVATE";
					};
				};
				class CAMO2_defaults {
					name = "";
					scope = 0;
					faction = "BLU_F";
					side = 1;
					class Unit0 {
						position[] = {0,0,0};
						vehicle = CAMO2_TEAMLEADER;
						rank = "PRIVATE";
					};
					class Unit1{
						position[] = {0,-3,0};
						vehicle = CAMO2_MEDIC;
						rank = "PRIVATE";
					};
					class Unit2 {
						position[] = {0,-6,0};
						vehicle = CAMO2_RIFLEMAN;
						rank = "PRIVATE";
					};
				};
							class CAMO3_zeus {
					name = "";
					scope = 0;
					faction = "BLU_F";
					side = 1;
					class Unit0 {
						position[] = {0,0,0};
						vehicle = CAMO3_ASTEAMLEADER;
						rank = "PRIVATE";
					};
					class Unit1 {
						position[] = {1,0,0};
						vehicle = CAMO3_ASTEAMLEADER;
						rank = "PRIVATE";
					};
				};
				class CAMO3_section {
					name = "";
					scope = 0;
					faction = "BLU_F";
					side = 1;
					class Unit0 {
						position[] = {0,0,0};
						vehicle = CAMO3_TEAMLEADER;
						rank = "PRIVATE";
					};
					class Unit1 {
						position[] = {0,-3,0};
						vehicle = CAMO3_ASTEAMLEADER;
						rank = "PRIVATE";
					};
					class Unit2 {
						position[] = {0,-6,0};
						vehicle = CAMO3_MEDIC;
						rank = "PRIVATE";
					};
					class Unit3 {
						position[] = {0,-9,0};
						vehicle = CAMO3_RIFLEMAN;
						rank = "PRIVATE";
					};
					class Unit4 {
						position[] = {1,0,0};
						vehicle = CAMO3_RIFLEMAN;
						rank = "PRIVATE";
					};
					class Unit5 {
						position[] = {1,-3,0};
						vehicle = CAMO3_RIFLEMAN;
						rank = "PRIVATE";
					};
					class Unit6 {
						position[] = {1,-6,0};
						vehicle = CAMO3_RIFLEMAN;
						rank = "PRIVATE";
					};
					class Unit7 {
						position[] = {1,-9,0};
						vehicle = CAMO3_RIFLEMAN;
						rank = "PRIVATE";
					};

				};
				class CAMO3_command {
					name = "";
					scope = 0;
					faction = "BLU_F";
					side = 1;
					class Unit0 {
						position[] = {0,0,0};
						vehicle = CAMO3_TEAMLEADER;
						rank = "PRIVATE";
					};
					class Unit1 {
						position[] = {0,-3,0};
						vehicle = CAMO3_ASTEAMLEADER;
						rank = "PRIVATE";
					};
					class Unit2{
						position[] = {0,-6,0};
						vehicle = CAMO3_MEDIC;
						rank = "PRIVATE";
					};
					class Unit3 {
						position[] = {0,-9,0};
						vehicle = CAMO3_RIFLEMAN;
						rank = "PRIVATE";
					};
				};
				class CAMO3_defaults {
					name = "";
					scope = 0;
					faction = "BLU_F";
					side = 1;
					class Unit0 {
						position[] = {0,0,0};
						vehicle = CAMO3_TEAMLEADER;
						rank = "PRIVATE";
					};
					class Unit1{
						position[] = {0,-3,0};
						vehicle = CAMO3_MEDIC;
						rank = "PRIVATE";
					};
					class Unit2 {
						position[] = {0,-6,0};
						vehicle = CAMO3_RIFLEMAN;
						rank = "PRIVATE";
					};
				};
				class CAMO4_zeus {
					name = "";
					scope = 0;
					faction = "BLU_F";
					side = 1;
					class Unit0 {
						position[] = {0,0,0};
						vehicle = CAMO4_ASTEAMLEADER;
						rank = "PRIVATE";
					};
					class Unit1 {
						position[] = {1,0,0};
						vehicle = CAMO4_ASTEAMLEADER;
						rank = "PRIVATE";
					};
				};
				class CAMO4_section {
					name = "";
					scope = 0;
					faction = "BLU_F";
					side = 1;
					class Unit0 {
						position[] = {0,0,0};
						vehicle = CAMO4_TEAMLEADER;
						rank = "PRIVATE";
					};
					class Unit1 {
						position[] = {0,-3,0};
						vehicle = CAMO4_ASTEAMLEADER;
						rank = "PRIVATE";
					};
					class Unit2 {
						position[] = {0,-6,0};
						vehicle = CAMO4_MEDIC;
						rank = "PRIVATE";
					};
					class Unit3 {
						position[] = {0,-9,0};
						vehicle = CAMO4_RIFLEMAN;
						rank = "PRIVATE";
					};
					class Unit4 {
						position[] = {1,0,0};
						vehicle = CAMO4_RIFLEMAN;
						rank = "PRIVATE";
					};
					class Unit5 {
						position[] = {1,-3,0};
						vehicle = CAMO4_RIFLEMAN;
						rank = "PRIVATE";
					};
					class Unit6 {
						position[] = {1,-6,0};
						vehicle = CAMO4_RIFLEMAN;
						rank = "PRIVATE";
					};
					class Unit7 {
						position[] = {1,-9,0};
						vehicle = CAMO4_RIFLEMAN;
						rank = "PRIVATE";
					};

				};
				class CAMO4_command {
					name = "";
					scope = 0;
					faction = "BLU_F";
					side = 1;
					class Unit0 {
						position[] = {0,0,0};
						vehicle = CAMO4_TEAMLEADER;
						rank = "PRIVATE";
					};
					class Unit1 {
						position[] = {0,-3,0};
						vehicle = CAMO4_ASTEAMLEADER;
						rank = "PRIVATE";
					};
					class Unit2{
						position[] = {0,-6,0};
						vehicle = CAMO4_MEDIC;
						rank = "PRIVATE";
					};
					class Unit3 {
						position[] = {0,-9,0};
						vehicle = CAMO4_RIFLEMAN;
						rank = "PRIVATE";
					};
				};
				class CAMO4_defaults {
					name = "";
					scope = 0;
					faction = "BLU_F";
					side = 1;
					class Unit0 {
						position[] = {0,0,0};
						vehicle = CAMO4_TEAMLEADER;
						rank = "PRIVATE";
					};
					class Unit1{
						position[] = {0,-6,0};
						vehicle = CAMO4_MEDIC;
						rank = "PRIVATE";
					};
					class Unit2 {
						position[] = {0,-9,0};
						vehicle = CAMO4_RIFLEMAN;
						rank = "PRIVATE";
					};
				};
				class CAMO5_zeus {
					name = "";
					scope = 0;
					faction = "BLU_F";
					side = 1;
					class Unit0 {
						position[] = {0,0,0};
						vehicle = CAMO5_ASTEAMLEADER;
						rank = "PRIVATE";
					};
					class Unit1 {
						position[] = {1,0,0};
						vehicle = CAMO5_ASTEAMLEADER;
						rank = "PRIVATE";
					};
				};
				class CAMO5_section {
					name = "";
					scope = 0;
					faction = "BLU_F";
					side = 1;
					class Unit0 {
						position[] = {0,0,0};
						vehicle = CAMO5_TEAMLEADER;
						rank = "PRIVATE";
					};
					class Unit1 {
						position[] = {0,-3,0};
						vehicle = CAMO5_ASTEAMLEADER;
						rank = "PRIVATE";
					};
					class Unit2 {
						position[] = {0,-6,0};
						vehicle = CAMO5_MEDIC;
						rank = "PRIVATE";
					};
					class Unit3 {
						position[] = {0,-9,0};
						vehicle = CAMO5_RIFLEMAN;
						rank = "PRIVATE";
					};
					class Unit4 {
						position[] = {1,0,0};
						vehicle = CAMO5_RIFLEMAN;
						rank = "PRIVATE";
					};
					class Unit5 {
						position[] = {1,-3,0};
						vehicle = CAMO5_RIFLEMAN;
						rank = "PRIVATE";
					};
					class Unit6 {
						position[] = {1,-6,0};
						vehicle = CAMO5_RIFLEMAN;
						rank = "PRIVATE";
					};
					class Unit7 {
						position[] = {1,-9,0};
						vehicle = CAMO5_RIFLEMAN;
						rank = "PRIVATE";
					};

				};
				class CAMO5_command {
					name = "";
					scope = 0;
					faction = "BLU_F";
					side = 1;
					class Unit0 {
						position[] = {0,0,0};
						vehicle = CAMO5_TEAMLEADER;
						rank = "PRIVATE";
					};
					class Unit1 {
						position[] = {0,-3,0};
						vehicle = CAMO5_ASTEAMLEADER;
						rank = "PRIVATE";
					};
					class Unit2{
						position[] = {0,-6,0};
						vehicle = CAMO5_MEDIC;
						rank = "PRIVATE";
					};
					class Unit3 {
						position[] = {0,-9,0};
						vehicle = CAMO5_RIFLEMAN;
						rank = "PRIVATE";
					};
				};
				class CAMO5_defaults {
					name = "";
					scope = 0;
					faction = "BLU_F";
					side = 1;
					class Unit0 {
						position[] = {0,0,0};
						vehicle = CAMO5_TEAMLEADER;
						rank = "PRIVATE";
					};
					class Unit1{
						position[] = {0,-6,0};
						vehicle = CAMO5_MEDIC;
						rank = "PRIVATE";
					};
					class Unit2 {
						position[] = {0,-9,0};
						vehicle = CAMO5_RIFLEMAN;
						rank = "PRIVATE";
					};
				};
				class CAMO6_zeus {
					name = "";
					scope = 0;
					faction = "BLU_F";
					side = 1;
					class Unit0 {
						position[] = {0,0,0};
						vehicle = CAMO6_ASTEAMLEADER;
						rank = "PRIVATE";
					};
					class Unit1 {
						position[] = {1,0,0};
						vehicle = CAMO6_ASTEAMLEADER;
						rank = "PRIVATE";
					};
				};
				class CAMO6_section {
					name = "";
					scope = 0;
					faction = "BLU_F";
					side = 1;
					class Unit0 {
						position[] = {0,0,0};
						vehicle = CAMO6_TEAMLEADER;
						rank = "PRIVATE";
					};
					class Unit1 {
						position[] = {0,-3,0};
						vehicle = CAMO6_ASTEAMLEADER;
						rank = "PRIVATE";
					};
					class Unit2 {
						position[] = {0,-6,0};
						vehicle = CAMO6_MEDIC;
						rank = "PRIVATE";
					};
					class Unit3 {
						position[] = {0,-9,0};
						vehicle = CAMO6_RIFLEMAN;
						rank = "PRIVATE";
					};
					class Unit4 {
						position[] = {1,0,0};
						vehicle = CAMO6_RIFLEMAN;
						rank = "PRIVATE";
					};
					class Unit5 {
						position[] = {1,-3,0};
						vehicle = CAMO6_RIFLEMAN;
						rank = "PRIVATE";
					};
					class Unit6 {
						position[] = {1,-6,0};
						vehicle = CAMO6_RIFLEMAN;
						rank = "PRIVATE";
					};
					class Unit7 {
						position[] = {1,-9,0};
						vehicle = CAMO6_RIFLEMAN;
						rank = "PRIVATE";
					};

				};
				class CAMO6_command {
					name = "";
					scope = 0;
					faction = "BLU_F";
					side = 1;
					class Unit0 {
						position[] = {0,0,0};
						vehicle = CAMO6_TEAMLEADER;
						rank = "PRIVATE";
					};
					class Unit1 {
						position[] = {0,-3,0};
						vehicle = CAMO6_ASTEAMLEADER;
						rank = "PRIVATE";
					};
					class Unit2{
						position[] = {0,-6,0};
						vehicle = CAMO6_MEDIC;
						rank = "PRIVATE";
					};
					class Unit3 {
						position[] = {0,-9,0};
						vehicle = CAMO6_RIFLEMAN;
						rank = "PRIVATE";
					};
				};
				class CAMO6_defaults {
					name = "";
					scope = 0;
					faction = "BLU_F";
					side = 1;
					class Unit0 {
						position[] = {0,0,0};
						vehicle = CAMO6_TEAMLEADER;
						rank = "PRIVATE";
					};
					class Unit1{
						position[] = {0,-6,0};
						vehicle = CAMO6_MEDIC;
						rank = "PRIVATE";
					};
					class Unit2 {
						position[] = {0,-9,0};
						vehicle = CAMO6_RIFLEMAN;
						rank = "PRIVATE";
					};
				};
				class CAMO7_zeus {
					name = "";
					scope = 0;
					faction = "BLU_F";
					side = 1;
					class Unit0 {
						position[] = {0,0,0};
						vehicle = CAMO7_ASTEAMLEADER;
						rank = "PRIVATE";
					};
					class Unit1 {
						position[] = {1,0,0};
						vehicle = CAMO7_ASTEAMLEADER;
						rank = "PRIVATE";
					};
				};
				class CAMO7_section {
					name = "";
					scope = 0;
					faction = "BLU_F";
					side = 1;
					class Unit0 {
						position[] = {0,0,0};
						vehicle = CAMO7_TEAMLEADER;
						rank = "PRIVATE";
					};
					class Unit1 {
						position[] = {0,-3,0};
						vehicle = CAMO7_ASTEAMLEADER;
						rank = "PRIVATE";
					};
					class Unit2 {
						position[] = {0,-6,0};
						vehicle = CAMO7_MEDIC;
						rank = "PRIVATE";
					};
					class Unit3 {
						position[] = {0,-9,0};
						vehicle = CAMO7_RIFLEMAN;
						rank = "PRIVATE";
					};
					class Unit4 {
						position[] = {1,0,0};
						vehicle = CAMO7_RIFLEMAN;
						rank = "PRIVATE";
					};
					class Unit5 {
						position[] = {1,-3,0};
						vehicle = CAMO7_RIFLEMAN;
						rank = "PRIVATE";
					};
					class Unit6 {
						position[] = {1,-6,0};
						vehicle = CAMO7_RIFLEMAN;
						rank = "PRIVATE";
					};
					class Unit7 {
						position[] = {1,-9,0};
						vehicle = CAMO7_RIFLEMAN;
						rank = "PRIVATE";
					};

				};
				class CAMO7_command {
					name = "";
					scope = 0;
					faction = "BLU_F";
					side = 1;
					class Unit0 {
						position[] = {0,0,0};
						vehicle = CAMO7_TEAMLEADER;
						rank = "PRIVATE";
					};
					class Unit1 {
						position[] = {0,-3,0};
						vehicle = CAMO7_ASTEAMLEADER;
						rank = "PRIVATE";
					};
					class Unit2{
						position[] = {0,-6,0};
						vehicle = CAMO7_MEDIC;
						rank = "PRIVATE";
					};
					class Unit3 {
						position[] = {0,-9,0};
						vehicle = CAMO7_RIFLEMAN;
						rank = "PRIVATE";
					};
				};
				class CAMO7_defaults {
					name = "";
					scope = 0;
					faction = "BLU_F";
					side = 1;
					class Unit0 {
						position[] = {0,0,0};
						vehicle = CAMO7_TEAMLEADER;
						rank = "PRIVATE";
					};
					class Unit1{
						position[] = {0,-6,0};
						vehicle = CAMO7_MEDIC;
						rank = "PRIVATE";
					};
					class Unit2 {
						position[] = {0,-9,0};
						vehicle = CAMO7_RIFLEMAN;
						rank = "PRIVATE";
					};
				};
			};
		};
	};
};
