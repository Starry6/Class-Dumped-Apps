@interface AWEClueStoreGuideAnimationView : UIView
@property (nonatomic) q type;
@property (nonatomic) UIView gradientView;
@property (nonatomic) DUXLottieView lottieView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) @? dismissBlock;
@property (nonatomic) UIPanGestureRecognizer verticalPan;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)lottieView;
- (void)setLottieView:;
- (id)verticalPan;
- (void)setVerticalPan:;
- (void)setupSubview;
- (void)addPanGestureRecognizer;
- (id)getDUXLottieName;
- (id)initWithFrame:type:dismissBlock:;
- (id)gradientView;
- (void)dismiss;
- (long long)type;
- (void)setType:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (void)setGradientView:;
- (id)title;
- (id)titleLabel;
- (void)handlePanGesture:;
- (void)setupLayout;
- (id)dismissBlock;
- (void)setDismissBlock:;
@end
