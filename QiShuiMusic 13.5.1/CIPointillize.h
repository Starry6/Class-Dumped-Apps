@interface CIPointillize : CIFilter
@property (nonatomic) CIImage inputImage;
@property (nonatomic) NSNumber inputRadius;
@property (nonatomic) CIVector inputCenter;
- (void)setInputCenter:;
- (void)setInputRadius:;
- (id)inputImage;
- (void)setInputImage:;
- (id)inputCenter;
- (id)inputRadius;
- (id)outputImage;
- (id)_CIPointillize;
+ (id)customAttributes;
@end
