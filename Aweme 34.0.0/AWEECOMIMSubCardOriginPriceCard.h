@interface AWEECOMIMSubCardOriginPriceCard : AWEECOMIMSubCardProductCard
@property (nonatomic) YYLabel originPriceLabel;
@property (nonatomic) AWEECOMIMProductItemModel item;
@property (nonatomic) q itemIndex;
- (void)tapCard;
- (void)bindProductItemModel:itemIndex:;
- (void)setOriginPriceLabel:;
- (id)originPriceLabel;
- (void)setItem:;
- (id)item;
- (void).cxx_destruct;
- (long long)itemIndex;
- (void)setItemIndex:;
- (void)setupUI;
@end
