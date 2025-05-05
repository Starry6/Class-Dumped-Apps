@interface CIVignetteEffect : CIFilter
@property (nonatomic) CIImage inputImage;
@property (nonatomic) CIVector inputCenter;
@property (nonatomic) NSNumber inputRadius;
@property (nonatomic) NSNumber inputIntensity;
@property (nonatomic) NSNumber inputFalloff;
- (void)setInputCenter:;
- (void)setInputRadius:;
- (id)inputImage;
- (void)setInputImage:;
- (BOOL)_isIdentity;
- (id)inputCenter;
- (id)inputRadius;
- (id)outputImage;
- (id)inputIntensity;
- (void)setInputIntensity:;
- (id)inputFalloff;
- (void)setInputFalloff:;
- (id)_poskernel;
- (id)_negkernel;
+ (id)customAttributes;
@end
