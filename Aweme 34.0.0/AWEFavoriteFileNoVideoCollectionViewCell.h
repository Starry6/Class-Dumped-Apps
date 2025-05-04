@interface AWEFavoriteFileNoVideoCollectionViewCell : UICollectionViewCell
@property (nonatomic) UIImageView videoImageView;
@property (nonatomic) UILabel noVideoLabel;
- (id)videoImageView;
- (void)setVideoImageView:;
- (id)noVideoLabel;
- (void)refreshWithProfileExploreStyle;
- (void)setNoVideoLabel:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setupUI;
+ (id)identifier;
@end
