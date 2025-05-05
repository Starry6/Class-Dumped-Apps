@interface CIPerspectiveTransformWithExtent : CIFilter
@property (nonatomic) CIImage inputImage;
@property (nonatomic) CIVector inputExtent;
@property (nonatomic) CIVector inputTopLeft;
@property (nonatomic) CIVector inputTopRight;
@property (nonatomic) CIVector inputBottomRight;
@property (nonatomic) CIVector inputBottomLeft;
- (id)inputImage;
- (void)setInputImage:;
- (id)_kernel;
- (id)outputImage;
- (id)inputExtent;
- (void)setInputExtent:;
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
