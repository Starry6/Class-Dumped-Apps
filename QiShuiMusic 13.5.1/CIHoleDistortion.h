@interface CIHoleDistortion : CIFilter
@property (nonatomic) CIImage inputImage;
@property (nonatomic) CIVector inputCenter;
@property (nonatomic) NSNumber inputRadius;
- (void)setInputCenter:;
- (void)setInputRadius:;
- (id)inputImage;
- (void)setInputImage:;
- (BOOL)_isIdentity;
- (id)inputCenter;
- (id)inputRadius;
- (id)outputImage;
- (id)_colorKernel;
- (id)_geomKernel;
- (id)computeDOD;
+ (id)customAttributes;
@end
