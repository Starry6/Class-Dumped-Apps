@interface MPSNDArraySort : MPSNDArrayUnaryKernel
@property (nonatomic) Q axis;
@property (nonatomic) BOOL descending;
- (void)dealloc;
- (void)setAxis:;
- (unsigned long long)axis;
- (id)initWithDevice:;
- (void)setDescending:;
- (BOOL)descending;
- (unsigned long long)kernelDimensionalityForSourceArrays:;
- (id)initWithDevice:axis:descending:;
+ (id)libraryInfo:;
@end
