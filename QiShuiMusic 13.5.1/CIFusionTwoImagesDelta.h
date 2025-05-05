@interface CIFusionTwoImagesDelta : CIFilter
@property (nonatomic) CIImage inputImage;
@property (nonatomic) CIImage inputSecondaryImage;
@property (nonatomic) NSNumber inputProtectStrength;
@property (nonatomic) NSNumber inputApertureScaling;
@property (nonatomic) CIVector inputAdditive;
@property (nonatomic) CIVector inputSubtractive;
@property (nonatomic) NSNumber inputMaxBlur;
- (id)inputImage;
- (void)setInputImage:;
- (id)outputImage;
- (id)kernel;
- (id)inputApertureScaling;
- (id)inputMaxBlur;
- (id)inputSecondaryImage;
- (void)setInputSecondaryImage:;
- (id)inputProtectStrength;
- (void)setInputProtectStrength:;
- (void)setInputApertureScaling:;
- (id)inputAdditive;
- (void)setInputAdditive:;
- (id)inputSubtractive;
- (void)setInputSubtractive:;
- (void)setInputMaxBlur:;
@end
