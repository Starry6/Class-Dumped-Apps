@interface AWEECMallCategoryMaskView : UIView
@property (nonatomic) double leftMaskWidth;
@property (nonatomic) double rightMaskWidth;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} maskFrame;
@property (nonatomic) CAGradientLayer maskLayer;
@property (nonatomic) UIView containerView;
- (void)updateMaskLayerWithLeftWidth:rightWidth:scrollView:;
- (void)updateContainerView;
- (void)resetContainerViewLayer;
- (void)setMaskRasterizeIfNeeded;
- (void)setMaskFrame:;
- (id)initWithFrame:;
- (id)containerView;
- (void)setContainerView:;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)maskLayer;
- (void)setMaskLayer:;
- (id)maskFrame;
- (double)leftMaskWidth;
- (double)rightMaskWidth;
- (void)setLeftMaskWidth:;
- (void)setRightMaskWidth:;
@end
