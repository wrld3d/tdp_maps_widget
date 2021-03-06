#ifndef tdp_maps_widget_MapWidget_h
#define tdp_maps_widget_MapWidget_h

#include <QOpenGLWidget>

#include "tdp_maps_widget/Globals.h"
#include "tp_maps/Map.h"


namespace tdp_maps_widget
{
class TDP_MAPS_WIDGET_SHARED_EXPORT MapWidget : public QOpenGLWidget
{
  Q_OBJECT

public:
  //################################################################################################
  MapWidget(QWidget* parent = nullptr);

  //################################################################################################
  ~MapWidget();

  //################################################################################################
  tp_maps::Map* map();

  //################################################################################################
  QSize minimumSizeHint() const;

  //################################################################################################
  QSize sizeHint() const;

protected:
  //################################################################################################
  virtual void initializeGL();

  //################################################################################################
  virtual void resizeGL(int width, int height);

  //################################################################################################
  virtual void paintGL();

  //################################################################################################
  virtual void mousePressEvent(QMouseEvent* event);

  //################################################################################################
  virtual void mouseMoveEvent(QMouseEvent* event);

  //################################################################################################
  virtual void mouseReleaseEvent(QMouseEvent* event);

  //################################################################################################
  virtual void wheelEvent(QWheelEvent* event);

  //################################################################################################
  virtual void mouseDoubleClickEvent(QMouseEvent* event);

private:
  struct Private;
  Private* d;
  friend struct Private;
};
}
#endif

