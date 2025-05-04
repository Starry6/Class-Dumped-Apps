@interface AWELastAccountLoginCompactView : AWELastAccountLoginBaseView
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)guideLabel;
- (id)aAWEUserLoginThemeAdapter;
- (void)setupUIWithMultiAccount:;
- (id)loginAvatarView;
- (id)loginActionButton;
- (id)loginTitleLabel;
- (id)loginNicknameLabel;
- (void)didMoveToSuperview;
- (void)layoutSubviews;
- (id)loginContainerView;
+ (Class)aAWEUserLoginThemeAdapterClass;
@end
