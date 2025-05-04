@interface AWESearchMerchandiseGoodsSingleColCell : AWESearchMerchandiseGoodsBaseCell
- (void)configWithModel:;
- (void)trackCardShow;
- (void)setSearchInfoDict:;
- (double)goodsImgWidth;
- (id)initWithFrame:;
- (void)layoutSubviews;
+ (double)heightForModel:containerWidth:;
+ (double)goodsImageWidth:containerWidth:;
+ (id)identifier;
@end
