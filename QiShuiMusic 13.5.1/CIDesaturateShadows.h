@interface CIDesaturateShadows : CIFilter
@property (nonatomic) NSNumber inputIntensity;
@property (nonatomic) NSNumber inputThreshold;
@property (nonatomic) NSNumber inputSoftness;
- (id)outputImage;
- (id)inputIntensity;
- (void)setInputIntensity:;
- (id)inputThreshold;
- (void)setInputThreshold:;
- (id)inputSoftness;
- (void)setInputSoftness:;
+ (id)customAttributes;
@end
