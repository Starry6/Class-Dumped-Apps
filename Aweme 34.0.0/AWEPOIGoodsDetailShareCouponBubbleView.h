@interface AWEPOIGoodsDetailShareCouponBubbleView : UIView
@property (nonatomic) UIImageView iconView;
@property (nonatomic) UILabel textLabel;
@property (nonatomic) UIView lineView;
@property (nonatomic) UILabel statusLabel;
@property (nonatomic) UIImageView arrowView;
- (id)duxPopover_view;
- (id)initWithBubbleModel:playStatus:;
- (void)setupUIWithBubbleModel:playStatus:;
- (id)textLabel;
- (id)iconView;
- (void)setIconView:;
- (void).cxx_destruct;
- (id)arrowView;
- (id)lineView;
- (void)setArrowView:;
- (void)setLineView:;
- (void)setTextLabel:;
- (void)setStatusLabel:;
- (id)statusLabel;
@end
