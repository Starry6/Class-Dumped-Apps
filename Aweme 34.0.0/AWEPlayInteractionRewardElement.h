@interface AWEPlayInteractionRewardElement : AWEPlayInteractionLeftElement
@property (nonatomic) AWEMarkView rewardView;
@property (nonatomic) NSNumber showTime;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)initializeElement;
- (void)viewController_willDisplay;
- (BOOL)shouldShowRewardView:;
- (id)activateInfoWithData:;
- (void)layoutElementView;
- (id)showTime;
- (void)setShowTime:;
- (id)rewardView;
- (BOOL)updateRewardView:;
- (void)onRewardViewClicked:;
- (void)setRewardView:;
- (void)viewDidDisposed;
- (void)changeRewardViewAppearStatus:;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)reset;
+ (id)activateInfoWithContext:;
+ (BOOL)shouldShowRewardViewWithModel:;
@end
