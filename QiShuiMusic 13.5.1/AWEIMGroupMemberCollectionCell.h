@interface AWEIMGroupMemberCollectionCell : UICollectionViewCell
@property (nonatomic) IESIMSaaSAWEIMUser user;
@property (nonatomic) NSString groupAlias;
@property (nonatomic) UIImageView avatarView;
@property (nonatomic) UILabel nameLabel;
- (void)configWithUser:type:groupAlias:;
- (id)groupAlias;
- (BOOL)p_isLightStyle;
- (void)p_setupAccessibilityValueWithType:;
- (void)p_updateUI;
- (void)renderModel:context:;
- (void)setGroupAlias:;
- (void)setUser:;
- (id)avatarView;
- (void)setAvatarView:;
- (id)initWithFrame:;
- (id)user;
- (void).cxx_destruct;
- (id)nameLabel;
- (void)setNameLabel:;
- (void)setupUI;
+ (double)itemGap;
+ (id)identifier;
+ (id)itemSize;
@end
