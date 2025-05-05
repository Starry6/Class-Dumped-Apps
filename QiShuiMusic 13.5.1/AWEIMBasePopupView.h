@interface AWEIMBasePopupView : UIView
@property (nonatomic) UIView maskView;
@property (nonatomic) UIView contentView;
@property (nonatomic) UIButton closeBtn;
@property (nonatomic) UIButton confirmBtn;
@property (nonatomic) CAShapeLayer shapeLayer;
- (id)closeBtn;
- (id)confirmBtn;
- (void)contentViewPanAction:;
- (void)hideWithDuration:;
- (void)maskViewTapAction:;
- (void)p_setBasePopupViewUI;
- (void)p_showWithDuration:;
- (void)setCloseBtn:;
- (void)setConfirmBtn:;
- (void)showInView:duration:;
- (id)contentView;
- (id)maskView;
- (void)layoutSubviews;
- (void)hide;
- (id)initWithFrame:;
- (id)shapeLayer;
- (void)setShapeLayer:;
- (void).cxx_destruct;
- (void)setContentView:;
- (void)setMaskView:;
- (void)showInView:;
@end
