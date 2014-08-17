#ifndef VECTOR2DWIDGET_H
#define VECTOR2DWIDGET_H

#include "XGuiGlobal.h"
#include "QtHelper/XQWidget.h"
#include "Math/XMathVector.h"

class QVBoxLayout;
class XFloatWidget;

class EKSGUI_EXPORT XVector2DWidget : public QWidget
    {
Q_OBJECT
public:
    XVector2DWidget( QWidget *parent = 0, Eks::Vector2D val=Eks::Vector2D::Zero(), QStringList labels=QStringList() );
    XVector2DWidget( Eks::Vector2D val, Eks::Vector2D min, Eks::Vector2D max, QStringList labels=QStringList(), QWidget *parent = 0);

    void setMaximum( Eks::Vector2D );
    Eks::Vector2D maximum() const;
    void setMinimum( Eks::Vector2D );
    Eks::Vector2D minimum() const;
    Eks::Vector2D range() const;
    Eks::Vector2D value() const;

    bool isReadOnly() const;

Q_SIGNALS:
    void valueChanged( Eks::Vector2D );

public Q_SLOTS:
    void setValue( Eks::Vector2D );
    void setReadOnly(bool);

protected:
    void keyPressEvent( QKeyEvent * );
    void keyReleaseEvent( QKeyEvent * );

private Q_SLOTS:
    void setValues();
private:
    XFloatWidget *_x, *_y;
    bool _setting;
    };

#endif // VECTORWIDGET_H
