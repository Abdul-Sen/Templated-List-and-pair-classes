#pragma once

template<typename A, typename B>
class Pair {
	A key;
	B value;
public:
	Pair(const A& ui_key, const B& ui_value) {
		key = ui_key;
		value = ui_value;
	}

	Pair() {
		//safe state?
	}
	const A& getKey() const {
		return key;
	}
	
	const B& getValue() const {
		return value;
	}

};