@interface AWESearchMerchandiseGoodsDoubleColCell : AWESearchMerchandiseGoodsBaseCell
@property (nonatomic) UIView seeAndGetCardEnhancementBorder;
- (void)configWithModel:;
- (void)trackCardShow;
- (void)setSearchInfoDict:;
- (id)seeAndGetCardEnhancementBorder;
- (void)setSeeAndGetCardEnhancementBorder:;
- (void)configSeeAndGetBorderWithModel:;
- (void)prepareForReuse;
- (void).cxx_destruct;
- (void)layoutSubviews;
+ (double)heightForModel:containerWidth:;
+ (id)identifier;
@end
