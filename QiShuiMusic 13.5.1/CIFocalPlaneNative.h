@interface CIFocalPlaneNative : CIFilter
- (id)outputImage;
- (id)_focalPlanePreProcessorKernel;
- (id)_focalPlanePreProcessorKernelPow2;
+ (id)customAttributes;
@end
