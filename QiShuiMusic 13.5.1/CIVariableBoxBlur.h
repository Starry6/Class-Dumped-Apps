@interface CIVariableBoxBlur : CIFilter
@property (nonatomic) CIImage inputImage;
@property (nonatomic) CIImage inputRadiusImage;
@property (nonatomic) NSNumber inputScale;
- (id)inputScale;
- (void)setInputScale:;
- (id)inputImage;
- (void)setInputImage:;
- (id)outputImage;
- (id)inputRadiusImage;
- (void)setInputRadiusImage:;
+ (id)customAttributes;
@end
