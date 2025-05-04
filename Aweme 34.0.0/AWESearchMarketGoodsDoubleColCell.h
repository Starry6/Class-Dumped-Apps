@interface AWESearchMarketGoodsDoubleColCell : AWESearchMarketGoodsBaseCell
@property (nonatomic) AWESearchMarketGoodsInfoView infoView;
- (void)configWithModel:;
- (void)setSearchInfoDict:;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)infoView;
- (void)setInfoView:;
+ (double)heightForModel:containerWidth:;
+ (id)identifier;
@end
