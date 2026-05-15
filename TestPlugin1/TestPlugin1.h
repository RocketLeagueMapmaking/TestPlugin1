#pragma once
#include "RLMMInterface.h"
#include <QObject>
#include <QWidget>
#include <QPushButton>

class ExamplePlugin : public QObject, public RLMMInterface {
	Q_OBJECT
	Q_PLUGIN_METADATA(IID "com.rlmm.RLMMInterface/1.0")
	Q_INTERFACES(RLMMInterface)

public:
	ExamplePlugin();
	virtual ~ExamplePlugin() = default;

	QWidget& widget() override;
	QString name() const override;
	int version() const override;

	void initialize() override;
	void start() override;
	void stop() override;
	void shutdown() override;

private:
	QWidget mWidget;
	QPushButton mButton;
};