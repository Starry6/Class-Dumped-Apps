@interface AWEEComWidgetGuideNodeCell : UICollectionViewCell
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel subtitleLabel;
@property (nonatomic) UIImageView coverImgView;
- (id)coverImgView;
- (void)setCoverImgView:;
- (void)refreshWithModel:;
- (void)prepareForReuse;
- (id)initWithFrame:;
- (void)setSubtitleLabel:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (void)setupConstraints;
- (id)titleLabel;
- (id)subtitleLabel;
- (void)setupView;
@end
