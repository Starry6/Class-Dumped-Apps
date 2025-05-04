@interface AWEMusicSteamingBGMusicPopupView : AWEMusicStreamingBasePopupView
@property (nonatomic) UIImageView avatarImgView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel contentLabel;
- (id)avatarImgView;
- (void)setAvatarImgView:;
- (void)setupLayouts;
- (void)showInView:duration:;
- (id)initWithFrame:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)contentLabel;
- (void)setContentLabel:;
@end
