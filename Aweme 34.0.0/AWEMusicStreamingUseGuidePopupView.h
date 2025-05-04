@interface AWEMusicStreamingUseGuidePopupView : AWEMusicStreamingBasePopupView
@property (nonatomic) UIImageView imageView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel descLabel;
@property (nonatomic) UIButton linkBtn;
- (id)descLabel;
- (void)setDescLabel:;
- (void)showInView:duration:;
- (id)linkBtn;
- (void)guideLinkJump;
- (void)setLinkBtn:;
- (id)initWithFrame:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setImageView:;
- (id)imageView;
- (void)setupSubviews;
@end
