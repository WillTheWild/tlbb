1.����Ľṹ
	Obj_Human -> Obj_Character -> Obj_Dynamic -> Obj
	Obj_Moster -> Obj_Character -> Obj_Dynamic -> Obj
	Obj_Pet -> Obj_Character -> Obj_Dynamic -> Obj
	Obj_ItemBox -> Obj_Static -> Obj
	Obj_Platfrom -> Obj_Static -> Obj
	Obj_Special -> Obj_Static -> Obj
2.���������
	enum ObjType
	{
		OBJ_TYPE_INVALID,			// ��Ч
		OBJ_TYPE_HUMAN,				// ���
		OBJ_TYPE_MONSTER,			// ս����NPC�����
		OBJ_TYPE_PET,				// ����
		OBJ_TYPE_ITEM_BOX,			// �����
		OBJ_TYPE_PLATFORM,			// ����̨
		OBJ_TYPE_SPECIAL,			// ���⣨�磬���壩
		OBJ_TYPE_NUMBERS
	};
