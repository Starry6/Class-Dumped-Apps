@interface AWEECOMIMSubCardPriceView : UIView
@property (nonatomic) BDPCDDynamicCardInsetsLabel edgePriceLabel;
@property (nonatomic) YYLabel deletePriceLabel;
@property (nonatomic) AWEECOMIMSubCardPriceTagModel priceItem;
- (void)bindPriceTagItem:;
- (id)edgePriceLabel;
- (id)deletePriceLabel;
- (id)priceItem;
- (void)setEdgePriceLabel:;
- (void)setDeletePriceLabel:;
- (void)setPriceItem:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)layoutSubviews;
@end
