@interface AWECommentFunctionCollectionViewCell : UICollectionViewCell
@property (nonatomic) UIView imageBackgroundView;
@property (nonatomic) UIImageView imageView;
@property (nonatomic) UILabel nameLabel;
@property (nonatomic) UIView yellowPoint;
@property (nonatomic) NSValue iconSize;
- (id)imageBackgroundView;
- (id)yellowPoint;
- (void)layoutSubviewsPosition;
- (void)configCellWithModel:;
- (void)setImageBackgroundView:;
- (void)setYellowPoint:;
- (void)setIconSize:;
- (id)initWithFrame:;
- (id)iconSize;
- (id)nameLabel;
- (void).cxx_destruct;
- (void)setImageView:;
- (id)imageView;
- (void)setNameLabel:;
- (void)setupUI;
@end
