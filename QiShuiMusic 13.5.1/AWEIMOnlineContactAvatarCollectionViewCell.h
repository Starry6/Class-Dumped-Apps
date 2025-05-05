@interface AWEIMOnlineContactAvatarCollectionViewCell : AWEIMSkylightBaseCollectionViewCell
@property (nonatomic) UIView birthdayIconView;
@property (nonatomic) NSString uniqueFlag;
@property (nonatomic) NSString pageIdentifier;
- (void)updateOnlineViewBackgroundColor;
- (id)__indicatorBorderColor;
- (id)birthdayIconView;
- (void)createComponents;
- (void)iesim_themeReload;
- (void)p_setupBirthdayIconView;
- (void)renderWithModel:;
- (void)setBirthdayIconView:;
- (void)setUniqueFlag:;
- (id)uniqueFlag;
- (void)updateOnlineStatus;
- (void)updateOnlineStatusUI;
- (void)updateUserInfo;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)pageIdentifier;
- (void)setPageIdentifier:;
- (void)layoutComponents;
@end
