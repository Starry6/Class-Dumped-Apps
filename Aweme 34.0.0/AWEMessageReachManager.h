@interface AWEMessageReachManager : NSObject
@property (nonatomic) AWEMessageReachOpportunityManager opportunityManager;
@property (nonatomic) <AWEMessageReachDataAbilityProtocol> dataAbility;
@property (nonatomic) <AWEMessageReachChannelAbilityProtocol> channelAbility;
@property (nonatomic) MMKV mmkv;
@property (nonatomic) AWEMessageReachColdLaunchCacheModel cacheModel;
@property (nonatomic) BOOL coldLaunchRecoveryTimeArrived;
@property (nonatomic) <AWEMessageReachRecordAbilityProtocol> recordAbility;
@property (nonatomic) <AWEMessageReachSideBarStrategyAbilityProtocol> sideBarStrategyAbility;
@property (nonatomic) <AWEMessageReachShowCountInnerAbilityProtocol> dotShowCountManager;
@property (nonatomic) NSArray componentScenes;
@property (nonatomic) AWEMessageReachMonitorManager monitorManager;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)monitorManager;
- (void)setMonitorManager:;
- (void)setMmkv:;
- (id)mmkv;
- (BOOL)messageReachFollowChannelComponentMoveEnable;
- (id)channelAbility;
- (BOOL)messageReachChannelComponentMoveEnable:;
- (BOOL)coldLaunchRecoveryTimeArrived;
- (id)sideBarStrategyAbility;
- (id)recordAbility;
- (BOOL)messageReachTabDotMoveEnable:;
- (id)dotShowCountManager;
- (BOOL)messageReachComponentMoveEnable;
- (id)componentScenes;
- (void)setupDotAbilityConfig;
- (void)setupBasicAbilityConfig;
- (void)setUpComponentScenes;
- (void)setUpCache;
- (void)setOpportunityManager:;
- (void)setDataAbility:;
- (void)setRecordAbility:;
- (void)setSideBarStrategyAbility:;
- (void)setDotShowCountManager:;
- (void)setChannelAbility:;
- (id)dataAbility;
- (void)messageReachColdLaunchLoadCacheComplete;
- (id)opportunityManager;
- (void)appDidFinishColdLaunch;
- (void)setColdLaunchRecoveryTimeArrived:;
- (void)setComponentScenes:;
- (void)setup;
- (void).cxx_destruct;
- (void)setCacheModel:;
- (id)cacheModel;
- (void)setupConfig;
+ (id)shareInstance;
@end
