@interface MPSNDArrayRandomState : MPSNDArrayUnaryKernel
@property (nonatomic) Q counterStride;
@property (nonatomic) Q skipElements;
@property (nonatomic) BOOL incrementKey;
- (id)initWithCoder:device:;
- (id)copyWithZone:device:;
- (void)encodeWithCoder:;
- (id)initWithDevice:;
- (void)setIncrementKey:;
- (void)setCounterStride:;
- (void)setSkipElements:;
- (unsigned long long)kernelDimensionalityForSourceArrays:;
- (unsigned long long)counterStride;
- (unsigned long long)skipElements;
- (BOOL)incrementKey;
+ (id)libraryInfo:;
@end
