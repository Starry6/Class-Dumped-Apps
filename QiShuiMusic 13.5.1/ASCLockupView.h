@interface ASCLockupView : UIView
@property (nonatomic) NSString storeSheetHostBundleID;
@property (nonatomic) NSString storeSheetUsageContext;
@property (nonatomic) ASCLockupContentView contentView;
@property (nonatomic) ASCOfferPresenter offerPresenter;
@property (nonatomic) ASCAppearMetricsPresenter metricsPresenter;
@property (nonatomic) ASCLockupPresenter lockupPresenter;
@property (nonatomic) NSString storeSheetHostBundleID;
@property (nonatomic) NSString storeSheetUsageContext;
@property (nonatomic) UIViewController presentingViewController;
@property (nonatomic) BOOL automaticallyGeneratesAppearMetrics;
@property (nonatomic) ASCMetricsActivity appearMetricsActivity;
@property (nonatomic) ASCOfferTheme offerTheme;
@property (nonatomic) NSString size;
@property (nonatomic) ASCLockup lockup;
@property (nonatomic) ASCLockupViewGroup group;
@property (nonatomic) ASCLockupRequest request;
@property (nonatomic) <ASCLockupViewDelegate> delegate;
@property (nonatomic) BOOL automaticallyPresentsProductDetails;
@property (nonatomic) BOOL highlighted;
@property (nonatomic) BOOL showsPlaceholderContent;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)presentingViewController;
- (void)layoutMarginsDidChange;
- (id)contentView;
- (unsigned long long)accessibilityTraits;
- (id)intrinsicContentSize;
- (void)layoutSubviews;
- (id)accessibilityLabel;
- (void)setDelegate:;
- (void)setLayoutMargins:;
- (id)initWithCoder:;
- (id)request;
- (void)setGroup:;
- (void)invalidateIntrinsicContentSize;
- (BOOL)isHighlighted;
- (id)initWithFrame:;
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
- (void)setSize:;
- (id)size;
- (BOOL)accessibilityActivate;
- (void)layoutContentView;
- (void)setOfferTheme:;
- (id)lockup;
- (void)setLockup:;
- (void)presentProductDetailsViewController;
- (id)_accessibilitySupplementaryFooterViews;
- (void)setAutomaticallyPresentsProductDetails:;
- (id)storeSheetHostBundleID;
- (id)storeSheetUsageContext;
- (void)performLockupAction;
- (void)lockupPresenterDidBeginRequest;
- (void)lockupPresenterDidFinishRequest;
- (void)lockupPresenterDidFailRequestWithError:;
- (void)offerPresenterDidObserveChangeToState:;
- (void)offerPresenterWillPerformActionOfOffer:inState:withActivity:inContext:;
- (BOOL)automaticallyGeneratesAppearMetrics;
- (void)setAutomaticallyGeneratesAppearMetrics:;
- (id)appearMetricsActivity;
- (void)setAppearMetricsActivity:;
- (id)offerTheme;
- (BOOL)automaticallyPresentsProductDetails;
- (id)offerPresenter;
- (id)metricsPresenter;
- (id)lockupPresenter;
- (void)setStoreSheetHostBundleID:;
- (void)setStoreSheetUsageContext:;
- (void)setShowsPlaceholderContent:;
- (void)setViewRenderSpanProvider:;
- (BOOL)showsPlaceholderContent;
- (id)preferredProductDetailsPresentationContext;
@end
