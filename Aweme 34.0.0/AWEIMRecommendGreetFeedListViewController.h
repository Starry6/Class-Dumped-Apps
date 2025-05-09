@interface AWEIMRecommendGreetFeedListViewController : UIViewController
@property (nonatomic) AWEIMRecommendGreetSingleCardView singleCardView;
@property (nonatomic) UIImageView bgImageView;
@property (nonatomic) UIView slideUpHintView;
@property (nonatomic) BOOL isCardDisplaying;
@property (nonatomic) BOOL showsSlideUpHint;
@property (nonatomic) BOOL finishedSlideUpHintAnimation;
@property (nonatomic) AWEAwemeModel awemeModel;
@property (nonatomic) q lastShownStyle;
@property (nonatomic) UILongPressGestureRecognizer longPressGestureRecognizer;
@property (nonatomic) UIViewController<AWEAwemeLongPressModalViewControllerProtocol> longPressViewController;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) <AFDSpecialCardPanelTrackDelegate> trackDelegate;
@property (nonatomic) AWEAwemeModel model;
@property (nonatomic) NSString referString;
@property (nonatomic) AWEAwemePageContext outerPageContext;
@property (nonatomic) <AWEPlayInteractionViewControllerProtocol> interactionDelegate;
- (id)awemeModel;
- (void)setAwemeModel:;
- (id)referString;
- (void)setReferString:;
- (id)aAWEPadModuleAdapter;
- (id)outerPageContext;
- (void)setOuterPageContext:;
- (void)configWithViewModel:;
- (void)didShowLongPressPanel;
- (void)didClickClose:;
- (void)setTrackDelegate:;
- (void)setIsCardDisplaying:;
- (BOOL)isCardDisplaying;
- (id)longPressViewController;
- (void)setLongPressViewController:;
- (void)p_applicationDidBecomeActiveNotification:;
- (void)setSingleCardView:;
- (id)singleCardView;
- (BOOL)showsSlideUpHint;
- (void)p_animateSlideUpHintView;
- (id)slideUpHintView;
- (id)p_slideUpHintShowCountStorageKey;
- (void)setShowsSlideUpHint:;
- (void)p_impressionSlideUpHint;
- (BOOL)finishedSlideUpHintAnimation;
- (void)setFinishedSlideUpHintAnimation:;
- (void)p_longPress:;
- (BOOL)p_enableNewPressPanel;
- (id)trackDelegate;
- (void)didClickCard:;
- (void)didClickActionBtn:;
- (void)didClickUserWork:;
- (void)didClickExtraActionBtn:;
- (long long)p_shownStyleIntegerWithIsSingle:isMulti:;
- (void)setSlideUpHintView:;
- (long long)lastShownStyle;
- (void)setLastShownStyle:;
- (void)setModel:;
- (void)animationDidStop:finished:;
- (void)play;
- (id)interactionDelegate;
- (void)viewDidLoad;
- (void)viewDidDisappear:;
- (void)setInteractionDelegate:;
- (id)model;
- (void)setLongPressGestureRecognizer:;
- (void).cxx_destruct;
- (id)longPressGestureRecognizer;
- (void)viewDidAppear:;
- (void)reset;
- (void)pause;
- (void)setupUI;
- (void)configureWithModel:;
- (void)didEndDisplaying;
- (void)updateWithModel:;
- (void)willDisplay;
- (void)setBgImageView:;
- (id)bgImageView;
+ (Class)aAWEPadModuleAdapterClass;
@end
