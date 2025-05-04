@interface AWENovelProfileAreaCardView : UIView
@property (nonatomic) UIImageView imageView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel subtitleLabel;
@property (nonatomic) AWEProfileExtensionAreaCardModel cardModel;
- (id)cardModel;
- (void)setCardModel:;
- (void)configWithCardModel:;
- (id)initWithFrame:;
- (void)setSubtitleLabel:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setImageView:;
- (id)subtitleLabel;
- (id)imageView;
- (void)setupSubviews;
- (void)viewTapped;
@end
