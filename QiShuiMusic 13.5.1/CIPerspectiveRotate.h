@interface CIPerspectiveRotate : CIFilter
@property (nonatomic) CIImage inputImage;
@property (nonatomic) NSNumber inputFocalLength;
@property (nonatomic) NSNumber inputPitch;
@property (nonatomic) NSNumber inputYaw;
@property (nonatomic) NSNumber inputRoll;
@property (nonatomic) {?=[3]} outputTransform;
- (id)inputImage;
- (void)setInputImage:;
- (id).cxx_construct;
- (id)outputImage;
- (void)computeCameraIntrinsics;
- (id)outputTransform;
- (id)inputFocalLength;
- (void)setInputFocalLength:;
- (id)inputPitch;
- (void)setInputPitch:;
- (id)inputYaw;
- (void)setInputYaw:;
- (id)inputRoll;
- (void)setInputRoll:;
+ (id)customAttributes;
@end
