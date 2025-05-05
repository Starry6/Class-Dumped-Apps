@interface PLCompactMomentClustering : NSObject
- (void)dealloc;
- (id)_clusterAssetsWithUnusableLocation:;
- (id)_shareStateByAssetUUIDFromAssets:momentHasMixedOwnership:;
- (id)_assetClustersFromDataClusters:;
- (id)_mergeAssetClustersWithLocation:withAssetClustersWithoutLocation:;
- (id)createAssetClustersForAssetsInDay:;
- (id)_clusterAssetsWithUsableLocation:;
- (id)newAssetClusterFromAssetsSortedByDate:;
- (id)assetsByLocationTypeFromAssets:locationsOfInterest:;
- (id)initWithDataManager:;
- (id)_runDBSCANClusteringWithAssets:;
- (id)_processedLocationTypeByAssetUUIDFromAssets:;
@end
