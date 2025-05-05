@interface IESECLiveClientTriggersPlugin : NSObject
@property (nonatomic) IESECLiveContext liveContext;
@property (nonatomic) NSMutableArray triggerEventList;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setLiveContext:;
- (void)checkTriggerEventListWithEvent:;
- (void)configTriggerListBySetting;
- (id)consumedEventsSet;
- (void)destroyPlugin;
- (BOOL)dispatchInBackgroundThread;
- (BOOL)everReportedDurationWithUid:authorID:triggerInterval:triggerEvent:;
- (id)getTriggerHistoryInfoWithUid:authorID:triggerEvent:;
- (id)initPluginWithLiveContext:;
- (id)initWithLiveContext:;
- (id)liveContext;
- (void)receive:;
- (void)reportToServerWithTriggerKey:featuresList:extraInfo:;
- (void)setTriggerEventList:;
- (id)triggerEventList;
- (void)updateTriggerHistoryInfoWithUid:authorID:triggerEvent:;
- (void)uplinkLiveDutraionWithTrigger:sourceEvent:;
- (void)dealloc;
- (void).cxx_destruct;
@end
