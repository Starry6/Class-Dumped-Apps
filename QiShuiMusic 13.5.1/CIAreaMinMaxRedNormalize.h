@interface CIAreaMinMaxRedNormalize : CIFilter
@property (nonatomic) CIImage inputImage;
@property (nonatomic) CIVector inputExtent;
- (id)inputImage;
- (void)setInputImage:;
- (id)outputImage;
- (id)inputExtent;
- (void)setInputExtent:;
+ (id)customAttributes;
@end
