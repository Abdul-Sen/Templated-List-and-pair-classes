#pragma once

template<typename T = int, int N = 0>
class List{
	T arr[N];
	int no_elements;
public:
	List() {
		no_elements = 0;
	}

	size_t size() const {
		return no_elements;
	}
	const T& operator[](int index) const {
		if(index <= N)
		return arr[index];
	}
	void operator+=(const T& NewElement) {
		if (no_elements != N)
		{
			arr[no_elements++] = NewElement;
		}
	}

};