#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Image {
	double quality;
	double freshness;
	double raiting;
};

struct Params {
	double a;
	double b;
	double c;
};

class FunctionParts {
public:
	FunctionParts(char new_sign, double new_value) {
		sign = new_sign;
		value = new_value;
	}
	void Invert() {
		if (sign == '+') sign = '-'; else sign = '+';
	}
	double Apply(double inp_val) const {
		if (sign == '+') {
			cout << inp_val << '+' << value << endl;
			inp_val += value;
		}
		else {
			cout << inp_val << '-' << value << endl;
			inp_val -= value;
		}
		return inp_val;
	}
private:
	char sign;
	double value;
};

class Function {
public:
	double Apply(double value) const {
		for (auto part : parts) value = part.Apply(value);
		return value;
	}
	void Invert() {
		for (auto& part : parts) part.Invert();
		reverse(begin(parts), end(parts));
	}
	void AddPart(char sign, double value) { parts.push_back({ sign, value }); }
private:
	vector<FunctionParts> parts;
};

Function MakeWeightFunction(const Params& params, const Image& image) {
	Function f;
	f.AddPart('-', image.freshness * params.a + params.b);
	f.AddPart('+', image.raiting * params.c);
	return f;
}

double ComputeImageWeight(const Params& params, const Image& image) {
	Function f = MakeWeightFunction(params, image);
	return f.Apply(image.quality);
}

double ComputeQualityByWeight(const Params& params, const Image& image, double weight) {
	Function f = MakeWeightFunction(params, image);
	f.Invert();
	return f.Apply(weight);
}


int main() {
	Image image = { 10, 2, 6 };
	Params params = { 4, 2, 6 };

	//cout << ComputeImageWeight(params, image) << endl;
	cout << ComputeQualityByWeight(params, image, 36) << endl;

	int x;  cin >> x;

	return 0;
}