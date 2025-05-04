@interface AWESearchRedirectGeneralSearchView : UIView
@property (nonatomic) UIImageView searchImageView;
@property (nonatomic) UIImageView entranceImageView;
@property (nonatomic) UIView topDivider;
@property (nonatomic) UIView imageBgView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel subtitleLabel;
- (void)configureUI;
- (id)entranceImageView;
- (void)setEntranceImageView:;
- (id)searchImageView;
- (void)setSearchImageView:;
- (id)imageBgView;
- (void)setImageBgView:;
- (id)searchIconImageName;
- (id)initWithTitle:;
- (void)setSubtitleLabel:;
- (BOOL)isDarkTheme;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)subtitleLabel;
- (void)updateWithTitle:;
- (void)setTopDivider:;
- (id)topDivider;
@end
