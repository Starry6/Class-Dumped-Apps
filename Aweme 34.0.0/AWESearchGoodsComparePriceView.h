@interface AWESearchGoodsComparePriceView : UIView
@property (nonatomic) AWESearchMerchandiseShopInfo comparePriceInfo;
@property (nonatomic) UIView bg;
@property (nonatomic) UILabel comparePriceName;
@property (nonatomic) UILabel lowestPriceLabel;
@property (nonatomic) UILabel guideWord;
@property (nonatomic) UIImageView comparePriceIcon;
@property (nonatomic) UIImageView arrowIcon;
- (id)comparePriceInfo;
- (void)setComparePriceInfo:;
- (id)guideWord;
- (id)arrowIcon;
- (void)setArrowIcon:;
- (void)setBg:;
- (void)setGuideWord:;
- (id)comparePriceIcon;
- (id)comparePriceName;
- (id)lowestPriceLabel;
- (void)setComparePriceName:;
- (void)setLowestPriceLabel:;
- (void)setComparePriceIcon:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)bg;
+ (double)comparePriceHeight;
@end
