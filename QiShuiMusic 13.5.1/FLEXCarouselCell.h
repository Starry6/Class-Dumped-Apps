@interface FLEXCarouselCell : UICollectionViewCell
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIView selectionIndicatorStripe;
@property (nonatomic) BOOL constraintsInstalled;
@property (nonatomic) NSString title;
- (id)initWithFrame:;
- (void)updateAppearance;
- (id)title;
- (void)setTitle:;
- (void)prepareForReuse;
- (void)installConstraints;
- (void)setSelected:;
- (id)titleLabel;
- (id)selectionIndicatorStripe;
- (BOOL)constraintsInstalled;
- (void)setConstraintsInstalled:;
- (void).cxx_destruct;
@end
