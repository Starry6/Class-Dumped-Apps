@interface CIReductionFilter : CIFilter
@property (nonatomic) CIImage inputImage;
@property (nonatomic) CIVector inputExtent;
- (id)_reduceCrop;
- (id)inputImage;
- (void)setInputImage:;
- (id)outputImage;
- (id)inputExtent;
- (void)setInputExtent:;
- (id)offsetAndCrop;
+ (id)customAttributes;
@end
