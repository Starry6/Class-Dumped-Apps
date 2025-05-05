@interface CILocalLightFilter : CIFilter
- (id)outputImage;
- (id)_shadowKernel;
- (id)_polyKernel;
+ (id)customAttributes;
@end
