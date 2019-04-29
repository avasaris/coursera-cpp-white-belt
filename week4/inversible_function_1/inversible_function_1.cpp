//#include <iostream>
//
//using namespace std;
//
//struct Image {
//	double quality;
//	double freshness;
//	double raiting;
//};
//
//struct Params {
//	double a;
//	double b;
//	double c;
//};
//
//// weight = quality - freshness * a + b;
//
//double ComputeImageWeightOld(const Params& params, const Image& image) {
//	double weight = image.quality - image.freshness * params.a + params.b;
//	return weight;
//}
//
//double ComputeImageWeight(const Params& params, const Image& image) {
//	double weight = image.quality - image.freshness * params.a + params.b;
//	weight += image.raiting * params.c;
//	return weight;
//}
//
//double ComputeQualityByWeight(const Params& params, const Image& image, double weight) {
//	double quality = weight;
//	quality -= image.raiting * params.c;
//	quality += image.freshness * params.a - params.b;
//	return quality;
//}
//
//
///*int main() {
//
//
//	return 0;
//}*/