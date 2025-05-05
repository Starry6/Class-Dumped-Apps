@interface IESECGoodsActivityCouponView : UIView
@property (nonatomic) IESECGoodsDetailParameters parameters;
@property (nonatomic) IESECButton leftAreaButton;
@property (nonatomic) IESECButton rightAreaButton;
@property (nonatomic) UIView rightShadowBGView;
- (id)rightAreaButton;
- (void)addShadowToView:shadowColor:;
- (id)leftAreaButton;
- (id)rightShadowBGView;
- (void)setLeftAreaButton:;
- (void)setRightAreaButton:;
- (void)setRightShadowBGView:;
- (void)setupSubViews;
- (id)initWithParameters:;
- (id)parameters;
- (void).cxx_destruct;
- (void)setParameters:;
- (void)updateData;
@end
