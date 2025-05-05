@interface CJPayHomePageAmountView : UIView
@property (nonatomic) UILabel rmbUnitLabel;
@property (nonatomic) UILabel totalAmountLabel;
@property (nonatomic) UILabel amountDetailLabel;
- (id)amountDetailLabel;
- (void)p_setupUI;
- (id)rmbUnitLabel;
- (void)setAmountDetailLabel:;
- (void)setRmbUnitLabel:;
- (void)setTotalAmountLabel:;
- (id)totalAmountLabel;
- (void)updateTextColor:;
- (void)updateWithTotalAmount:withDetailInfo:;
- (id)init;
- (void).cxx_destruct;
@end
