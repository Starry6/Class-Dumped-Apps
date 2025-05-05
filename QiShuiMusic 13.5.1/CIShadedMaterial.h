@interface CIShadedMaterial : CIFilter
@property (nonatomic) CIImage inputImage;
@property (nonatomic) CIImage inputShadingImage;
@property (nonatomic) NSNumber inputScale;
- (id)inputScale;
- (void)setInputScale:;
- (id)inputImage;
- (void)setInputImage:;
- (id)outputImage;
- (id)inputShadingImage;
- (void)setInputShadingImage:;
- (id)_CIShadedmaterial;
- (id)_CIShadedmaterial_0;
+ (id)customAttributes;
@end
