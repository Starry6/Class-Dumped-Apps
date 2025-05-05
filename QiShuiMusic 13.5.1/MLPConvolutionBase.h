@interface MLPConvolutionBase : MLPImageLayer
@property (nonatomic) Q kernelWidth;
@property (nonatomic) Q kernelHeight;
@property (nonatomic) Q kernelStride;
- (void)setKernelHeight:;
- (unsigned long long)kernelHeight;
- (unsigned long long)kernelWidth;
- (void)setKernelWidth:;
- (unsigned long long)computeOutputLengthWithInputLength:kernelWidth:kernelStride:;
- (unsigned long long)kernelStride;
- (void)setKernelStride:;
@end
