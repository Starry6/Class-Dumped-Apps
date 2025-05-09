@interface IESLiveSaaSRecommendAnchorCell : UITableViewCell
@property (nonatomic) CAShapeLayer avatarRedBorder;
@property (nonatomic) UIImageView anchorAvatarView;
@property (nonatomic) UIView anchorInfoContainer;
@property (nonatomic) UILabel nickNameLabel;
@property (nonatomic) UILabel infoLabel;
@property (nonatomic) UILabel editScriptLabel;
@property (nonatomic) UIButton actionBtn;
@property (nonatomic) UIImageView<IESLiveWebPPlayer> animationView;
@property (nonatomic) IESLiveSaaSRecommendAnchorsStore store;
@property (nonatomic) IESLiveSaaSPBRcmdUser data;
- (id)avatarRedBorder;
- (void)didClickAvatar:;
- (id)editScriptLabel;
- (void)_createUIComponents;
- (id)actionBtn;
- (id)anchorAvatarView;
- (id)anchorInfoContainer;
- (void)didClickActionButton:;
- (void)loadWithStore:userRoomData:orientation:;
- (id)nickNameLabel;
- (void)setActionBtn:;
- (void)setAnchorAvatarView:;
- (void)setAnchorInfoContainer:;
- (void)setAvatarRedBorder:;
- (void)setEditScriptLabel:;
- (void)setNickNameLabel:;
- (void)updateActionWithFollow:;
- (void)updateFollowStatus;
- (id)initWithStyle:reuseIdentifier:;
- (void)dealloc;
- (void)setStore:;
- (id)data;
- (void)prepareForReuse;
- (id)hitTest:withEvent:;
- (void)refreshUI;
- (void).cxx_destruct;
- (void)setData:;
- (id)store;
- (id)animationView;
- (void)setAnimationView:;
- (id)infoLabel;
- (void)setInfoLabel:;
- (void)willDisplay;
+ (double)cellHeightWithData:;
@end
