@interface CIRingBlur : CIFilter
@property (nonatomic) CIImage inputImage;
@property (nonatomic) NSNumber inputRadius;
@property (nonatomic) NSNumber inputPointCount;
- (void)setInputRadius:;
- (id)inputPointCount;
- (id)inputImage;
- (void)setInputImage:;
- (void)setInputPointCount:;
- (id)inputRadius;
- (id)outputImage;
+ (id)customAttributes;
@end
