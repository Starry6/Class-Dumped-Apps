@interface CIPhotoGrain : CIFilter
@property (nonatomic) CIImage inputImage;
@property (nonatomic) NSNumber inputISO;
@property (nonatomic) NSNumber inputAmount;
@property (nonatomic) NSNumber inputSeed;
- (void)setInputAmount:;
- (id)_grainBlendAndMixKernel;
- (id)inputAmount;
- (id)_interpolateGrainKernel;
- (id)inputImage;
- (void)setInputISO:;
- (void)setInputImage:;
- (id)inputISO;
- (void)setInputSeed:;
- (id)inputSeed;
- (id)outputImage;
- (id)_paddedTileKernel;
+ (id)customAttributes;
@end
