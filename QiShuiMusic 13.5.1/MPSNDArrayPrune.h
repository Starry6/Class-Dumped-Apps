@interface MPSNDArrayPrune : MPSNDArrayUnaryKernel
@property (nonatomic) float sparsity;
@property (nonatomic) NSInteger pruneMetric;
@property (nonatomic) NSInteger pruneStructure;
- (id)initWithCoder:device:;
- (id)initWithDevice:;
- (float)sparsity;
- (void)setSparsity:;
- (BOOL)supportsGradientForSourceIndex:;
- (int)pruneMetric;
- (void)setPruneMetric:;
- (int)pruneStructure;
- (void)setPruneStructure:;
+ (id)libraryInfo:;
@end
