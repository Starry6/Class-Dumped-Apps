@interface CIPaletteCentroid : CIFilter
@property (nonatomic) CIImage inputImage;
@property (nonatomic) CIImage inputPaletteImage;
@property (nonatomic) NSNumber inputPerceptual;
- (id)inputImage;
- (void)setInputImage:;
- (id)outputImage;
- (id)inputPaletteImage;
- (void)setInputPaletteImage:;
- (id)inputPerceptual;
- (void)setInputPerceptual:;
- (id)_kernelClusterMask;
+ (id)customAttributes;
@end
