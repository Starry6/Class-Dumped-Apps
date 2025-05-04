@interface AWEMusicStreamingMiniCommonInfoPopupView : AWEMusicStreamingBasePopupView
@property (nonatomic) UIImageView imageView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel descLabel;
@property (nonatomic) AWEMusicStreamingMiniCommonInfoPopupViewModel viewModel;
- (id)descLabel;
- (void)setDescLabel:;
- (void)showInView:duration:;
- (id)initWithViewModel:;
- (id)viewModel;
- (void)setTitleLabel:;
- (void)setViewModel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setImageView:;
- (id)imageView;
- (void)setupSubviews;
@end
