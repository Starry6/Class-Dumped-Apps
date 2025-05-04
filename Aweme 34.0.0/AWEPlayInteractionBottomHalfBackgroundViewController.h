@interface AWEPlayInteractionBottomHalfBackgroundViewController : AWEPlayInteractionBaseController
@property (nonatomic) UIView bottomHalfBackgroundView;
@property (nonatomic) CAGradientLayer bottomHalfBackgroundGradientLayer;
- (void)updateAllSubViews;
- (void)removeControllerFromSuperView;
- (id)bottomHalfBackgroundView;
- (BOOL)shouldShowBackGroundView;
- (id)bottomHalfBackgroundGradientLayer;
- (void)setBottomHalfBackgroundView:;
- (void)setBottomHalfBackgroundGradientLayer:;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void).cxx_destruct;
@end
