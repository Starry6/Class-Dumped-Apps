@interface AWESearchStandardVideoPlayerPaidComponent : AWESearchComponent
@property (nonatomic) AWESearchStandardVideoPlayerComponentModel model;
@property (nonatomic) NSMutableArray receiveProtocolArray;
@property (nonatomic) <AWESearchPlayStatusBarComponentProvider> playStatusBarProvider;
@property (nonatomic) <AWESearchPaidTagComponentProvider> paidTagProvider;
@property (nonatomic) <AWESearchStandardVideoPlayerComponentProvider> playerProvider;
@property (nonatomic) AWESearchEventDispather eventDispather;
@property (nonatomic) <AWESearchContainerProtocol> containerContext;
@property (nonatomic) <AWESearchComponentProtocol> componentContext;
@property (nonatomic) NSDictionary dictLogExtraInfo;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} frame;
@property (nonatomic) BOOL hidden;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)playerPlayTime:canPlayTime:totalTime:;
- (void)componentDidLoad;
- (void)didPaymentVideoPreviewEnd;
- (void)didRewardAdvertiseVideoPreviewEnd;
- (id)playerProvider;
- (id)paymentSpuType:;
- (id)paymentEpisodeID:;
- (id)paymentEpisodeRank:;
- (void)updateWithModel:forceUpdate:;
- (void)componentViewDidStartShowing;
- (id)receiveProtocolList;
- (void)addObserverForPaymentVideoIfNeeded;
- (void)updateWithPaidAwemeModel:;
- (id)receiveProtocolArray;
- (void)setPlayerProvider:;
- (void)setReceiveProtocolArray:;
- (void)interactorDidClick;
- (BOOL)p_isUnpaidPaymentVideo;
- (BOOL)p_isUnlockRewardAdvertiseVideo;
- (id)playStatusBarProvider;
- (void)setPlayStatusBarProvider:;
- (void)updatePaidTagComponentWithPlayerModel:;
- (id)paidTagProvider;
- (void)updatePlayStatusBarHidden;
- (void)trackEventForPaymentVideoIfNeededWithEvent:logData:extraLogData:;
- (id)paidDefaltParams;
- (void)setPaidTagProvider:;
- (void)setModel:;
- (id)model;
- (void).cxx_destruct;
+ (BOOL)isPaidWithAweme:;
@end
