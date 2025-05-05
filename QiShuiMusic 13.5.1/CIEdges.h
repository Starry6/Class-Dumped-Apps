@interface CIEdges : CIFilter
@property (nonatomic) CIImage inputImage;
@property (nonatomic) NSNumber inputIntensity;
- (id)inputImage;
- (void)setInputImage:;
- (id)outputImage;
- (id)inputIntensity;
- (void)setInputIntensity:;
- (id)_CIEdges;
+ (id)customAttributes;
@end
