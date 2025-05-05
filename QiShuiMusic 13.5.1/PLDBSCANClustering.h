@interface PLDBSCANClustering : PLDataDensityClustering
- (id)performWithDataset:progressBlock:;
- (id)_expandClusterForObject:dataset:objectsMappedToCluster:visitedObjects:distancesFlatMatrix:neighbors:;
- (id)_neighborsAtIndex:withDistancesFlatMatrix:datasetSize:;
@end
