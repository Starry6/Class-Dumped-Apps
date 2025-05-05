@interface CIOpacity : CIFilter
@property (nonatomic) CIImage inputImage;
@property (nonatomic) NSNumber inputOpacity;
- (id)inputImage;
- (void)setInputImage:;
- (id)outputImage;
- (id)inputOpacity;
- (void)setInputOpacity:;
+ (id)customAttributes;
@end
