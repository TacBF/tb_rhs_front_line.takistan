#include "\ice\tb_main\sys\gameModes\aas_init.sqf";

if(!isServer || local player)then
{
	waitUntil{player==player};
	waitUntil{alive player};
	waitUntil{local player};
	waitUntil { !isNull(findDisplay 46)};
	[] execVM "functions\aug\client.sqf";
};

