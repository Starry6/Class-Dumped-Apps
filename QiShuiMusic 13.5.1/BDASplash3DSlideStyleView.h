@interface BDASplash3DSlideStyleView : BDASplashComplianceBaseView
@property (nonatomic) BDASplash3DSlideStyleViewModel viewModel;
@property (nonatomic) q slideImageType;
@property (nonatomic) UIView gradientView;
@property (nonatomic) BDImageView guideImageView;
@property (nonatomic) UILabel topLabel;
@property (nonatomic) UILabel bottomLabel;
@property (nonatomic) double threshold;
- (id)guideImageView;
- (id)initWithFrame:viewHolder:viewModel:;
- (void)onPanGesture:;
- (void)setGuideImageView:;
- (void)setSlideImageType:;
- (long long)slideImageType;
- (void)splashClickWithPoint:isValid:;
- (void)splashJump;
- (void)updateSubviewLayout;
- (double)threshold;
- (id)viewModel;
- (id)gradientView;
- (void).cxx_destruct;
- (void)setGradientView:;
- (void)setViewModel:;
- (void)setThreshold:;
- (void)setupView;
- (id)topLabel;
- (void)setTopLabel:;
- (id)bottomLabel;
- (void)setBottomLabel:;
@end
