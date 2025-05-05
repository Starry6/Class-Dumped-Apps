@interface IESECGoodsPriceDescLabel : UIView
@property (nonatomic) UILabel label;
@property (nonatomic) CAShapeLayer backgroundLayer;
- (void)setCornerRadiusWithTopLeft:topRight:bottomLeft:bottomRight:;
- (void)layoutSubviews;
- (void)setText:;
- (void)setLabel:;
- (id)label;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)backgroundLayer;
- (void)setBackgroundLayer:;
@end
