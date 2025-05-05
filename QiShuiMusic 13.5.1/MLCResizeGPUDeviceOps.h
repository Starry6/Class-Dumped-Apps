@interface MLCResizeGPUDeviceOps : MLCGPUDeviceOps
@property (nonatomic) float scaleFactorX;
@property (nonatomic) float scaleFactorY;
@property (nonatomic) BOOL alignCorners;
@property (nonatomic) BOOL isSpecialCasedNearestForwardKernel;
- (id)initWithForwardKernel:gradientKernel:;
- (float)scaleFactorX;
- (void)setScaleFactorX:;
- (float)scaleFactorY;
- (void)setScaleFactorY:;
- (BOOL)alignCorners;
- (void)setAlignCorners:;
- (BOOL)isSpecialCasedNearestForwardKernel;
- (void)setIsSpecialCasedNearestForwardKernel:;
+ (id)deviceOpsWithForwardKernel:gradientKernel:;
@end
