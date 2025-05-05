@interface RedEyeRecolor : CIFilter
@property (nonatomic) CIImage inputSource;
@property (nonatomic) CIImage inputMask;
@property (nonatomic) NSNumber inputNoiseAmount;
@property (nonatomic) NSNumber inputBrightness;
@property (nonatomic) NSNumber inputRecovery;
@property (nonatomic) CIVector inputExtent;
@property (nonatomic) NSNumber inputWhiteCutoff;
@property (nonatomic) NSNumber inputChroma;
- (void)setInputBrightness:;
- (id)inputBrightness;
- (id)outputImage;
- (id)inputExtent;
- (void)setInputExtent:;
- (id)inputSource;
- (void)setInputSource:;
- (id)kernelRepair;
- (id)kernelRecovery;
- (id)inputMask;
- (void)setInputMask:;
- (id)inputNoiseAmount;
- (void)setInputNoiseAmount:;
- (id)inputRecovery;
- (void)setInputRecovery:;
- (id)inputWhiteCutoff;
- (void)setInputWhiteCutoff:;
- (id)inputChroma;
- (void)setInputChroma:;
@end
