@interface AWEHPChannelDynamicSchedulingManager : NSObject
@property (nonatomic) NSMutableDictionary channelDictionary;
@property (nonatomic) AWEHPChannelDynamicSchedulingTimingStrategy tabChangeStrategy;
@property (nonatomic) AWEHPChannelDynamicSchedulingTimingStrategy dangerMemoryStrategy;
@property (nonatomic) AWEHPChannelDynamicSchedulingTimingStrategy restrictMemoryStrategy;
@property (nonatomic) NSMutableArray strategyQueue;
@property (nonatomic) NSMutableArray retryStrategyQueue;
@property (nonatomic) <AWEHPChannelDynamicSchedulingTimingStrategyProtocol> releaseStrategy;
- (id)releaseStrategy;
- (void)setReleaseStrategy:;
- (void)setChannelDictionary:;
- (void)setStrategyQueue:;
- (void)setRetryStrategyQueue:;
- (void)p_initTopChannelDynamicSchedulingStrategy;
- (void)p_topChannelControllerViewDidInit:;
- (id)channelDictionary;
- (void)p_monitorTopChannelController:withModel:;
- (void)p_tryReleaseChannelWithDangerMemory;
- (id)dangerMemoryStrategy;
- (void)p_triggerReleaseChannelWithStrategyContext:;
- (void)p_tryReleaseChannelWithRestrictMemory;
- (id)restrictMemoryStrategy;
- (void)p_tryReleaseChannelWithTabChange;
- (id)tabChangeStrategy;
- (void)p_retryFailStrategy;
- (id)retryStrategyQueue;
- (void)p_tryReleaseChannelWithStrategyContext:;
- (id)strategyQueue;
- (void)p_tryUseNextStrategyContext;
- (BOOL)p_checkFailReasonCanRetryWithError:;
- (BOOL)p_checkStrategyNeedRetryWithTriggerReason:;
- (BOOL)p_checkContentCanReleaseWithChannelModel:withError:;
- (id)p_getNeedTryReleaseChannelModels;
- (id)p_timingStrategyWithDic:;
- (void)setTabChangeStrategy:;
- (void)setDangerMemoryStrategy:;
- (void)setRestrictMemoryStrategy:;
- (void)hpTopChannelControllerViewDidLoad:;
- (void)hpTopChannelControllerViewDidResume:;
- (void)hpTopChannelControllerViewDidAppear:;
- (void)triggerDangerMemoryStrategy;
- (void)triggerRestrictMemoryStrategy;
- (void)triggerTabChangeStrategy;
- (void)triggerFailStrategy;
- (void).cxx_destruct;
+ (BOOL)channelDynamicSchedulingConfigEnableABTest;
+ (id)p_globalExcuseStrategy;
+ (id)sharedInstance;
@end
