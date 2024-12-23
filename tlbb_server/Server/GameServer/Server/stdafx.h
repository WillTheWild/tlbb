// stdafx.h : Standard system include files header file
// These are the files that are frequently used but not often changed
// Specific include files for different projects
//

#pragma once


#ifdef __WINDOWS__
#define WIN32_LEAN_AND_MEAN		// Exclude rarely-used stuff from Windows headers
#define _USE_32BIT_TIME_T
#include <tchar.h>
#endif


#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <malloc.h>
#include <string.h>
#include <map>
#include "stdarg.h"

#include "BaseType.h"
#include "Type.h"
#include "DB_Struct.h"
#include "Config.h"
#include "FileDef.h"
#include "Ini.h"
#include "Log.h"
#include "Thread.h"
#include "File.h"
#include "TimeManager.h"
#include "GameStruct_Finger.h"
#include "Packet.h"
#include "PacketFactory.h"
#include "GameStruct_Impact.h"
#include "GameStruct_Skill.h"
#include "GameDefine_Attr.h"
#include "GameDefine.h"
#include "GameStruct_Relation.h"
#include "GameUtil.h"

#include "SocketInputStream.h"
#include "SocketOutputStream.h"


#include "ClientManager.h"
#include "SceneManager.h"
#include "ThreadManager.h"
#include "PlayerPool.h"
#include "PacketFactoryManager.h"
#include "ServerManager.h"
#include "WorldManager.h"
#include "MachineManager.h"
#include "ObjManager.h"
#include "GUIDManager.h"
#include "GameTable.h"
#include "MonsterPool.h"
#include "PetPool.h"
#include "PlatformPool.h"
#include "SpecialPool.h"
#include "LogicManager.h"
#include "SpecialObjLogic.h"
#include "ImpactLogic.h"
#include "Impact_Core.h"
#include "DataRecords.h"
#include "Obj_Character.h"
#include "SkillInfo.h"
#include "DynamicSceneManager.h"
#include "Obj_Human.h"
#include "Scene.h"
#include "GamePlayer.h"
#include "ItemOperator.h"
#include "ItemManager.h"
#include "ItemRuler.h"
#include "AbilityManager.h"
#include "Ability.h"
#include "HumanItemLogic.h"
#include "ShopManager.h"
#include "Team.h"
#include "HumanItemContainer.h"
#include "HumanPetContainer.h"
#include "Attributes.h"
#include "HumanRelation.h"
#include "ScriptLogic.h"

#include "AI_Character.h"
#include "AI_Human.h"
#include "AI_Monster.h"
#include "AI_Pet.h"

