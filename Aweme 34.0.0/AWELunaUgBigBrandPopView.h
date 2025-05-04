@interface AWELunaUgBigBrandPopView : AWELunaUgPopView
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel subTitleLabel;
@property (nonatomic) UIImageView coverImageView;
- (id)coverImageView;
- (void)setCoverImageView:;
- (id)p_lightColorNamed:;
- (void)didClickMainTitle;
- (void)didClickSubTitle;
- (void)didClickBackgroundImage;
- (id)initWithConfig:;
- (void)updateWithConfig:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setSubTitleLabel:;
- (id)subTitleLabel;
- (void)setUpUI;
@end
