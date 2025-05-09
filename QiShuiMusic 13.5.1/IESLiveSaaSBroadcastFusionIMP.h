@interface IESLiveSaaSBroadcastFusionIMP : NSObject
@property (nonatomic) NSInteger showCount;
@property (nonatomic) BDXBridgeEventSubscriber bridgeEventSubscriber;
@property (nonatomic) q targetIndex;
@property (nonatomic) BOOL isHostPageClickOpenLiveInProgress;
@property (nonatomic) BOOL isGuidePageClickOpenLiveInProgress;
@property (nonatomic) BOOL isAudienceUpgradeWatchSceneProgress;
@property (nonatomic) BOOL isAudienceUpgradeDouyinAuthSceneProgress;
@property (nonatomic) BOOL isAudienceUpgradeFinish;
@property (nonatomic) IESLiveSaaSPBFusionPreconditionData fusionPrecondition;
@property (nonatomic) NSTimer fusionUpgradeShowTimer;
@property (nonatomic) Q currentScene;
@property (nonatomic) BOOL isInRoom;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)handleAudienceUpgradeWatchScene;
- (id)bridgeEventSubscriber;
- (void)clearFusionUpgradeShowTimer;
- (long long)daylyShowCount;
- (id)daylyfusionUpgradeShowCountKey;
- (BOOL)enableBroadcastFusion;
- (BOOL)enableFusionUpgrade;
- (id)fusionPrecondition;
- (id)fusionUpgradeShowCountKey;
- (id)fusionUpgradeShowTimer;
- (void)handleAudienceUpgradeDouyinAuthScene:;
- (void)handleAudienceUpgradeWatchScene:;
- (void)handleGuidePageClickOpenLive:;
- (void)handleHostPageClickOpenLive:;
- (void)handleHostPageClickOpenLiveAfterLogin:;
- (BOOL)isAudienceUpgradeDouyinAuthSceneProgress;
- (BOOL)isAudienceUpgradeFinish;
- (BOOL)isAudienceUpgradeWatchSceneProgress;
- (BOOL)isGuidePageClickOpenLiveInProgress;
- (BOOL)isHostPageClickOpenLiveInProgress;
- (BOOL)isInRoom;
- (void)setBridgeEventSubscriber:;
- (void)setCurrentScene:;
- (void)setFusionPrecondition:;
- (void)setFusionUpgradeShowTimer:;
- (void)setIsAudienceUpgradeDouyinAuthSceneProgress:;
- (void)setIsAudienceUpgradeFinish:;
- (void)setIsAudienceUpgradeWatchSceneProgress:;
- (void)setIsGuidePageClickOpenLiveInProgress:;
- (void)setIsHostPageClickOpenLiveInProgress:;
- (void)setIsInRoom:;
- (BOOL)shouldFusionUpgradeDaily;
- (void)showToast:isLiveAPI:;
- (void)subscribeEvent;
- (void)tryUpgrade:;
- (void)updateFusionUpgradeDaily;
- (id)init;
- (void)dealloc;
- (unsigned long long)currentScene;
- (void)setTargetIndex:;
- (void).cxx_destruct;
- (long long)targetIndex;
- (int)showCount;
- (void)setShowCount:;
@end
