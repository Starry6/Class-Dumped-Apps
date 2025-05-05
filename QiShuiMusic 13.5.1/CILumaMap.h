@interface CILumaMap : CIFilter
@property (nonatomic) CIImage inputImage;
- (void)setDefaults;
- (void)dealloc;
- (id)inputImage;
- (void)setInputImage:;
- (id)_kernel;
- (id)outputImage;
- (id)lumaTable;
+ (id)customAttributes;
@end
