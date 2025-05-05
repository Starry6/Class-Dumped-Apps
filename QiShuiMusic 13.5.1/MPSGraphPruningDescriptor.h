@interface MPSGraphPruningDescriptor : NSObject
@property (nonatomic) q pruningMetric;
@property (nonatomic) q pruningStructure;
@property (nonatomic) float sparsity;
- (id)copyWithZone:;
- (float)sparsity;
- (void)setSparsity:;
- (long long)pruningMetric;
- (void)setPruningMetric:;
- (long long)pruningStructure;
- (void)setPruningStructure:;
+ (id)descriptorWithPruningMetric:sparsityFormat:sparsity:;
@end
