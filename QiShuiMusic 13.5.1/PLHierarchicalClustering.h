@interface PLHierarchicalClustering : PLDataClustering
@property (nonatomic) double threshold;
@property (nonatomic) Q k;
@property (nonatomic) Q linkage;
@property (nonatomic) BOOL usesSortedDataRelativeDistanceCache;
@property (nonatomic) BOOL reportsProgressInDistancesMatrixCalculation;
- (double)threshold;
- (id)init;
- (unsigned long long)k;
- (id)performWithDataset:progressBlock:;
- (void)setThreshold:;
- (void)setK:;
- (unsigned long long)_clustroidIndexForClusters:numberOfObjects:distances:relativeDistanceCache:;
- (id)_createRelativeDistanceCacheForDataset:;
- (unsigned long long)linkage;
- (void)setLinkage:;
- (BOOL)usesSortedDataRelativeDistanceCache;
- (void)setUsesSortedDataRelativeDistanceCache:;
- (BOOL)reportsProgressInDistancesMatrixCalculation;
- (void)setReportsProgressInDistancesMatrixCalculation:;
@end
