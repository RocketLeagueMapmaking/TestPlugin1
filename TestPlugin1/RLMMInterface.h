#pragma once
#include <QtPlugin>
#include <QString>

class QWidget;

class RLMMInterface {
public:
	virtual ~RLMMInterface() = default;

	virtual QWidget& widget() = 0;
	virtual QString name() const = 0;
	virtual int version() const = 0;

	virtual void initialize() = 0;
	virtual void start() = 0;
	virtual void stop() = 0;
	virtual void shutdown() = 0;
};

Q_DECLARE_INTERFACE(RLMMInterface, "com.rlmm.RLMMInterface/1.0")