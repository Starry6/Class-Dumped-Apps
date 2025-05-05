@interface RedEyeSpecular : CIFilter
@property (nonatomic) CIImage inputImage;
@property (nonatomic) CIImage inputSource;
@property (nonatomic) CIImage inputSpecularMask;
@property (nonatomic) NSNumber inputSpecularThreshold;
@property (nonatomic) NSNumber inputSpecIntensity;
@property (nonatomic) NSNumber inputDebugFlag;
- (id)inputImage;
- (void)setInputImage:;
- (id)outputImage;
- (id)inputSource;
- (void)setInputSource:;
- (id)inputSpecularMask;
- (void)setInputSpecularMask:;
- (id)inputSpecularThreshold;
- (void)setInputSpecularThreshold:;
- (id)inputSpecIntensity;
- (void)setInputSpecIntensity:;
- (id)inputDebugFlag;
- (void)setInputDebugFlag:;
@end
