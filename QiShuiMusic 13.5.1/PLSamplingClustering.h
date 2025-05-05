@interface PLSamplingClustering : PLDataDensityClustering
@property (nonatomic) Q numberOfClusters;
- (id)performWithDataset:progressBlock:;
- (unsigned long long)numberOfClusters;
- (void)setNumberOfClusters:;
@end
