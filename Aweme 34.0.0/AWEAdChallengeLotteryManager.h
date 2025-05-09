@interface AWEAdChallengeLotteryManager : HTSService
@property (nonatomic) NSMutableArray lotteryGuideAnimationShowedSchemas;
@property (nonatomic) NSTimer searchShowTimer;
@property (nonatomic) NSDictionary searchTimerUserInfo;
@property (nonatomic) NSString keyword;
@property (nonatomic) NSMutableArray messageQueue;
@property (nonatomic) BOOL isLotteryAnimationShowing;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)containerWillDestory:;
- (void)containerOnShow:sourceParam:;
- (void)onFrontierMessageReceived:;
- (void)startWatchECommerceStorePageEvent:;
- (void)openTaskDialog:;
- (id)lotteryGuideAnimationShowedSchemas;
- (void)setLotteryGuideAnimationShowedSchemas:;
- (BOOL)isLotteryAnimationShowing;
- (BOOL)canOpenLotteryInSearch:sceneIDs:;
- (BOOL)canOpenLotteryInChallenge:sceneIDs:;
- (BOOL)canOpenLotteryInUserProfie:sceneIDs:;
- (void)tryShowAdLotteryAnimationIfNeed;
- (void)setIsLotteryAnimationShowing:;
- (id)searchTimerUserInfo;
- (void)setSearchTimerUserInfo:;
- (void)updateSearchFirstFetchEventWithTimerNotification:;
- (void)setSearchShowTimer:;
- (id)searchShowTimer;
- (void)addFrontierNotification;
- (void)tryShowAdLotteryAnimationIfNeedWithPopupSchema:;
- (void)updateVideoPlayEventWithChannelType:itemID:requirements:topicID:authorID:missionID:;
- (void)updateChallengeLotteryGuideAnimationShowedSchema:;
- (void)fetchChallengeLotteryGuideAnimationShowingStatusWithSchema:completion:;
- (void)trackChallengeFlyBoxButton:challenge:enterFrom:;
- (void)tryShowTaskDialogWithTaskID:bizID:;
- (void)configSearchShowTimerWithSearchVCInitalInfo:keyword:;
- (void)cancelSearchShowTimer;
- (void)tryStartSearchShowTimer;
- (void)setMessageQueue:;
- (id)messageQueue;
- (void).cxx_destruct;
- (id)keyword;
- (void)setKeyword:;
@end
