@interface AWEEcommerceSearchEmptyCell : UICollectionViewCell
@property (nonatomic) UIImageView emptyImage;
@property (nonatomic) UILabel mainTitleLabel;
@property (nonatomic) UILabel subTitleLabel;
@property (nonatomic) CAGradientLayer gradientLayer;
@property (nonatomic) BOOL isFromECommerce;
- (void)configWithModel:;
- (BOOL)isFromECommerce;
- (void)setIsFromECommerce:;
- (id)mainTitleLabel;
- (void)setMainTitleLabel:;
- (void)addGradientBgColor;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)emptyImage;
- (id)gradientLayer;
- (void)setGradientLayer:;
- (void)setupUI;
- (void)setSubTitleLabel:;
- (id)subTitleLabel;
- (void)setEmptyImage:;
+ (double)heightForModel:containerWidth:;
+ (id)identifier;
@end
