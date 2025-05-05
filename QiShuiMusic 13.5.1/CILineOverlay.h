@interface CILineOverlay : CIFilter
@property (nonatomic) CIImage inputImage;
- (id)inputImage;
- (void)setInputImage:;
- (id)outputImage;
- (id)_CISobelEdges;
- (id)_CIComicNoiseReduction;
- (id)_CIColorControls;
+ (id)customAttributes;
@end
