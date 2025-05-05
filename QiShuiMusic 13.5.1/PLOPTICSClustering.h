@interface PLOPTICSClustering : PLDataDensityClustering
- (id)performWithDataset:progressBlock:;
- (void).cxx_destruct;
- (id)extractRootClusters:inOriginalDataset:inProgressBlock:;
- (id)extractSubClusters:inDataset:parentIndex:inProgressBlock:;
- (id)preprocessData:;
- (id)orderedDatasetByReachabilityDistance:;
- (id)prepareOrderedDatasetIndexRange:inDataset:;
- (void)updateNeighbors:forIndex:;
- (long long)updateReachibilityDistance:forIndex:;
@end
