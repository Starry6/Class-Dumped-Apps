@interface CIDepthOfField : CIFilter
@property (nonatomic) CIImage inputImage;
- (id)inputImage;
- (void)setInputImage:;
- (id)outputImage;
- (id)_CITiltShift;
- (id)_DistanceColored;
- (id)_CIAlphaNormalize;
+ (id)customAttributes;
@end
