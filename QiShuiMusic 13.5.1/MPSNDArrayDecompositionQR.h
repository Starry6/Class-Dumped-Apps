@interface MPSNDArrayDecompositionQR : MPSNDArrayMultiaryKernel
@property (nonatomic) BOOL computeR;
@property (nonatomic) BOOL computeQ;
- (id)initWithDevice:;
- (BOOL)computeR;
- (void)setComputeR:;
- (BOOL)computeQ;
- (void)setComputeQ:;
+ (id)libraryInfo:;
@end
