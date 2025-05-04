@interface AWELiveFormatSportScoreElement : AWELiveTopElement
@property (nonatomic) AWELiveFormatScoreView scoreView;
@property (nonatomic) BOOL isHiddenScore;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)shouldActivateElementWithData:;
- (BOOL)p_canShow;
- (void)viewController_viewWillTransitionToSize:withTransitionCoordinator:;
- (void)streamPlayer_stop;
- (void)preloadElement;
- (void)onMessageReceivce:withDict:;
- (unsigned long long)liveElementType;
- (id)scoreView;
- (void)p_adjustForLandscape;
- (BOOL)p_gameNotStart;
- (id)p_gameStartTime;
- (id)p_gameDate;
- (void)showScoreIfNeed;
- (id)p_gameForAccess;
- (void)setScoreView:;
- (BOOL)isHiddenScore;
- (void)setIsHiddenScore:;
- (void)viewDidLoad;
- (void)setData:;
- (void).cxx_destruct;
- (void)reset;
@end
