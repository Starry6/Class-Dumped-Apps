@interface MPSCNNGroupNormalization : MPSCNNKernel
@property (nonatomic) float epsilon;
@property (nonatomic) <MPSCNNGroupNormalizationDataSource> dataSource;
- (unsigned long long)maxBatchSize;
- (id)initWithCoder:device:;
- (id)copyWithZone:device:;
- (void)dealloc;
- (id)resultStateForSourceImage:sourceStates:destinationImage:;
- (void)setEpsilon:;
- (id)debugDescription;
- (float)epsilon;
- (void)encodeWithCoder:;
- (id)dataSource;
- (id)temporaryResultStateForCommandBuffer:sourceImage:sourceStates:destinationImage:;
- (id)initWithDevice:dataSource:;
- (void)reloadGammaAndBetaFromDataSource;
- (void)reloadGammaAndBetaWithCommandBuffer:gammaAndBetaState:;
- (void)reloadDataSource:;
- (void)reloadDataSourceDeprecated:;
+ (id)libraryInfo:;
@end
