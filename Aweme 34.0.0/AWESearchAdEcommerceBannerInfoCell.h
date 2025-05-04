@interface AWESearchAdEcommerceBannerInfoCell : UICollectionViewCell
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIImageView vectorImageView;
@property (nonatomic) AWEDoubleColumnSearchAdBannerInfoModel model;
- (id)vectorImageView;
- (void)configBannerInfo:;
- (void)setVectorImageView:;
- (void)setModel:;
- (id)initWithFrame:;
- (id)model;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setupSubviews;
@end
