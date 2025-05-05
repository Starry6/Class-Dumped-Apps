@interface CIDiscBlur : CIFilter
@property (nonatomic) CIImage inputImage;
@property (nonatomic) NSNumber inputRadius;
- (void)setValue:forKey:;
- (void)dealloc;
- (void)setInputRadius:;
- (id)inputImage;
- (void)setInputImage:;
- (id)inputRadius;
- (id)outputImage;
+ (id)customAttributes;
@end
