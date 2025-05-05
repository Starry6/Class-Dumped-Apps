@interface PLRegionsHierarchicalClustering : PLRegionsClustering
- (id)performWithDataset:progressBlock:;
- (id)_processData:;
- (id)_postProcessClusters:;
@end
