@interface AWEPayRedPacketAuthorView : UIView
@property (nonatomic) AWEIMDouyinRedPacketCoverModel model;
@property (nonatomic) UILabel fromLabel;
@property (nonatomic) UIImageView avatar;
@property (nonatomic) UILabel authorName;
@property (nonatomic) UIImageView followedView;
@property (nonatomic) UIButton follow;
@property (nonatomic) UIView cutView;
@property (nonatomic) @? followBlock;
@property (nonatomic) @? avatarBlock;
- (void)p_setupUI;
- (id)followedView;
- (id)followBlock;
- (void)setFollowBlock:;
- (id)follow;
- (void)setFollow:;
- (void)setFollowButtonHidden;
- (id)cutView;
- (BOOL)p_isShowFollow;
- (id)avatarBlock;
- (void)p_transferToAuthor:;
- (void)p_followAuthor;
- (void)setAvatarBlock:;
- (void)setFollowedView:;
- (void)setCutView:;
- (void)setModel:;
- (void)dealloc;
- (id)model;
- (void).cxx_destruct;
- (id)authorName;
- (id)avatar;
- (void)setAvatar:;
- (id)fromLabel;
- (void)setFromLabel:;
- (void)setAuthorName:;
- (void)updateWithModel:;
@end
