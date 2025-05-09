@interface AWEIMJoinGroupGetGiftsViewController : UIViewController
@property (nonatomic) AWEIMJoinGroupGetGiftsViewModel viewModel;
@property (nonatomic) UIView maskView;
@property (nonatomic) UIView contentView;
@property (nonatomic) UIView<IESIMLoadingViewProtocol> loadingView;
@property (nonatomic) UIButton closeButtton;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIPanGestureRecognizer panGesture;
@property (nonatomic) UILabel subtitleLabel;
@property (nonatomic) AWEIMCouponListView couponListView;
@property (nonatomic) UIImageView emptyIconImageView;
@property (nonatomic) UILabel emptyDescribeLabel;
@property (nonatomic) UIButton emptyTransferButton;
@property (nonatomic) UIImageView errorIconImageView;
@property (nonatomic) UILabel errorDescribeLabel;
@property (nonatomic) UIButton errorButton;
@property (nonatomic) BOOL isAnimating;
@property (nonatomic) {CGPoint=dd} origionCenter;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)__dismiss;
- (void)__updateUI;
- (void)__setupUI;
- (id)initWithExtraParams:;
- (void)__showWithDuration:;
- (void)__show;
- (void)__config;
- (void)couponListView:clickedWithItemViewModel:;
- (id)emptyDescribeLabel;
- (id)emptyTransferButton;
- (id)couponListView;
- (id)emptyIconImageView;
- (id)errorIconImageView;
- (id)errorDescribeLabel;
- (void)__handleWillEnterForegroundNotification:;
- (id)__contentViewSize;
- (id)closeButtton;
- (void)__updateContentViewLayoutToShow:;
- (void)__dismissWithDuration:;
- (void)__handleMaskViewTap:;
- (void)__handleMaskViewPan:;
- (void)__handleContentViewPan:;
- (void)__handleEmptyTransferButtonClicked:;
- (void)__handleErrorButtonClicked:;
- (void)__handleSelfPan:;
- (void)setOrigionCenter:;
- (id)origionCenter;
- (void)__updateContentViewLayoutToCenterY:;
- (void)setCloseButtton:;
- (void)setCouponListView:;
- (void)setEmptyIconImageView:;
- (void)setEmptyDescribeLabel:;
- (void)setEmptyTransferButton:;
- (void)setErrorIconImageView:;
- (void)setErrorDescribeLabel:;
- (id)errorButton;
- (void)setErrorButton:;
- (id)maskView;
- (void)setLoadingView:;
- (id)viewModel;
- (void)viewDidLoad;
- (id)contentView;
- (void)setSubtitleLabel:;
- (id)loadingView;
- (BOOL)isAnimating;
- (void)setTitleLabel:;
- (void)setViewModel:;
- (void).cxx_destruct;
- (void)setContentView:;
- (void)setIsAnimating:;
- (void)viewDidAppear:;
- (void)setMaskView:;
- (id)titleLabel;
- (id)subtitleLabel;
- (BOOL)gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:;
- (id)panGesture;
- (void)setPanGesture:;
@end
