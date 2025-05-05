@interface IESLivePKInviteeListTipsView : UIView
@property (nonatomic) UILabel tipsLabel;
@property (nonatomic) UIView tipsBackgroundView;
@property (nonatomic) UIImageView arrowImageView;
@property (nonatomic) q arrowAlignment;
- (long long)arrowAlignment;
- (id)initWithTipsText:arrowAlignment:;
- (void)layoutUIWithTips:;
- (void)setArrowAlignment:;
- (void)setTipsBackgroundView:;
- (void)setTipsLabel:;
- (id)tipsBackgroundView;
- (id)tipsLabel;
- (void).cxx_destruct;
- (id)arrowImageView;
- (void)setArrowImageView:;
@end
