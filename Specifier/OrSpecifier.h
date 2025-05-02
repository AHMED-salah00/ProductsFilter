#pragma once
#include "Specifier.h"

class OrSpecifier : public Specifier {
private:
	Specifier* first;
	Specifier* second;
public:
	OrSpecifier(Specifier* a, Specifier* b) : first(a), second(b) {}
	bool specify(Product p) override {
		return first->specify(p) || second->specify(p);
	}
};
