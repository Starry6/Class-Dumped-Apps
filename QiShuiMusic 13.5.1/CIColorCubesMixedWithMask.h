@interface CIColorCubesMixedWithMask : CIFilter
@property (nonatomic) CIImage inputImage;
@property (nonatomic) CIImage inputMaskImage;
@property (nonatomic) NSNumber inputCubeDimension;
@property (nonatomic) NSData inputCube0Data;
@property (nonatomic) NSData inputCube1Data;
@property (nonatomic) @ inputColorSpace;
@property (nonatomic) NSNumber inputExtrapolate;
- (id)inputColorSpace;
- (void)setInputColorSpace:;
- (id)inputMaskImage;
- (void)setInputMaskImage:;
- (id)inputImage;
- (void)setInputImage:;
- (id)outputImage;
- (BOOL)_checkInputs;
- (id)inputCubeDimension;
- (void)setInputCubeDimension:;
- (id)inputExtrapolate;
- (void)setInputExtrapolate:;
- (id)inputCube0Data;
- (void)setInputCube0Data:;
- (id)inputCube1Data;
- (void)setInputCube1Data:;
+ (id)customAttributes;
@end
