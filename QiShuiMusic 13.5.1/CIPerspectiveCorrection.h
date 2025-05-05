@interface CIPerspectiveCorrection : CIFilter
@property (nonatomic) CIImage inputImage;
@property (nonatomic) CIVector inputTopLeft;
@property (nonatomic) CIVector inputTopRight;
@property (nonatomic) CIVector inputBottomRight;
@property (nonatomic) CIVector inputBottomLeft;
@property (nonatomic) NSNumber inputCrop;
- (id)inputImage;
- (void)setInputImage:;
- (id)_kernel;
- (id)outputImage;
- (id)inputTopLeft;
- (void)setInputTopLeft:;
- (id)inputTopRight;
- (void)setInputTopRight:;
- (id)inputBottomRight;
- (void)setInputBottomRight:;
- (id)inputBottomLeft;
- (void)setInputBottomLeft:;
- (id)inputCrop;
- (void)setInputCrop:;
+ (id)customAttributes;
@end
