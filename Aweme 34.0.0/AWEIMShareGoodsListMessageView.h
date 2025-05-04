@interface AWEIMShareGoodsListMessageView : UIView
@property (nonatomic) AWEIMShareGoodsListMessageProps props;
@property (nonatomic) UIView<AWEEnterpriseIMMessageViewProtocol> enterpriseCardView;
- (void)p_addSubviews;
- (void)updateWithProps:;
- (void)p_addConstraint;
- (id)enterpriseCardView;
- (void)setEnterpriseCardView:;
- (id)props;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setProps:;
@end
