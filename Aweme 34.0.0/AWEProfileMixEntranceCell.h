@interface AWEProfileMixEntranceCell : UICollectionViewCell
@property (nonatomic) UIImageView icon;
@property (nonatomic) UIImageView arrow;
@property (nonatomic) UILabel title;
- (id)icon;
- (void)prepareForReuse;
- (id)initWithFrame:;
- (void)setIcon:;
- (void).cxx_destruct;
- (void)setupConstraints;
- (id)title;
- (void)setTitle:;
- (void)setupUI;
- (id)arrow;
- (void)setArrow:;
@end
