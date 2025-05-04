@interface AWEPaidStreamMaskBlockView : AWEPaidStreamBaseBlockView
@property (nonatomic) UIImageView imageView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIButton purchaseButton;
@property (nonatomic) UIView purchaseButtonView;
@property (nonatomic) q enlargeType;
- (void)setEnlargeType:;
- (long long)enlargeType;
- (double)adaptLargeFontMode:;
- (void)install:uiConfig:paymentButtonView:actionHandler:;
- (void)setPurchaseButtonView:;
- (void)reloadUIForNeedsShowPurchaseButton:;
- (void)onBackgroundClick;
- (id)purchaseButtonView;
- (double)iconImageWidthHeight;
- (double)purchaseButtonHeight;
- (double)detailInfoHeight;
- (id)adaptLargeFontWithImage:;
- (void)purchaseButtonClick;
- (void)updatePurchaseTitle:;
- (void)uninstall;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setImageView:;
- (id)imageView;
- (id)purchaseButton;
- (void)setPurchaseButton:;
@end
