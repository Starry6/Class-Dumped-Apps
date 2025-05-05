@interface CIColorCurves : CIFilter
@property (nonatomic) CIImage inputImage;
@property (nonatomic) NSData inputCurvesData;
@property (nonatomic) CIVector inputCurvesDomain;
@property (nonatomic) @ inputColorSpace;
- (void)dealloc;
- (id)inputColorSpace;
- (void)setInputColorSpace:;
- (id)inputImage;
- (void)setInputImage:;
- (id)_kernel;
- (id)outputImage;
- (BOOL)_checkInputs;
- (void)setInputCurvesData:;
- (id)curvesImage;
- (id)inputCurvesDomain;
- (void)setInputCurvesDomain:;
- (id)inputCurvesData;
+ (id)customAttributes;
@end
