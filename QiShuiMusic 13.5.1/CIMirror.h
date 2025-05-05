@interface CIMirror : CIFilter
@property (nonatomic) CIImage inputImage;
@property (nonatomic) CIVector inputPoint;
@property (nonatomic) NSNumber inputAngle;
- (void)setInputPoint:;
- (id)inputAngle;
- (id)inputImage;
- (void)setInputImage:;
- (void)setInputAngle:;
- (id)_kernel;
- (id)outputImage;
- (id)computeDOD:tst:off:mtx:;
- (id)inputPoint;
+ (id)customAttributes;
@end
