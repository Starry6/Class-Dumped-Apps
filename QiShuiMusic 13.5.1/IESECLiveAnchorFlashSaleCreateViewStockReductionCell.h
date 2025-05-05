@interface IESECLiveAnchorFlashSaleCreateViewStockReductionCell : IESECLiveAnchorFlashSaleCreateViewCell
@property (nonatomic) IESECLiveAnchorFlashSaleRadioButton submitReductionRadio;
@property (nonatomic) IESECLiveAnchorFlashSaleRadioButton payReductionRadio;
- (void)p_payReductionRadioDidTap;
- (void)p_submitReductionRadioDidTap;
- (void)p_switchToStockReductionType:forceUpdate:;
- (id)payReductionRadio;
- (void)setItem:showWarn:;
- (void)setPayReductionRadio:;
- (void)setSubmitReductionRadio:;
- (id)submitReductionRadio;
- (id)initWithStyle:reuseIdentifier:;
- (void).cxx_destruct;
@end
