@interface AWEIMGroupNoticeDisplayViewView : UIView
@property (nonatomic) UIView topView;
@property (nonatomic) UIButton avatarButton;
@property (nonatomic) UILabel nicknameLabel;
@property (nonatomic) UILabel updateTimeLabel;
@property (nonatomic) UIView lineView;
@property (nonatomic) UILabel contentLabel;
@property (nonatomic) AWEIMMessageConversation conversation;
- (void)setUpdateTimeLabel:;
- (void)updateWithConversation:;
- (id)conversation;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)topView;
- (id)lineView;
- (void)setLineView:;
- (void)setConversation:;
- (void)setupUI;
- (id)contentLabel;
- (void)setContentLabel:;
- (void)setTopView:;
- (id)nicknameLabel;
- (void)setNicknameLabel:;
- (id)updateTimeLabel;
- (void)updateWithUser:;
- (id)avatarButton;
- (void)setAvatarButton:;
@end
