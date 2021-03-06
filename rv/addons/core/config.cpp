//config.cpp
class CfgPatches {
	class Intercept {
		units[] = {""};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
		version = 0.1;
	};
};

class InterceptBlank {
    class InterceptDummy {
        val = 1;
    };
};

class CfgFunctions
{
	class Intercept
	{
		class boot
		{
			class boot_loader
			{
				preStart = 1;
                file = "z\intercept\rv\addons\core\boot.sqf";
                headerType = -1;
			};
		};
        class initialization 
        {
            class lib_loader
            {
                preInit = 1;
                file = "z\intercept\rv\addons\core\lib.sqf";
                headerType = -1;
            };
        };
	};
};
