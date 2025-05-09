@interface AWEFeedConfigureTimeCostModel : NSObject
@property (nonatomic) double totalDuration;
@property (nonatomic) double updatePlayerDuration;
@property (nonatomic) double updateAllSubViewsDuration;
@property (nonatomic) double updateContainerDataDuration;
@property (nonatomic) NSDictionary configElementDurations;
@property (nonatomic) double configBottomDuration;
@property (nonatomic) double dispatchUpdateAllSubViewsDuration;
@property (nonatomic) double updateViewConstraintsDuration;
@property (nonatomic) double splitDataDuration;
@property (nonatomic) double layoutElementViewsDuration;
@property (nonatomic) double activateInfoDataDuration;
@property (nonatomic) double afterSetDataDuration;
@property (nonatomic) BOOL preload;
- (double)updatePlayerDuration;
- (void)setUpdatePlayerDuration:;
- (double)updateAllSubViewsDuration;
- (void)setUpdateAllSubViewsDuration:;
- (double)updateContainerDataDuration;
- (void)setUpdateContainerDataDuration:;
- (id)configElementDurations;
- (void)setConfigElementDurations:;
- (double)configBottomDuration;
- (void)setConfigBottomDuration:;
- (double)dispatchUpdateAllSubViewsDuration;
- (void)setDispatchUpdateAllSubViewsDuration:;
- (double)updateViewConstraintsDuration;
- (void)setUpdateViewConstraintsDuration:;
- (double)splitDataDuration;
- (void)setSplitDataDuration:;
- (double)layoutElementViewsDuration;
- (void)setLayoutElementViewsDuration:;
- (double)activateInfoDataDuration;
- (void)setActivateInfoDataDuration:;
- (double)afterSetDataDuration;
- (void)setAfterSetDataDuration:;
- (id)init;
- (double)totalDuration;
- (BOOL)preload;
- (void).cxx_destruct;
- (void)setTotalDuration:;
- (void)setPreload:;
@end
