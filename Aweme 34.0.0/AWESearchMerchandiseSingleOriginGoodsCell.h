@interface AWESearchMerchandiseSingleOriginGoodsCell : AWESearchMerchandiseGoodsBaseCell
@property (nonatomic) AWEEcomSearchGoodsMaskView goodsMaskView;
- (void)configWithModel:;
- (void)trackCardShow;
- (void)setSearchInfoDict:;
- (id)goodsMaskView;
- (void)setGoodsMaskView:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)layoutSubviews;
+ (double)heightForModel:containerWidth:;
@end
