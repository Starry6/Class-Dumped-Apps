@interface TSPKApiStatisticsSubscriber : NSObject
@property (nonatomic) NSMutableDictionary statisticsAPIDict;
@property (nonatomic) TSPKStatisticConfig statisticConfig;
@property (nonatomic) NSObject<OS_dispatch_source> timer;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)canHandelEvent:;
- (id)statisticConfig;
- (id)getAllStates;
- (id)hanleEvent:;
- (void)reportStatisticEvent:;
- (void)reportThenRemoveTargetKey:;
- (void)reportThenStoreHostStates:eventData:hostStates:;
- (void)setStatisticConfig:;
- (void)setStatisticsAPIDict:;
- (id)statisticsAPIDict;
- (id)init;
- (void)dealloc;
- (id)uniqueId;
- (void)setTimer:;
- (void).cxx_destruct;
- (id)timer;
@end
