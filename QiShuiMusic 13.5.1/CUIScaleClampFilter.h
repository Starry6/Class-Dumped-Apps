@interface CUIScaleClampFilter : CIFilter
@property (nonatomic) CIImage inputImage;
@property (nonatomic) NSNumber inputScale;
- (id)inputScale;
- (void)setInputScale:;
- (id)inputImage;
- (void)setInputImage:;
- (id)_kernel;
- (id)outputImage;
+ (id)customAttributes;
@end
