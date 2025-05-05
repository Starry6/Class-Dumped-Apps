@interface CIPersonSegmentation : CIFilter
@property (nonatomic) CIImage inputImage;
@property (nonatomic) NSNumber inputQualityLevel;
- (id)inputImage;
- (void)setInputImage:;
- (id)outputImage;
- (id)inputQualityLevel;
- (void)setInputQualityLevel:;
+ (id)customAttributes;
@end
