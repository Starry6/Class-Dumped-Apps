@interface AWEPostVideoMaskView : UIView
@property (nonatomic) UIView contentView;
@property (nonatomic) UIImageView playImgView;
@property (nonatomic) UILabel titleLabel;
- (void)__setupUI;
- (id)playImgView;
- (void)setPlayImgView:;
- (void)updateMaskViewTitle:;
- (void)updateMaskViewAlpha:;
- (id)initWithFrame:;
- (id)contentView;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (void)setContentView:;
- (id)title;
- (id)titleLabel;
@end
