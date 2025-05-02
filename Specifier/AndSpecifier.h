#pragma once
#include "Specifier.h"

class AndSpecifier : public Specifier {
private:
	Specifier* first;
	Specifier* second;
public:
	AndSpecifier(Specifier* a, Specifier* b) : first(a), second(b) {}
	bool specify(Product p) override {
		return first->specify(p) && second->specify(p);
	}
};
