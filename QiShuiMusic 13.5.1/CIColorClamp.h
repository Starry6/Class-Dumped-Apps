@interface CIColorClamp : CIFilter
@property (nonatomic) CIImage inputImage;
@property (nonatomic) CIVector inputMinComponents;
@property (nonatomic) CIVector inputMaxComponents;
- (id)inputImage;
- (void)setInputImage:;
- (id)_kernel;
- (id)outputImage;
- (id)_kernelAlphaPreserving;
- (id)inputMinComponents;
- (void)setInputMinComponents:;
- (id)inputMaxComponents;
- (void)setInputMaxComponents:;
+ (id)customAttributes;
@end
