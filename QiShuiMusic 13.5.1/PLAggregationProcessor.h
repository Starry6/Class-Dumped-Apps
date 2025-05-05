@interface PLAggregationProcessor : NSObject
@property (nonatomic) NSCalendar calendar;
@property (nonatomic) NSMutableDictionary curatedAssetCountByMomentUUID;
- (void)setCalendar:;
- (id)init;
- (id)calendar;
- (void).cxx_destruct;
- (id)sortedNeighborMomentClustersOfMomentClusters:forAllMomentClusters:;
- (BOOL)_shouldAggregateMoment:;
- (id)processAggregationsWithSortedMomentClusters:momentsContainedInOtherHighlights:progressBlock:;
- (id)_aggregationMomentClustersForMomentClusters:;
- (id)curatedAssetCountByMomentUUID;
- (void)setCuratedAssetCountByMomentUUID:;
+ (void)restoreDefaultEnablement;
+ (unsigned long long)maximumNumberOfDaysPerAggregation;
+ (unsigned long long)maximumNumberOfAssetsPerMoment;
+ (void)setEnabled:;
+ (unsigned long long)maximumNumberOfAssetsPerAggregation;
+ (BOOL)isEnabled;
@end
