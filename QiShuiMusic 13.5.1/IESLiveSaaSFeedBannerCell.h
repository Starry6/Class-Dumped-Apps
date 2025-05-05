@interface IESLiveSaaSFeedBannerCell : UICollectionViewCell
@property (nonatomic) BDImageView bannerImage;
@property (nonatomic) UILabel tipLabel;
- (void)updateWithBannerModel:;
- (void)prepareForReuse;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)tipLabel;
- (void)setTipLabel:;
- (void)setupUI;
- (id)bannerImage;
- (void)setBannerImage:;
@end
