@interface CINoiseReduction : CIFilter
@property (nonatomic) CIImage inputImage;
@property (nonatomic) NSNumber inputNoiseLevel;
@property (nonatomic) NSNumber inputSharpness;
- (id)inputSharpness;
- (void)setInputSharpness:;
- (id)inputImage;
- (void)setInputImage:;
- (id)outputImage;
- (id)_CINoiseReduction;
- (id)inputNoiseLevel;
- (void)setInputNoiseLevel:;
+ (id)customAttributes;
@end
