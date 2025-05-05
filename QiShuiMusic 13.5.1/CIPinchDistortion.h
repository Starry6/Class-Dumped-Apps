@interface CIPinchDistortion : CIFilter
@property (nonatomic) CIImage inputImage;
@property (nonatomic) CIVector inputCenter;
@property (nonatomic) NSNumber inputRadius;
@property (nonatomic) NSNumber inputScale;
- (void)setInputCenter:;
- (void)setInputRadius:;
- (id)inputScale;
- (void)setInputScale:;
- (id)inputImage;
- (void)setInputImage:;
- (id)inputCenter;
- (id)inputRadius;
- (id)outputImage;
- (id)_pinchDistortionScaleLT1;
- (id)_pinchDistortionScaleGE1;
- (id)computeDOD:scale:;
+ (id)customAttributes;
@end
