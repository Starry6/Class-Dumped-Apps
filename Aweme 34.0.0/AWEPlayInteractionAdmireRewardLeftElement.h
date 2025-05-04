@interface AWEPlayInteractionAdmireRewardLeftElement : AWEPlayInteractionBaseActionButtonElement
@property (nonatomic) AWEButton rewardButton;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)initializeElement;
- (void)viewController_willDisplay;
- (id)activateInfoWithData:;
- (void)layoutElementView;
- (id)rewardButton;
- (void)setRewardButton:;
- (void)viewDidDisposed;
- (BOOL)shouldActivateButtonWithData:;
- (BOOL)shouldAppearWithData:;
- (void)tryOpenRewardLynxboard;
- (BOOL)shouldShowAdmireRewardBottomButton;
- (BOOL)enableReward;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)reset;
+ (long long)lastDisplayTimestamp;
+ (void)setLastDisplayTimestamp:;
+ (void)addDisplayCountToday;
+ (BOOL)isOutLimitPerDay;
+ (long long)nowDisplayCount;
+ (void)setNowDisplayCount:;
+ (BOOL)shouldShowByFrequencyControl;
@end
