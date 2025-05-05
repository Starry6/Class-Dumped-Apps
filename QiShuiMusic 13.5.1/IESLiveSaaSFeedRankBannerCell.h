@interface IESLiveSaaSFeedRankBannerCell : UICollectionViewCell
@property (nonatomic) UIImageView rankImage;
@property (nonatomic) UILabel title;
@property (nonatomic) NSArray rankAvatarViews;
@property (nonatomic) UIImageView arrowImage;
- (id)rankAvatarViews;
- (id)rankImage;
- (void)setRankAvatarViews:;
- (void)setRankImage:;
- (void)setTitle:;
- (void)prepareForReuse;
- (id)initWithFrame:;
- (id)title;
- (void).cxx_destruct;
- (void)setupViews;
- (id)arrowImage;
- (void)setArrowImage:;
- (void)updateWithModel:;
@end
