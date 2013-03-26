#ifndef LAYERINSPECTORDIALOG_H
#define LAYERINSPECTORDIALOG_H

#include <QDialog>
#include <QAbstractListModel>

class IntensityCurveBox;
class ContrastInspector;
class GlobalUIModel;
class LayerListQtModel;
class EventBucket;

namespace Ui {
    class LayerInspectorDialog;
}




class LayerInspectorDialog : public QDialog
{
    Q_OBJECT

public:
    explicit LayerInspectorDialog(QWidget *parent = 0);
    ~LayerInspectorDialog();

  void SetModel(GlobalUIModel *model);

public slots:

  void onLayerSelection();

  virtual void onModelUpdate(const EventBucket &bucket);


private slots:
  void on_actionSaveSelectedLayerAs_triggered();

private:
    Ui::LayerInspectorDialog *ui;
    GlobalUIModel *m_Model;
    LayerListQtModel *m_LayerListModel;
};

#endif // LAYERINSPECTORDIALOG_H
