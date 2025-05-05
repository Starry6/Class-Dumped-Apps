@interface CIPalettize : CIFilter
@property (nonatomic) CIImage inputImage;
@property (nonatomic) CIImage inputPaletteImage;
@property (nonatomic) NSNumber inputPerceptual;
- (id)inputImage;
- (void)setInputImage:;
- (id)outputImage;
- (id)_kernelApplyPalette;
- (id)inputPaletteImage;
- (void)setInputPaletteImage:;
- (id)inputPerceptual;
- (void)setInputPerceptual:;
+ (id)customAttributes;
@end
