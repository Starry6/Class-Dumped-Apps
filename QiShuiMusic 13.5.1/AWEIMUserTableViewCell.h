@interface AWEIMUserTableViewCell : UITableViewCell
@property (nonatomic) UILabel awemeUpdateCountLabel;
@property (nonatomic) UIImageView selectStateImageView;
@property (nonatomic) Q updateCount;
@property (nonatomic) IESIMSaaSAWEIMUser user;
@property (nonatomic) UIImageView avatarView;
@property (nonatomic) IESIMUserNameLabel nameLabel;
@property (nonatomic) UIImageView verifiedLogoView;
@property (nonatomic) UIView baseView;
@property (nonatomic) BOOL isMultiselect;
@property (nonatomic) BOOL isSelected;
@property (nonatomic) BOOL isSearching;
@property (nonatomic) Q uiStyle;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)changeToSelect:;
- (id)awemeUpdateCountLabel;
- (void)changeToMultiselect:;
- (void)changeToMultiselect:animated:;
- (void)configWithUser:awemeUpdateCount:couldSelected:;
- (id)initWithStyle:reuseIdentifier:uiStyle:;
- (void)layoutBaseViewContent;
- (void)p_addHighlightToAttributedString:inRange:;
- (BOOL)p_isSelf;
- (void)p_layoutMultiSelect;
- (void)p_setupUI;
- (id)p_verifyBadgeImage;
- (id)saas_imageNamed:;
- (id)selectStateImageView;
- (void)setAwemeUpdateCountLabel:;
- (void)setIsMultiselect:;
- (void)setSelectStateImageView:;
- (void)setVerifiedLogoView:;
- (id)verifiedLogoView;
- (unsigned long long)uiStyle;
- (void)setUser:;
- (id)initWithStyle:reuseIdentifier:;
- (void)layoutSubviews;
- (id)avatarView;
- (void)setAvatarView:;
- (BOOL)isSearching;
- (BOOL)isSelected;
- (void)refreshUI;
- (void)setHighlighted:animated:;
- (id)baseView;
- (id)user;
- (void).cxx_destruct;
- (void)setIsSelected:;
- (void)setBaseView:;
- (void)setUiStyle:;
- (BOOL)isMultiselect;
- (id)nameLabel;
- (id)colorNamed:;
- (void)setIsSearching:;
- (void)setNameLabel:;
- (unsigned long long)updateCount;
- (void)setUpdateCount:;
+ (id)identifier;
@end
