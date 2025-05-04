@interface AWESearchMarketGoodsInfoView : UIView
@property (nonatomic) AWESearchMarketShopView shopView;
@property (nonatomic) UIView separatorLine;
@property (nonatomic) AWEDoubleColumnSearchMerchandiseModel model;
@property (nonatomic) NSDictionary searchInfoDict;
@property (nonatomic) double paddingHorizontal;
- (void)configWithModel:;
- (void)setPaddingHorizontal:;
- (void)setSearchInfoDict:;
- (id)searchInfoDict;
- (id)makeStrongPriceAttributeText:;
- (void)jumpShop;
- (double)paddingHorizontal;
- (unsigned long long)titleLabelLines;
- (id)shopView;
- (void)setShopView:;
- (void)setModel:;
- (id)initWithFrame:;
- (id)model;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)separatorLine;
- (void)setSeparatorLine:;
+ (double)heightForModel:containerWidth:;
+ (double)heightForModel:containerWidth:paddingHorizontal:;
@end
