@interface AWERVNewDetailAuthorInfoView : UIView
@property (nonatomic) UIImageView avatarImageView;
@property (nonatomic) UILabel nickNameLabel;
@property (nonatomic) DUXButton followButton;
@property (nonatomic) UILabel timeStampLabel;
@property (nonatomic) AWEAwemeModel model;
@property (nonatomic) AWEUserModel user;
@property (nonatomic) q sizeStyle;
@property (nonatomic) AWEFeedDetailCardCellAuthorInfoViewLayout layoutConfig;
@property (nonatomic) @? followBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setLayoutConfig:;
- (id)followButton;
- (id)nickNameLabel;
- (void)setNickNameLabel:;
- (void)setFollowButton:;
- (void)setSizeStyle:;
- (void)followButtonAction;
- (id)followBlock;
- (void)setFollowBlock:;
- (id)timeStampLabel;
- (void)setTimeStampLabel:;
- (id)initWithFrame:sizeStyle:;
- (id)initWithFrame:sizeStyle:layoutConfig:;
- (void)updateFollowBtnWithUser:;
- (id)user;
- (void)setModel:;
- (void)setUser:;
- (id)initWithFrame:;
- (id)model;
- (void).cxx_destruct;
- (id)avatarImageView;
- (void)configureSubviews;
- (void)setAvatarImageView:;
- (void)updateWithModel:;
- (long long)sizeStyle;
- (void)configureConstraints;
- (id)layoutConfig;
@end
