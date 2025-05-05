@interface CIExposureAdjust : CIFilter
@property (nonatomic) CIImage inputImage;
@property (nonatomic) NSNumber inputEV;
- (id)inputImage;
- (void)setInputImage:;
- (id)inputEV;
- (BOOL)_isIdentity;
- (void)setInputEV:;
- (id)outputImage;
+ (id)customAttributes;
@end
