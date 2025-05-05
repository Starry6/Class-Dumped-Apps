@interface CITriangleKaleidoscope : CIFilter
@property (nonatomic) CIImage inputImage;
@property (nonatomic) CIVector inputPoint;
@property (nonatomic) NSNumber inputSize;
@property (nonatomic) NSNumber inputRotation;
@property (nonatomic) NSNumber inputDecay;
- (void)setInputPoint:;
- (id)inputImage;
- (id)inputSize;
- (void)setInputImage:;
- (id)outputImage;
- (id)inputRotation;
- (id)inputDecay;
- (void)setInputDecay:;
- (void)setInputSize:;
- (id)_colorKernel;
- (id)_geomKernel;
- (void)setInputRotation:;
- (id)inputPoint;
+ (id)customAttributes;
@end
