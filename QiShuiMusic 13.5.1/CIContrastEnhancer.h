@interface CIContrastEnhancer : CIFilter
@property (nonatomic) NSNumber inputIntensity;
@property (nonatomic) NSNumber inputLocal;
@property (nonatomic) NSNumber inputScale;
@property (nonatomic) NSNumber inputPerceptual;
- (id)inputScale;
- (void)setInputScale:;
- (id)outputImage;
- (id)inputIntensity;
- (void)setInputIntensity:;
- (id)inputPerceptual;
- (void)setInputPerceptual:;
- (id)inputLocal;
- (void)setInputLocal:;
+ (id)customAttributes;
@end
