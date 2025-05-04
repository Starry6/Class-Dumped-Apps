@interface AWEIMOnlinePrivacyFriendsListTableViewCell : UITableViewCell
@property (nonatomic) UIImageView avatarImageView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIImageView selectImageView;
@property (nonatomic) UIView bottomCuttingLine;
- (void)setSelectImageView:;
- (id)selectImageView;
- (id)aAWEBrandColorAdapter;
- (void)updateSelected:;
- (void)setBottomCuttingLine:;
- (id)bottomCuttingLine;
- (void)configUser:isSearching:isSelected:;
- (id)initWithStyle:reuseIdentifier:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setupUI;
- (id)avatarImageView;
- (void)setAvatarImageView:;
+ (Class)aAWEBrandColorAdapterClass;
+ (id)identifier;
+ (double)cellHeight;
@end
