@interface CJPayIntegratedResultPageView : UIView
@property (nonatomic) CJPayAccountInsuranceTipView safeGuardTipView;
@property (nonatomic) CJPayButton backToMerchantButton;
@property (nonatomic) UILabel discountLabel;
@property (nonatomic) CJPayOrderResultResponse cjResultResponse;
@property (nonatomic) <CJPayIntegratedResultPageViewDelegate> delegate;
@property (nonatomic) q resultPageType;
- (void)p_tapBtmButton:;
- (id)backToMerchantButton;
- (id)cjResultResponse;
- (id)discountLabel;
- (id)initWithCJResponse:;
- (void)p_setDetailUIAndText;
- (void)p_setupUI;
- (void)p_showBackToMerchantBtn;
- (void)p_updateDiscountText:payTypeDescText:;
- (long long)resultPageType;
- (id)safeGuardTipView;
- (void)setBackToMerchantButton:;
- (void)setCjResultResponse:;
- (void)setDiscountLabel:;
- (void)setResultPageType:;
- (void)setSafeGuardTipView:;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
@end
