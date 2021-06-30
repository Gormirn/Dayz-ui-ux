
class CfgPatches
{
	class Dayz_ui_ux_Scripts
	{
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Scripts", "DF_Scripts", "CF_scripts"};
	};
};

class CfgMods 
{
	class DZ_Dayz_ui_ux
	{
		name = "WontbeReleased";
		dir = "Dayz_ui_ux_";
		credits = "";
		author = "";
		creditsJson = "Dayz_ui_ux_/Scripts/Data/Credits.json";
		versionPath = "Dayz_ui_ux_/Scripts/Data/Version.hpp";
		inputs = "Dayz_ui_ux_/Scripts/Data/Inputs.xml";
		type = "mod";
		dependencies[] =
		{
			"Game", "World", "Mission"
		};
		class defs
		{
			class imageSets
			{
				files[]=
				{
					"DabsFramework/gui/imagesets/prefabs.imageset"
				};
			};

			class widgetStyles
			{
				files[]=
				{
					"DabsFramework/gui/looknfeel/prefabs.styles"
				};
			};
			class engineScriptModule
			{
				value = "";
				files[] =
				{
					"Dayz_ui_ux_/scripts/common",
					"Dayz_ui_ux_/scripts/1_core"
				};
			};

			class gameScriptModule
			{
				value="";
				files[] = 
				{
					"Dayz_ui_ux_/scripts/common",
					"Dayz_ui_ux_/scripts/3_Game"
				};
			};
			class worldScriptModule
			{
				value="";
				files[] = 
				{
					"Dayz_ui_ux_/scripts/common",
					"Dayz_ui_ux_/scripts/4_World"
				};
			};

			class missionScriptModule 
			{
				value="";
				files[] = 
				{
					"Dayz_ui_ux_/scripts/common",
					"Dayz_ui_ux_/scripts/5_Mission"
				};
			};
		};
	};
};
