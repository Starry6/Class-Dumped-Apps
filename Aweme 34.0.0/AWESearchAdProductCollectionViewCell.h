@interface AWESearchAdProductCollectionViewCell : UICollectionViewCell
@property (nonatomic) AWEDoubleColumnSearchAdProductInfoModel adProductInfo;
@property (nonatomic) UIImageView productImageView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel priceLabel;
- (void)setAdProductInfo:;
- (void)configAdProductCellWithModel:;
- (id)adProductInfo;
- (void)configUI;
- (void)updateProductImageViewLayout;
- (void)updateSubviewUIWithIsLiveCard:currentThemeStyle:;
- (id)initWithFrame:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)priceLabel;
- (void)setPriceLabel:;
- (id)productImageView;
- (void)setProductImageView:;
+ (id)identifier;
@end
