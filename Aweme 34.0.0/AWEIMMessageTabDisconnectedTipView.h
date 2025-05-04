@interface AWEIMMessageTabDisconnectedTipView : UIView
@property (nonatomic) UIView bgView;
@property (nonatomic) UIImageView tipIconView;
@property (nonatomic) UILabel tipLabel;
@property (nonatomic) UIImageView arrowView;
- (void)p_setupViews;
- (void)p_layoutSubviews;
- (void)p_updateHeight;
- (id)tipIconView;
- (void)p_didClickTip;
- (void)setTipIconView:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)arrowView;
- (id)bgView;
- (void)setArrowView:;
- (void)setBgView:;
- (void)setTipLabel:;
- (id)tipLabel;
@end
