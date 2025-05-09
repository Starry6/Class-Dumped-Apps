@interface AWEPlayInteractionUnfollowFamiliarElement : AWEPlayInteractionBaseActionButtonElement
@property (nonatomic) AWEPlayInteractionUnfollowFamiliarElementViewModel viewModel;
@property (nonatomic) BOOL isAnimating;
@property (nonatomic) BOOL isWaitingDisappear;
@property (nonatomic) BOOL viewHasAppeared;
@property (nonatomic) BOOL cellHasDisplayed;
@property (nonatomic) BOOL videoHasActivated;
@property (nonatomic) UIButton<AFDFollowButtonProtocol> followBtn;
@property (nonatomic) UIButton dislikeBtn;
@property (nonatomic) UIButton unfollowBtn;
@property (nonatomic) UIButton greetBtn;
@property (nonatomic) UIButton mateBtn;
@property (nonatomic) UIButton moreFriendsBtn;
@property (nonatomic) double shownTime;
@property (nonatomic) q prePlayIndex;
@property (nonatomic) BOOL needReverse;
@property (nonatomic) AWEFeedUnfollowFamiliarFollowAndDislikeView unfollowFamiliarFollowOrDislikeView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)initializeElement;
- (void)videoDidActivity;
- (void)viewController_willDisplay;
- (void)viewController_didEndDisplaying;
- (void)viewController_viewDidAppear;
- (void)viewController_viewDidDisappear;
- (void)setAppear:;
- (id)activateInfoWithData:;
- (void)layoutElementView;
- (void)dynamicWidthRemakeLayout;
- (id)dislikeButtonText;
- (BOOL)needReverse;
- (void)setNeedReverse:;
- (void)viewDidDisposed;
- (id)followBtn;
- (void)setFollowBtn:;
- (void)feedTableViewControllerWillPlayAweme:;
- (void)updateWithFeedTableVC:;
- (BOOL)shouldActivateButtonWithData:;
- (BOOL)p_shouldShow;
- (id)unfollowFamiliarFollowOrDislikeView;
- (void)setFollowBtnHidden:;
- (void)resetButtonStatus;
- (long long)prePlayIndex;
- (void)setPrePlayIndex:;
- (void)setShownTime:;
- (void)setIsWaitingDisappear:;
- (BOOL)isWaitingDisappear;
- (double)shownTime;
- (void)onHideFamiliarElementsNotification:;
- (void)trackFCollectFollowClick;
- (void)setUnfollowBtn:;
- (id)unfollowBtn;
- (id)mateBtn;
- (void)setGreetBtn:;
- (id)greetBtn;
- (void)setMateBtn:;
- (void)updateViewWhenFollowGuideTrigger:;
- (void)updateViewWhenFCollectFollowAnimation;
- (BOOL)p_monitorButtonshowError;
- (void)updateUnfollowFamiliarFollowOrDislikeView:;
- (void)resetUnfollowFamiliarView;
- (void)setCellHasDisplayed:;
- (void)onElementVisibilityChanged;
- (id)aAWEPlayInteractionUnfollowFamiliarElementDOUYINLiteAdapter;
- (BOOL)videoHasActivated;
- (void)hideGreetBtn:;
- (void)setVideoHasActivated:;
- (void)hideUnfollowFamiliarView;
- (void)resetUnfollowFamiliarElementIfNeeded;
- (void)updateDislikeButtonForCreator;
- (id)dislikeBtn;
- (void)showUnfollowFamiliarView;
- (void)trackHighValueCreatorFollowViewWhenShown;
- (void)setunFollowBtnHidden:;
- (void)setDislikeBtnHidden:;
- (void)setMateBtnHidden:;
- (void)updateUnfollowFamiliarFollowOrDislikeViewWithNoMate:;
- (void)updateReuseFollowOrDislikeViewForCreator:;
- (id)unfollowButtonText;
- (id)unfollowButtonImage;
- (BOOL)shouldHideDislikeBtn;
- (BOOL)isShowingGreetBtn;
- (void)hideGreetBtn;
- (BOOL)shouldHideRecFollowButton;
- (void)p_showGreetBtnAnimated:;
- (void)updateButtonsAfterTriggerWithFollowBtn:dislikeBtn:;
- (BOOL)isTheTriggeredElementWithItemID:;
- (void)setModelHasTriggered;
- (BOOL)p_showExpandFollowBtnAfterTrigger;
- (void)trackUnfollowAcqImpressionWhenShowed;
- (void)setUnfollowFamiliarFollowOrDislikeView:;
- (BOOL)isElementVisible;
- (void)didShowGreetBtn;
- (BOOL)cellHasDisplayed;
- (void)trackNearbyPeopleDislike;
- (void)setDislikeBtn:;
- (id)moreFriendsBtn;
- (void)setMoreFriendsBtn:;
- (void)dealloc;
- (id)viewModel;
- (void)viewDidLoad;
- (BOOL)isAnimating;
- (void)setViewModel:;
- (void).cxx_destruct;
- (void)setIsAnimating:;
- (void)reset;
- (id)context;
- (BOOL)viewHasAppeared;
- (void)setViewHasAppeared:;
+ (id)activateInfoWithContext:;
+ (Class)aAWEPlayInteractionUnfollowFamiliarElementDOUYINLiteAdapterClass;
@end
