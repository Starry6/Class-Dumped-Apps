@interface AWEProfilePreviewExtensionCell : UICollectionViewCell
@property (nonatomic) BDImageView imageView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel subtitleLabel;
@property (nonatomic) AWEProfileExtensionAreaCellViewModel model;
- (void)setModel:;
- (id)initWithFrame:;
- (void)setSubtitleLabel:;
- (id)model;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setImageView:;
- (id)subtitleLabel;
- (id)imageView;
- (void)setupUI;
+ (double)preferWidthWithModel:;
@end
