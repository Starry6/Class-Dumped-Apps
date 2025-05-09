@interface IESLivePlayerManager : NSObject
@property (nonatomic) NSHashTable playerTable;
@property (nonatomic) NSMutableArray reusePlayers;
@property (nonatomic) q maxReusePlayerCount;
@property (nonatomic) BOOL enableEyesProtect;
@property (nonatomic) double eyesProtectFilterValue;
@property (nonatomic) NSHashTable inusePlayers;
@property (nonatomic) IESLivePlayerWrapper tempHoldPlayer;
@property (nonatomic) IESLivePlayerCrossTalkDetectManager detectCrossTalkManager;
@property (nonatomic) IESLivePlayerPullStreamDecisionCenter pullStreamDecisionCenter;
@property (nonatomic) NSDictionary backgroundPullingSetting;
@property (nonatomic) @? trackBlock;
@property (nonatomic) @? eyesProtectLutImageBlock;
@property (nonatomic) @? assertBlock;
@property (nonatomic) @? isInHouseBlock;
@property (nonatomic) q playerCountInPool;
- (id)dequeueIESLivePlayerWithConfig:;
- (void)enqueueIESLivePlayerWithPlayer:;
- (BOOL)isExistLivePlayerInPlayingState;
- (void)setAssertBlock:;
- (id)createInternalPlayerWithConfig:;
- (void)setPlayerTable:;
- (void)appendManagedPlayer:;
- (id)assertBlock;
- (void)asyncClosePlayer:callTrace:;
- (id)backgroundPullingSetting;
- (id)configIESLivePlayerForReuse:;
- (id)createIESLivePlayerWithConfig:;
- (id)dequeuePlayerFromPoolWithConfig:callTrace:;
- (id)detectCrossTalkManager;
- (BOOL)enableEyesProtect;
- (void)enqueuePlayerIntoPool:callTrace:resetBlock:;
- (double)eyesProtectFilterValue;
- (id)eyesProtectLutImageBlock;
- (void)holdPlayerInShortTime:;
- (id)inusePlayers;
- (id)isInHouseBlock;
- (long long)maxReusePlayerCount;
- (void)muteManagedPlayerWithPlayer:;
- (BOOL)needToCreateNewPlayerWithConfig:;
- (id)obtainInUsedPlayerWithEngineHash:;
- (id)obtionActiveReusePlayerWithConfig:;
- (id)obtionNewPlayerWithConfig:;
- (id)obtionUnactiveReusePlayerWithConfig:;
- (id)p_createPlayerWithConfig:;
- (void)p_receivedPlayActionNotification:;
- (long long)playerCountInPool;
- (id)playerTable;
- (id)playerTypeChangeWithPlayer:;
- (id)pullStreamDecisionCenter;
- (void)receiveCrossTalkHappenNotification:;
- (void)replenishPlayerIntoUnusedPool:callTrace:;
- (id)reusePlayers;
- (void)setBackgroundPullingSetting:;
- (void)setDetectCrossTalkManager:;
- (void)setEnableEyesProtect:;
- (void)setEyesProtectFilterValue:;
- (void)setEyesProtectLutImageBlock:;
- (void)setGlobalDummyVoice:scene:;
- (void)setInusePlayers:;
- (void)setIsInHouseBlock:;
- (void)setMaxReusePlayerCount:;
- (void)setPullStreamDecisionCenter:;
- (void)setReusePlayers:;
- (void)setTempHoldPlayer:;
- (void)setTrackBlock:;
- (void)stopAllLivePlayerWithCallTrace:action:completion:;
- (id)targetPlayerFromOpaquePlayer:;
- (id)tempHoldPlayer;
- (id)trackBlock;
- (void)tryEnqueueReusedPool:callTrace:resetBlock:;
- (void)tryPlayWithEngineHash:callTrace:;
- (void)updateLivePlayersEyesProtectState:intensityValue:;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)addObservers;
- (void)handleAppDidEnterBackground:;
+ (id)sharedInstance;
@end
