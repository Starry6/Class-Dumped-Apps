@interface AWEMVChannelVSLeftBottomView : UIView
@property (nonatomic) UIImageView avatarImageView;
@property (nonatomic) UILabel nameLabel;
@property (nonatomic) UIView<AWEFeedLiveMarkViewProtocol> liveMarkView;
@property (nonatomic) AWEAwemeModel model;
- (void)setLiveMarkView:;
- (id)liveMarkView;
- (void)setupSubViews;
- (id)livingMarkViewGradientColors:;
- (void)startAvatarLiveAnimationIfNeeded;
- (void)configWithModel:nickName:avatarUrls:;
- (void)setModel:;
- (id)init;
- (id)model;
- (id)nameLabel;
- (void).cxx_destruct;
- (void)setNameLabel:;
- (id)avatarImageView;
- (void)setAvatarImageView:;
@end
