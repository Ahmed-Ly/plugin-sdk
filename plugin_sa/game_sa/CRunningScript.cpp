/*
    Plugin-SDK (Grand Theft Auto) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CRunningScript.h"

// Initializes member variables.
void CRunningScript::Init()
{
	((void (__thiscall*)(CRunningScript*)) FUNC_CRunningScript__Init )(this);	
}

// Processes one command
char CRunningScript::ProcessOneCommand()
{
	 return ((char (__thiscall*)(CRunningScript*)) FUNC_CRunningScript__ProcessOneCommand )(this);
}

// Reads array offset and value from array index variable.
void CRunningScript::ReadArrayInformation(__int16 *pOffset, __int32 *pIdx)
{
	((void (__thiscall*)(CRunningScript*, __int16*, __int32*)) FUNC_CRunningScript__ReadArrayInformation )(this, pOffset, pIdx);	
}

// Returns offset of global variable
__int16 CRunningScript::GetIndexOfGlobalVariable()
{
	return ((__int16 (__thiscall*)(CRunningScript*)) FUNC_CRunningScript__GetIndexOfGlobalVariable )(this);
}

// Returns pointer to script variable of any type.
tScriptVarValue* CRunningScript::GetPointerToScriptVariable(unsigned __int8 variableType)
{
	return ((tScriptVarValue* (__thiscall*)(CRunningScript*, unsigned __int8)) FUNC_CRunningScript__GetPointerToScriptVariable )(this, variableType);
}

// Returns condition result
inline bool CRunningScript::GetConditionResult()
{
	return this -> condResult;
}

// Returns pointer to local variable pointed by offset and array index as well as multiplier.
void CRunningScript::GetPointerToLocalArrayElement(__int16 off, __int16 idx, unsigned __int8 mul)
{
	((void (__thiscall*)(CRunningScript*, __int16, __int16, unsigned __int8)) FUNC_CRunningScript__GetPointerToLocalArrayElement )(this, off, idx, mul);
}

// Collects parameters
void CRunningScript::CollectParameters(__int16 count)
{
	((void (__thiscall*)(CRunningScript*, __int16)) FUNC_CRunningScript__CollectParameters )(this, count);
}

// Collects parameter and returns it.
tScriptVarValue CRunningScript::CollectNextParameterWithoutIncreasingPC()
{
    return ((tScriptVarValue (__thiscall*)(CRunningScript*))FUNC_CRunningScript__CollectNextParameterWithoutIncreasingPC)(this);
}

// Collects string parameter
void CRunningScript::ReadTextLabelFromScript(char *pBuffer, unsigned __int8 nBufferLength)
{
	((void (__thiscall*)(CRunningScript*, char *, unsigned __int8)) FUNC_CRunningScript__ReadTextLabelFromScript )(this, pBuffer, nBufferLength);
}

// Stores parameters
void CRunningScript::StoreParameters(__int16 count)
{
	((void (__thiscall*)(CRunningScript*, __int16)) FUNC_CRunningScript__StoreParameters )(this, count);
}

// Collects parameters and puts them to local variables of new script
void CRunningScript::ReadParametersForNewlyStartedScript(CRunningScript* pNewScript)
{
	((void (__thiscall*)(CRunningScript*, CRunningScript*)) FUNC_CRunningScript__ReadParametersForNewlyStartedScript )(this, pNewScript);
}

// Sets instruction pointer, used in GOTO-like commands
void CRunningScript::UpdatePC(__int32 newIP)
{
	((void (__thiscall*)(CRunningScript*, __int32)) FUNC_CRunningScript__UpdatePC )(this, newIP);
}

// Updates comparement flag, used in conditional commands
void CRunningScript::UpdateCompareFlag(bool state)
{
	((void (__thiscall*)(CRunningScript*, bool)) FUNC_CRunningScript__UpdateCompareFlag )(this, state);
}

// Terminates a script
void CRunningScript::ShutDownThisScript()
{
	((void (__thiscall*)(CRunningScript*)) FUNC_CRunningScript__ShutDownThisScript )(this);
}

// Performs death arrest check
void CRunningScript::DoDeatharrestCheck()
{
	((void (__thiscall*)(CRunningScript*)) FUNC_CRunningScript__DoDeatharrestCheck )(this);
}

// Processes running script
void CRunningScript::Process()
{
	((void (__thiscall*)(CRunningScript*)) FUNC_CRunningScript__Process )(this);
}

// Adds script to list
void CRunningScript::AddScriptToList(CRunningScript ** list)
{
	((void (__thiscall*)(CRunningScript*, CRunningScript **)) FUNC_CRunningScript__AddScriptToList )(this, list);
}

// Removes script from list
void CRunningScript::RemoveScriptFromList(CRunningScript ** list)
{
	((void (__thiscall*)(CRunningScript*, CRunningScript **)) FUNC_CRunningScript__RemoveScriptFromList )(this, list);
}

// Returns state of pad button.
short CRunningScript::GetPadState(unsigned short playerIndex, unsigned short buttonID)
{
	return ((short (__thiscall*)(CRunningScript*, unsigned short, unsigned short)) FUNC_CRunningScript__GetPadState )(this, playerIndex, buttonID);
}

// Command handlers
char CRunningScript::ProcessCommands_0To99(eCommandName commandID)
{
	return ((char (__thiscall*)(CRunningScript*, eCommandName)) FUNC_CRunningScript__ProcessCommands_0To99 )(this, commandID);
}

char CRunningScript::ProcessCommands_100To199(eCommandName commandID)
{
	return ((char (__thiscall*)(CRunningScript*, eCommandName)) FUNC_CRunningScript__ProcessCommands_100To199 )(this, commandID);
}

char CRunningScript::ProcessCommands_200To299(eCommandName commandID)
{
	return ((char (__thiscall*)(CRunningScript*, eCommandName)) FUNC_CRunningScript__ProcessCommands_200To299 )(this, commandID);
}

char CRunningScript::ProcessCommands_300To399(eCommandName commandID)
{
	return ((char (__thiscall*)(CRunningScript*, eCommandName)) FUNC_CRunningScript__ProcessCommands_300To399 )(this, commandID);
}

char CRunningScript::ProcessCommands_400To499(eCommandName commandID)
{
	return ((char (__thiscall*)(CRunningScript*, eCommandName)) FUNC_CRunningScript__ProcessCommands_400To499 )(this, commandID);
}

char CRunningScript::ProcessCommands_500To599(eCommandName commandID)
{
	return ((char (__thiscall*)(CRunningScript*, eCommandName)) FUNC_CRunningScript__ProcessCommands_500To599 )(this, commandID);
}

char CRunningScript::ProcessCommands_600To699(eCommandName commandID)
{
	return ((char (__thiscall*)(CRunningScript*, eCommandName)) FUNC_CRunningScript__ProcessCommands_600To699 )(this, commandID);
}

char CRunningScript::ProcessCommands_700To799(eCommandName commandID)
{
	return ((char (__thiscall*)(CRunningScript*, eCommandName)) FUNC_CRunningScript__ProcessCommands_700To799 )(this, commandID);
}

char CRunningScript::ProcessCommands_800To899(eCommandName commandID)
{
	return ((char (__thiscall*)(CRunningScript*, eCommandName)) FUNC_CRunningScript__ProcessCommands_800To899 )(this, commandID);
}

char CRunningScript::ProcessCommands_900To999(eCommandName commandID)
{
	return ((char (__thiscall*)(CRunningScript*, eCommandName)) FUNC_CRunningScript__ProcessCommands_900To999 )(this, commandID);
}

char CRunningScript::ProcessCommands_1000To1099(eCommandName commandID)
{
	return ((char (__thiscall*)(CRunningScript*, eCommandName)) FUNC_CRunningScript__ProcessCommands_1000To1099 )(this, commandID);
}

char CRunningScript::ProcessCommands_1100To1199(eCommandName commandID)
{
	return ((char (__thiscall*)(CRunningScript*, eCommandName)) FUNC_CRunningScript__ProcessCommands_1100To1199 )(this, commandID);
}

char CRunningScript::ProcessCommands_1200To1299(eCommandName commandID)
{
	return ((char (__thiscall*)(CRunningScript*, eCommandName)) FUNC_CRunningScript__ProcessCommands_1200To1299 )(this, commandID);
}

char CRunningScript::ProcessCommands_1300To1399(eCommandName commandID)
{
	return ((char (__thiscall*)(CRunningScript*, eCommandName)) FUNC_CRunningScript__ProcessCommands_1300To1399 )(this, commandID);
}

char CRunningScript::ProcessCommands_1400To1499(eCommandName commandID)
{
	return ((char (__thiscall*)(CRunningScript*, eCommandName)) FUNC_CRunningScript__ProcessCommands_1400To1499 )(this, commandID);
}

char CRunningScript::ProcessCommands_1500To1599(eCommandName commandID)
{
	return ((char (__thiscall*)(CRunningScript*, eCommandName)) FUNC_CRunningScript__ProcessCommands_1500To1599 )(this, commandID);
}

char CRunningScript::ProcessCommands_1600To1699(eCommandName commandID)
{
	return ((char (__thiscall*)(CRunningScript*, eCommandName)) FUNC_CRunningScript__ProcessCommands_1600To1699 )(this, commandID);
}

char CRunningScript::ProcessCommands_1700To1799(eCommandName commandID)
{
	return ((char (__thiscall*)(CRunningScript*, eCommandName)) FUNC_CRunningScript__ProcessCommands_1700To1799 )(this, commandID);
}

char CRunningScript::ProcessCommands_1800To1899(eCommandName commandID)
{
	return ((char (__thiscall*)(CRunningScript*, eCommandName)) FUNC_CRunningScript__ProcessCommands_1800To1899 )(this, commandID);
}

char CRunningScript::ProcessCommands_1900To1999(eCommandName commandID)
{
	return ((char (__thiscall*)(CRunningScript*, eCommandName)) FUNC_CRunningScript__ProcessCommands_1900To1999 )(this, commandID);
}

char CRunningScript::ProcessCommands_2000To2099(eCommandName commandID)
{
	return ((char (__thiscall*)(CRunningScript*, eCommandName)) FUNC_CRunningScript__ProcessCommands_2000To2099 )(this, commandID);
}

char CRunningScript::ProcessCommands_2100To2199(eCommandName commandID)
{
	return ((char (__thiscall*)(CRunningScript*, eCommandName)) FUNC_CRunningScript__ProcessCommands_2100To2199 )(this, commandID);
}

char CRunningScript::ProcessCommands_2200To2299(eCommandName commandID)
{
	return ((char (__thiscall*)(CRunningScript*, eCommandName)) FUNC_CRunningScript__ProcessCommands_2200To2299 )(this, commandID);
}

char CRunningScript::ProcessCommands_2300To2399(eCommandName commandID)
{
	return ((char (__thiscall*)(CRunningScript*, eCommandName)) FUNC_CRunningScript__ProcessCommands_2300To2399 )(this, commandID);
}

char CRunningScript::ProcessCommands_2400To2499(eCommandName commandID)
{
	return ((char (__thiscall*)(CRunningScript*, eCommandName)) FUNC_CRunningScript__ProcessCommands_2400To2499 )(this, commandID);
}

char CRunningScript::ProcessCommands_2500To2599(eCommandName commandID)
{
	return ((char (__thiscall*)(CRunningScript*, eCommandName)) FUNC_CRunningScript__ProcessCommands_2500To2599 )(this, commandID);
}

char CRunningScript::ProcessCommands_2600To2699(eCommandName commandID)
{
	return ((char (__thiscall*)(CRunningScript*, eCommandName)) FUNC_CRunningScript__ProcessCommands_2600To2699 )(this, commandID);
}

// Processes commands that check if car is in specified area.
void CRunningScript::CarInAreaCheckCommand(eCommandName commandID)
{
	((void (__thiscall*)(CRunningScript*, eCommandName)) FUNC_CRunningScript__CarInAreaCheckCommand )(this, commandID);
}

// Processes commands that check if char is in specified area.
void CRunningScript::CharInAreaCheckCommand(eCommandName commandID)
{
	((void (__thiscall*)(CRunningScript*, eCommandName)) FUNC_CRunningScript__CharInAreaCheckCommand )(this, commandID);
}

// Processes commands that locate a vehicle
void CRunningScript::LocateCarCommand(eCommandName commandID)
{
	((void (__thiscall*)(CRunningScript*, eCommandName)) FUNC_CRunningScript__LocateCarCommand )(this, commandID);
}

// Processes commands where char locates car
void CRunningScript::LocateCharCarCommand(eCommandName commandID)
{
	((void (__thiscall*)(CRunningScript*, eCommandName)) FUNC_CRunningScript__LocateCharCarCommand )(this, commandID);
}

// Processes commands where char locates another char
void CRunningScript::LocateCharCharCommand(eCommandName commandID)
{
	((void (__thiscall*)(CRunningScript*, eCommandName)) FUNC_CRunningScript__LocateCharCharCommand )(this, commandID);
}

// Processes commands where char locates map point
void CRunningScript::LocateCharCommand(eCommandName commandID)
{
	((void (__thiscall*)(CRunningScript*, eCommandName)) FUNC_CRunningScript__LocateCharCommand )(this, commandID);
}

// Processes commands where char locates object
void CRunningScript::LocateCharObjectCommand(eCommandName commandID)
{
	((void (__thiscall*)(CRunningScript*, eCommandName)) FUNC_CRunningScript__LocateCharObjectCommand )(this, commandID);
}

// Processes commands where object locates map point
void CRunningScript::LocateObjectCommand(eCommandName commandID)
{
	((void (__thiscall*)(CRunningScript*, eCommandName)) FUNC_CRunningScript__LocateObjectCommand )(this, commandID);
}



// Processes commands that check if object is in area
void CRunningScript::ObjectInAreaCheckCommand(eCommandName commandID)
{
	((void (__thiscall*)(CRunningScript*, eCommandName)) FUNC_CRunningScript__ObjectInAreaCheckCommand )(this, commandID);
}

// Checks if ped type conforms to valid ped types.
bool CRunningScript::ThisIsAValidRandomPed(ePedType pedType, bool civilian, bool gang, bool criminal)
{
	return ((bool (__thiscall*)(CRunningScript*, ePedType, bool, bool, bool)) FUNC_CRunningScript__ThisIsAValidRandomPed )(this, pedType, civilian, gang, criminal);
}

// Converted from thiscall char* CRunningScript::GetPointerToLocalVariable(uint varid) 0x463CA0 
char* CRunningScript::GetPointerToLocalVariable(unsigned int varid) {
    return plugin::CallMethodAndReturn<char*, 0x463CA0, CRunningScript *, unsigned int>(this, varid);
}

// Converted from thiscall bool CRunningScript::IsPedDead(CPed *pPed) 0x464D70 
bool CRunningScript::IsPedDead(CPed* pPed) {
    return plugin::CallMethodAndReturn<bool, 0x464D70, CRunningScript *, CPed*>(this, pPed);
}

// Converted from thiscall void CRunningScript::SetCharCoordinates(CPed *pPed,float x_coord,float y_coord,float z_coord,bool bWarpGang,bool bOffset) 0x464DC0 
void CRunningScript::SetCharCoordinates(CPed* pPed, float x_coord, float y_coord, float z_coord, bool bWarpGang, bool bOffset) {
    plugin::CallMethod<0x464DC0, CRunningScript *, CPed*, float, float, float, bool, bool>(this, pPed, x_coord, y_coord, z_coord, bWarpGang, bOffset);
}

// Converted from thiscall void CRunningScript::GivePedScriptedTask(int ped,CTask *task,int opcode) 0x465C20 
void CRunningScript::GivePedScriptedTask(int ped, CTask* task, int opcode) {
    plugin::CallMethod<0x465C20, CRunningScript *, int, CTask*, int>(this, ped, task, opcode);
}

// Converted from thiscall void CRunningScript::PlayAnimScriptCommand(int opcodeid) 0x470150 
void CRunningScript::PlayAnimScriptCommand(int opcodeid) {
    plugin::CallMethod<0x470150, CRunningScript *, int>(this, opcodeid);
}

// Converted from thiscall void CRunningScript::GetCorrectPedModelIndexForEmergencyServiceType(int pedtype,int *pModelId) 0x464F50 
void CRunningScript::GetCorrectPedModelIndexForEmergencyServiceType(int pedtype, int* pModelId) {
    plugin::CallMethod<0x464F50, CRunningScript *, int, int*>(this, pedtype, pModelId);
}
