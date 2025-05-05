@interface PLFrequentLocationProcessor : NSObject
+ (id)processFrequentLocationsWithItems:locationsOfInterest:progressBlock:;
+ (double)_computeWeekendFrequencyForMoments:;
+ (id)_clustersFromLocationsOfInterest:forItems:remainingItemsToCluster:progressBlock:;
+ (id)_finalClustersFromCoarseClusters:progressBlock:;
+ (id)_coarseClustersForItems:progressBlock:;
@end
