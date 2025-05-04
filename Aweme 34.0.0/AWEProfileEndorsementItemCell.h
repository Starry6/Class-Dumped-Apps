@interface AWEProfileEndorsementItemCell : UICollectionViewCell
@property (nonatomic) AWEProfileEndorsementInfoModel model;
@property (nonatomic) BDImageView imageView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIImageView arrowView;
@property (nonatomic) AWEProfileEndorsementSubtitleLabel subTitleLabel;
- (void)configWithModel:;
- (void)configSubTitleWithModel:;
- (void)configWithEmptyStyle;
- (void)setModel:;
- (id)initWithFrame:;
- (id)model;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setImageView:;
- (unsigned long long)accessibilityTraits;
- (id)imageView;
- (id)arrowView;
- (void)setArrowView:;
- (void)setupUI;
- (void)setSubTitleLabel:;
- (id)subTitleLabel;
@end
