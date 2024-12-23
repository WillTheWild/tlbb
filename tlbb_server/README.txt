1.Structure of Objects
	Obj_Human -> Obj_Character -> Obj_Dynamic -> Obj
	Obj_Moster -> Obj_Character -> Obj_Dynamic -> Obj
	Obj_Pet -> Obj_Character -> Obj_Dynamic -> Obj
	Obj_ItemBox -> Obj_Static -> Obj
	Obj_Platfrom -> Obj_Static -> Obj
	Obj_Special -> Obj_Static -> Obj
2.Types of Objects
	enum ObjType
	{
		OBJ_TYPE_INVALID,			// Invalid
		OBJ_TYPE_HUMAN,				// Player
		OBJ_TYPE_MONSTER,			// Battle NPC and Monster
		OBJ_TYPE_PET,				// Pet
		OBJ_TYPE_ITEM_BOX,			// Loot Box
		OBJ_TYPE_PLATFORM,			// Workbench
		OBJ_TYPE_SPECIAL,			// Special (e.g., trap)
		OBJ_TYPE_NUMBERS
	};
