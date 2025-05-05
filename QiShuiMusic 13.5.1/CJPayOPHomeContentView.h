@interface CJPayOPHomeContentView : CJPayHomeBaseContentView
@property (nonatomic) UIView subContainer;
@property (nonatomic) CJPayMarketingMsgView marketingMsgView;
@property (nonatomic) UILabel amountDetailLabel;
@property (nonatomic) CJPayBDPayMainMessageView tradeMesageView;
@property (nonatomic) CJPayBDPayMainMessageView payTypeMessageView;
@property (nonatomic) CJPayAccountInsuranceTipView safeGuardTipView;
- (id)tradeMesageView;
- (id)amountDetailLabel;
- (id)marketingMsgView;
- (id)payTypeMessageView;
- (id)safeGuardTipView;
- (void)setAmountDetailLabel:;
- (void)setMarketingMsgView:;
- (void)setPayTypeMessageView:;
- (void)setSafeGuardTipView:;
- (void)setSubContainer:;
- (void)setTradeMesageView:;
- (id)subContainer;
- (void).cxx_destruct;
- (void)setupUI;
@end
