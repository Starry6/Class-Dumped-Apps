@interface AWESearchAdProductSimpleCollectionViewCell : UICollectionViewCell
@property (nonatomic) AWEDoubleColumnSearchAdProductInfoModel adProductInfo;
@property (nonatomic) UIImageView productImageView;
@property (nonatomic) UILabel priceLabel;
@property (nonatomic) UILabel tagLabel;
- (id)tagLabel;
- (void)setTagLabel:;
- (void)setAdProductInfo:;
- (id)adProductInfo;
- (id)douyinNumberABCFontOfSize:;
- (void)configAdProductCellWithModel:completion:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setupSubviews;
- (id)priceLabel;
- (void)setPriceLabel:;
- (id)productImageView;
- (void)setProductImageView:;
+ (id)identifier;
@end
