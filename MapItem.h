#pragma once
#include<QGraphicsPixmapItem>
#include <QGraphicsSceneDragDropEvent>
#pragma warning(disable : 4828)
class MapItem:public QGraphicsPixmapItem
{
public:
	MapItem();
	//void mousePressEvent(QGraphicsSceneMouseEvent* event) override;
	void dragEnterEvent(QGraphicsSceneDragDropEvent* event)override;
	void dropEvent(QGraphicsSceneDragDropEvent* event) override;
	bool onfree;
};

