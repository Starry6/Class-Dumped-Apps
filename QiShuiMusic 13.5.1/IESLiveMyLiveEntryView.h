@interface IESLiveMyLiveEntryView : UIButton
@property (nonatomic) HTSLiveUser user;
@property (nonatomic) HTSLiveAvatarImageView avatarImageView;
- (id)initWithFrame:user:;
- (void)loadAvatarAndBorder;
- (void)setUser:;
- (id)intrinsicContentSize;
- (id)user;
- (void).cxx_destruct;
- (id)avatarImageView;
- (void)setAvatarImageView:;
- (void)setupViews;
- (void)updateUser:;
@end
