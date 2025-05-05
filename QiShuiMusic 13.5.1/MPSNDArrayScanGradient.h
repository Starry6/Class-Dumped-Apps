@interface MPSNDArrayScanGradient : MPSNDArrayUnaryGradientKernel
@property (nonatomic) NSInteger operation;
@property (nonatomic) Q axis;
@property (nonatomic) BOOL exclusive;
@property (nonatomic) BOOL reverse;
- (id)initWithCoder:device:;
- (int)operation;
- (void)setAxis:;
- (BOOL)reverse;
- (unsigned long long)axis;
- (id)initWithDevice:;
- (id)initWithDevice:axis:operation:exclusive:reverse:;
- (void)setExclusive:;
- (void)setReverse:;
- (BOOL)exclusive;
- (unsigned long long)kernelDimensionalityForSourceArrays:;
+ (id)libraryInfo:;
@end
