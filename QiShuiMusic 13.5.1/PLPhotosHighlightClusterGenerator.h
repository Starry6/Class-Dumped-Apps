@interface PLPhotosHighlightClusterGenerator : NSObject
@property (nonatomic) <PLMomentGenerationDataManagement> dataManager;
@property (nonatomic) NSArray allMomentsSorted;
@property (nonatomic) PLFrequentLocationManager frequentLocationManager;
@property (nonatomic) NSDateInterval recentHighlightsDateInterval;
@property (nonatomic) PLLocalCreationDateCreator localCreationDateCreator;
- (id)_remainingHighlightClusterWithMoments:;
- (id)_tripHighlightClustersForMoments:tripType:;
- (id)_recentHighlightClusterWithRecentMoments:;
- (id)allMomentsSorted;
- (id)_remainingMomentClustersWithMomentsSortedByDate:;
- (id)recentHighlightsDateInterval;
- (id)frequentLocationManager;
- (id)_tripsInMoments:;
- (id)initWithDataManager:frequentLocationManager:recentHighlightDateInterval:localCreationDateCreator:;
- (id)highlightClustersIntersectingMoments:includeAllTripHighlightClusters:;
- (id)_recentHighlightClusterWithRecentMoments:intersectingMoments:;
- (id)dataManager;
- (void).cxx_destruct;
- (BOOL)_isRecent:;
- (id)_recentMoments;
- (id)recentMomentsInMomentClusters:;
- (id)localCreationDateCreator;
- (id)_remainingHighlightClustersWithClusters:intersectingMoments:;
- (id)_dayMomentClustersWithMomentsSortedByDate:;
- (id)_aggregationsInMoments:unavailableMoments:intersectingMoments:;
- (id)_aggregationHighlightClustersForMoments:;
@end
