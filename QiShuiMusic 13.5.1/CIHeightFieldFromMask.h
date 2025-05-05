@interface CIHeightFieldFromMask : CIFilter
@property (nonatomic) CIImage inputImage;
@property (nonatomic) NSNumber inputRadius;
- (void)setInputRadius:;
- (id)inputImage;
- (void)setInputImage:;
- (id)inputRadius;
- (id)outputImage;
- (id)_CIResetalpha;
+ (id)customAttributes;
@end
