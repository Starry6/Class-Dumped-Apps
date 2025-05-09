@interface ASCAdLockupView : UIView
@property (nonatomic) NSString accessibilityAdvertisement;
@property (nonatomic) NSString accessibilityUserRating;
@property (nonatomic) ASCAdTransparencyContainerView adTransparencyContainer;
@property (nonatomic) ASCLockupContentView contentView;
@property (nonatomic) ASCLockupMediaView mediaView;
@property (nonatomic) ASCMaterialBackgroundView materialBackgroundView;
@property (nonatomic) ASCGradientBackgroundView gradientBackgroundView;
@property (nonatomic) ASCOfferPresenter offerPresenter;
@property (nonatomic) ASCAppearMetricsPresenter metricsPresenter;
@property (nonatomic) ASCLockupPresenter lockupPresenter;
@property (nonatomic) ASCAdLockupPresenter adLockupPresenter;
@property (nonatomic) ASCLockupMediaPresenter lockupMediaPresenter;
@property (nonatomic) NSString storeSheetHostBundleID;
@property (nonatomic) NSString storeSheetUsageContext;
@property (nonatomic) UITapGestureRecognizer tapGestureRecognizer;
@property (nonatomic) UIViewController presentingViewController;
@property (nonatomic) ASCLockup lockup;
@property (nonatomic) ASCLockupViewGroup group;
@property (nonatomic) ASCLockupRequest request;
@property (nonatomic) <ASCAdLockupViewDelegate> delegate;
@property (nonatomic) BOOL automaticallyPresentsProductDetails;
@property (nonatomic) BOOL adMarkerHidden;
@property (nonatomic) BOOL videoLoopingEnabled;
@property (nonatomic) BOOL videoMuted;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)presentingViewController;
- (void)layoutMarginsDidChange;
- (id)contentView;
- (unsigned long long)accessibilityTraits;
- (id)context;
- (id)intrinsicContentSize;
- (void)layoutSubviews;
- (id)mediaView;
- (id)accessibilityLabel;
- (void)setDelegate:;
- (void)setLayoutMargins:;
- (id)tapGestureRecognizer;
- (id)initWithCoder:;
- (id)request;
- (void)setGroup:;
- (void)invalidateIntrinsicContentSize;
- (BOOL)isHighlighted;
- (id)initWithFrame:;
- (void)traitCollectionDidChange:;
- (id)group;
- (void)encodeWithCoder:;
- (id)delegate;
- (id)sizeThatFits:;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (void)didMoveToWindow;
- (void)setHighlighted:;
- (void)setHidden:;
- (id)description;
- (void)setRequest:;
- (id)accessibilityIdentifier;
- (BOOL)accessibilityActivate;
- (void)setOfferTheme:;
- (id)lockup;
- (void)setLockup:;
- (void)presentProductDetailsViewController;
- (void)setDeveloperName:;
- (id)_accessibilitySupplementaryHeaderViews;
- (id)_accessibilitySupplementaryFooterViews;
- (void)setAutomaticallyPresentsProductDetails:;
- (id)storeSheetHostBundleID;
- (id)storeSheetUsageContext;
- (void)setAdMarkerHidden:;
- (void)setAdTransparencyButtonHidden:;
- (id)accessibilityAdvertisement;
- (id)accessibilityUserRating;
- (void)performOfferAction;
- (void)performAdTransparencyAction;
- (void)performLockupAction;
- (void)lockupPresenterDidBeginRequest;
- (void)lockupPresenterDidFinishRequest;
- (void)lockupPresenterDidFailRequestWithError:;
- (void)offerPresenterDidObserveChangeToState:;
- (void)offerPresenterWillPerformActionOfOffer:inState:withActivity:inContext:;
- (void)offerPresenterPreprocessOffer:inState:completionBlock:;
- (void)lockupMediaPresenterDidBeginScreenshotsFetchRequest;
- (void)lockupMediaPresenterDidCancelScreenshotsFetchRequest;
- (void)lockupMediaPresenterDidFinishScreenshotsFetchRequest;
- (void)lockupMediaPresenterVideoStateDidChange:;
- (BOOL)isLargeSizeClass;
- (BOOL)automaticallyGeneratesAppearMetrics;
- (void)setAutomaticallyGeneratesAppearMetrics:;
- (id)appearMetricsActivity;
- (void)setAppearMetricsActivity:;
- (id)offerTheme;
- (void)updateLayoutMarginsForContext:;
- (void)updateVisibility:;
- (BOOL)isVideoLoopingEnabled;
- (void)setVideoLoopingEnabled:;
- (BOOL)isVideoMuted;
- (void)setVideoMuted:;
- (void)layoutAdContentView;
- (id)metricsActivityForPresentingProductDetails;
- (id)metricsParametersFromMetricsActivity:;
- (id)metricsParametersForPresentingProductDetails;
- (BOOL)automaticallyPresentsProductDetails;
- (BOOL)isAdMarkerHidden;
- (id)adTransparencyContainer;
- (id)materialBackgroundView;
- (id)gradientBackgroundView;
- (id)offerPresenter;
- (id)metricsPresenter;
- (id)lockupPresenter;
- (id)adLockupPresenter;
- (id)lockupMediaPresenter;
- (void)setStoreSheetHostBundleID:;
- (void)setStoreSheetUsageContext:;
+ (double)topContentViewSpacing;
@end
