@interface AWELastThirdLoginCompactView : AWELastThirdLoginBaseView
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)guideLabel;
- (id)aAWEUserLoginThemeAdapter;
- (id)loginAvatarView;
- (id)loginActionButton;
- (id)loginTitleLabel;
- (id)loginNicknameLabel;
- (void)setupUI;
- (id)loginContainerView;
+ (Class)aAWEUserLoginThemeAdapterClass;
@end
