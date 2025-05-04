@interface AWENoticeFollowPushView : UIView
@property (nonatomic) <AWENoticeFollowPushViewDelegate> delegate;
@property (nonatomic) UIImageView avatarImageView;
@property (nonatomic) UILabel nameLabel;
@property (nonatomic) UILabel extTagLabel;
@property (nonatomic) UILabel contentLabel;
@property (nonatomic) UILabel ensureLabel;
- (void)setExtTagLabel:;
- (id)extTagLabel;
- (void)p_setUpUI;
- (void)setEnsureLabel:;
- (id)ensureLabel;
- (void)p_folowUser;
- (void)updateExtTagLabel;
- (void)updateAfterFollowSuccess:;
- (void)configure;
- (id)delegate;
- (id)intrinsicContentSize;
- (id)initWithDelegate:;
- (id)nameLabel;
- (void).cxx_destruct;
- (void)setDelegate:;
- (void)setNameLabel:;
- (id)avatarImageView;
- (id)contentLabel;
- (void)setAvatarImageView:;
- (void)setContentLabel:;
@end
