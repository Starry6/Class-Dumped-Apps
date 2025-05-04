@interface AWEProfilePostLayoutMaskView : UIView
@property (nonatomic) CAShapeLayer maskLayer;
@property (nonatomic) UIView cornerView;
@property (nonatomic) double cornerRadius;
@property (nonatomic) BOOL bottomHasCorner;
- (id)initWithFrame:shadowColor:cornerRadius:;
- (void)setBottomHasCorner:;
- (BOOL)bottomHasCorner;
- (void)setCornerRadius:;
- (id)containerView;
- (void).cxx_destruct;
- (double)cornerRadius;
- (void)layoutSubviews;
- (id)maskLayer;
- (void)setMaskLayer:;
- (id)cornerView;
- (void)setCornerView:;
@end
