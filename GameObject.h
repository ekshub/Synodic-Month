#pragma once

#include"RoleAni.h"
#include<QGraphicsPixmapItem>
#include "GameDefine.h"
class GameObject:public QGraphicsPixmapItem
{
public:
	enum ObjectType
	{
		OT_Monster1,
		OT_Monster2,
		OT_Tower1,
		OT_Tower2,
		OT_Tower3,
		OT_Tower4,
		OT_Tower5,
		OT_Tower6,
		OT_Tower7,
		OT_Tower8,
		OT_Tower9,
		OT_Tower1_Attack
	};
public:
	explicit GameObject(QObject*parent=nullptr);
	virtual ~GameObject();//����������
	int GetType();//��ȡ��������
	virtual void init(QPoint _Pos);//��ʼ��
	bool IsDead();//�Ƿ�����
	long int MaxHP;//������Ѫ��
	long int HP;//��������Ѫ��
	long int MP;//��������
	long int MaxMP;//������

protected:
	int mObjectType;//��������
	QPoint Pos;//����λ��
};
