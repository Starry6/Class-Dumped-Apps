@interface CIStraightenFilter : CIFilter
@property (nonatomic) CIImage inputImage;
@property (nonatomic) NSNumber inputAngle;
- (id)inputAngle;
- (id)inputImage;
- (void)setInputImage:;
- (void)setInputAngle:;
- (id)outputImage;
+ (id)customAttributes;
@end
