@interface CIBokehBlur : CIFilter
@property (nonatomic) CIImage inputImage;
- (void)setValue:forKey:;
- (void)dealloc;
- (id)inputImage;
- (void)setInputImage:;
- (id)outputImage;
+ (id)customAttributes;
@end
