@interface CIKeystoneCorrection : CIFilter
@property (nonatomic) CIImage inputImage;
@property (nonatomic) NSNumber inputFocalLength;
@property (nonatomic) CIVector inputTopLeft;
@property (nonatomic) CIVector inputTopRight;
@property (nonatomic) CIVector inputBottomRight;
@property (nonatomic) CIVector inputBottomLeft;
@property (nonatomic) {?=[3]} outputTransform;
@property (nonatomic) CIFilter outputRotationFilter;
- (id)inputImage;
- (void)setInputImage:;
- (id).cxx_construct;
- (id)outputImage;
- (id)inputTopLeft;
- (void)setInputTopLeft:;
- (id)inputTopRight;
- (void)setInputTopRight:;
- (id)inputBottomRight;
- (void)setInputBottomRight:;
- (id)inputBottomLeft;
- (void)setInputBottomLeft:;
- (void)computeCameraIntrinsics;
- (id)outputTransform;
- (id)inputFocalLength;
- (void)setInputFocalLength:;
- (void)computeRotation;
- (id)outputRotationFilter;
+ (id)customAttributes;
@end
