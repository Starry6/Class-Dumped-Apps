@interface MLCPaddingGPUDeviceOps : MLCGPUDeviceOps
@property (nonatomic) NSInteger paddingType;
@property (nonatomic) float paddingValue;
@property (nonatomic) @ paddingGradientAccumulateKernel;
- (void).cxx_destruct;
- (int)paddingType;
- (id)initWithForwardKernel:gradientKernel:;
- (void)setPaddingType:;
- (float)paddingValue;
- (void)setPaddingValue:;
- (id)paddingGradientAccumulateKernel;
- (void)setPaddingGradientAccumulateKernel:;
+ (id)deviceOpsWithForwardKernel:gradientKernel:;
@end
