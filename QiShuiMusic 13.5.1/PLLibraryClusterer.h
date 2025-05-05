@interface PLLibraryClusterer : NSObject
@property (nonatomic) NSCalendar calendar;
@property (nonatomic) PLLocalCreationDateCreator localCreationDateCreator;
@property (nonatomic) PLFrequentLocationManager frequentLocationManager;
@property (nonatomic) <PLLibraryClustererDelegate> delegate;
- (id)calendar;
- (id)_momentsSeparatedOnLocationTypeWithMoments:;
- (id)locationBasedMomentClustersForMomentsSortedByDate:;
- (void)processMomentsWithAssets:;
- (id)_momentsSplitWithinDayWithMoments:;
- (void)setDelegate:;
- (id)frequentLocationManager;
- (id)_momentsGroupedByDayWithMomentsSortedByDate:;
- (BOOL)_shouldSplitMomentsWithTimeDistance:locationDistance:;
- (void)_mergeMomentsIntoClustersBasedOnTimeWithMoments:clusters:;
- (void)_createMomentsForDailyAssets:currentMomentExistingMomentData:;
- (id)_momentsWithLocationClusteredByPossibleSource:;
- (id)delegate;
- (id)_startDateComponentsForMomentCluster:;
- (void).cxx_destruct;
- (id)initWithLocalCreationDateCreator:frequentLocationManager:;
- (id)momentClustersForMomentsSortedByDate:;
- (id)localCreationDateCreator;
- (id)_momentsSplitBetweenOriginatorsWithMoments:;
@end
