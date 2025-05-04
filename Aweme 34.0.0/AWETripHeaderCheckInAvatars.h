@interface AWETripHeaderCheckInAvatars : UIView
@property (nonatomic) NSArray avatarList;
@property (nonatomic) UIImageView leftAvatar;
@property (nonatomic) UIImageView midAvatar;
@property (nonatomic) UIImageView rightAvatar;
- (id)avatarList;
- (void)setAvatarList:;
- (id)leftAvatar;
- (id)rightAvatar;
- (void)setLeftAvatar:;
- (void)setRightAvatar:;
- (id)midAvatar;
- (id)avatarMaker;
- (void)configWithAvatarList:;
- (void)setMidAvatar:;
- (id)initWithFrame:;
- (void)updateLayout;
- (void).cxx_destruct;
- (void)setupUI;
@end
