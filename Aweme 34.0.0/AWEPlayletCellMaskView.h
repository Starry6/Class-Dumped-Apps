@interface AWEPlayletCellMaskView : UIView
@property (nonatomic) UIView contentView;
@property (nonatomic) UIImageView playImgView;
@property (nonatomic) UILabel titleLabel;
- (id)playImgView;
- (BOOL)enableAdaptPlayletBigFontMode;
- (void)setPlayImgView:;
- (id)initWithFrame:;
- (id)contentView;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (void)setContentView:;
- (id)titleLabel;
- (id)titleLabelFont;
- (void)configureWithTitle:;
- (void)setUpUI;
@end
