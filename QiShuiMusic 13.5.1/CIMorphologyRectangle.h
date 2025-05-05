@interface CIMorphologyRectangle : CIFilter
@property (nonatomic) CIImage inputImage;
@property (nonatomic) NSNumber inputWidth;
@property (nonatomic) NSNumber inputHeight;
- (id)inputImage;
- (void)setInputImage:;
- (BOOL)_isIdentity;
- (id)outputImage;
- (id)inputWidth;
- (void)setInputWidth:;
- (id)inputHeight;
- (void)setInputHeight:;
- (BOOL)_doMinimum;
+ (id)customAttributes;
@end
