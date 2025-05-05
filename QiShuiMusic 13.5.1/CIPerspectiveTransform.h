@interface CIPerspectiveTransform : CIFilter
@property (nonatomic) CIImage inputImage;
@property (nonatomic) CIVector inputTopLeft;
@property (nonatomic) CIVector inputTopRight;
@property (nonatomic) CIVector inputBottomRight;
@property (nonatomic) CIVector inputBottomLeft;
- (id)inputImage;
- (void)setInputImage:;
- (id)outputImage;
- (id)inputTopLeft;
- (void)setInputTopLeft:;
- (id)inputTopRight;
- (void)setInputTopRight:;
- (id)inputBottomRight;
- (void)setInputBottomRight:;
- (id)inputBottomLeft;
- (void)setInputBottomLeft:;
+ (id)customAttributes;
@end
