﻿#ifndef SARIBBONCOLORTOOLBUTTON_H
#define SARIBBONCOLORTOOLBUTTON_H
#include "SARibbonToolButton.h"
#include "SARibbonGlobal.h"
/**
 * @brief Refer to the color setting button in the office, which can display the color below the icon(参考office的颜色设置按钮，可以显示颜色在图标下方)
 */
class SA_RIBBON_EXPORT SARibbonColorToolButton : public SARibbonToolButton
{
    Q_OBJECT
    SA_RIBBON_DECLARE_PRIVATE(SARibbonColorToolButton)
public:
    SARibbonColorToolButton(QWidget* parent = Q_NULLPTR);
    SARibbonColorToolButton(QAction* defaultAction, QWidget* parent = Q_NULLPTR);
    ~SARibbonColorToolButton();
    //获取颜色
    QColor getColor() const;
public slots:
    //设置颜色,会发射colorChanged信号
    void setColor(const QColor& c);
private slots:
    void onButtonClicked(bool checked = false);
signals:
    /**
     * @brief 颜色被点击的响应
     * @param color
     */
    void colorClicked(const QColor& color, bool checked = false);
    /**
     * @brief 颜色改变信号
     * @param color
     */
    void colorChanged(const QColor& color);

protected:
    //绘制图标
    virtual void paintIcon(QPainter& p, const QStyleOptionToolButton& opt, const QRect& iconDrawRect) Q_DECL_OVERRIDE;
};

#endif  // SARIBBONCOLORTOOLBUTTON_H
