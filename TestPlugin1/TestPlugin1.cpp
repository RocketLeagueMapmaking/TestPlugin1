#include "TestPlugin1.h"

#include <QVBoxLayout>

ExamplePlugin::ExamplePlugin() :
	mWidget(),
	mButton("Test", &mWidget) 
{
	auto* layout = new QVBoxLayout(&mWidget);
	layout->addWidget(&mButton);
}

QWidget& ExamplePlugin::widget() {
	return mWidget;
}

QString ExamplePlugin::name() const {
	return "Example Plugin";
}

int ExamplePlugin::version() const {
	return 1;
}