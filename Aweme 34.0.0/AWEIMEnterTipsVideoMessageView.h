@interface AWEIMEnterTipsVideoMessageView : UIView
@property (nonatomic) UIView<AWEEnterpriseIMMessageViewProtocol> enterpriseCardView;
@property (nonatomic) AWEIMEnterTipsVideoMessageProps props;
- (void)p_addGesture;
- (void)p_addSubviews;
- (void)p_initSubviews;
- (void)updateWithProps:;
- (void)p_addConstraint;
- (void)p_onTap:;
- (id)enterpriseCardView;
- (void)setEnterpriseCardView:;
- (id)props;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setProps:;
@end
