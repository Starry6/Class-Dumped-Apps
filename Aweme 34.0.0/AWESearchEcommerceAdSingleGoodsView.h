@interface AWESearchEcommerceAdSingleGoodsView : AWESearchEcommerceSingleGoodsView
@property (nonatomic) UILabel pricePrefix;
@property (nonatomic) UILabel lineationPrice;
@property (nonatomic) UILabel salesVolume;
@property (nonatomic) UILabel adTagLabel;
@property (nonatomic) AWEAwemeModel awemeModel;
- (id)awemeModel;
- (void)setAwemeModel:;
- (void)setupSubViews;
- (id)adTagLabel;
- (id)pricePrefix;
- (void)setPricePrefix:;
- (void)setSalesVolume:;
- (void)reloadEcommerceModel:;
- (void)setAdTagLabel:;
- (void)updateSubviewWithAdInfo;
- (id)lineationPrice;
- (id)salesVolume;
- (void)updatePricePrefix;
- (void)updateLineationPrice;
- (void)updateSalesVolume;
- (void)updateAdTag;
- (id)formattedOriginPriceWithData:;
- (void)setLineationPrice:;
- (void).cxx_destruct;
@end
