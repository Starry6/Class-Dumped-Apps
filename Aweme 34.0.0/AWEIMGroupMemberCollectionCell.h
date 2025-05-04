@interface AWEIMGroupMemberCollectionCell : UICollectionViewCell
@property (nonatomic) AWEIMUser user;
@property (nonatomic) IESIMConversationParticipantModel memberModel;
@property (nonatomic) UIView onlineIndicatorView;
@property (nonatomic) UIImageView avatarView;
@property (nonatomic) UILabel nameLabel;
- (void)renderModel:context:;
- (void)p_updateUI;
- (void)setMemberModel:;
- (id)memberModel;
- (id)onlineIndicatorView;
- (void)configWithUser:type:groupMemberModel:shouldAddShareOptInfo:;
- (void)configBackgroundColor;
- (void)p_setupAccessibilityValueWithType:;
- (BOOL)p_isLightStyle;
- (void)setOnlineIndicatorView:;
- (id)user;
- (void)setUser:;
- (void)setAvatarView:;
- (id)initWithFrame:;
- (id)avatarView;
- (id)nameLabel;
- (void).cxx_destruct;
- (void)setNameLabel:;
- (void)setupUI;
+ (double)itemGap;
+ (id)identifier;
+ (id)itemSize;
@end
