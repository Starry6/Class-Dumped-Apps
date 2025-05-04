@interface AWEIMMessageTabEnterpriseModeSwitchTitleComponent : AWEIMComponentBase
@property (nonatomic) DUXButton titleSwitchBtn;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentDidMounted:;
- (void)hostVC_viewDidAppear;
- (BOOL)canShowCurrentTitleView;
- (id)currentNavigationTitleView;
- (void)awe_themeDidChange;
- (id)titleSwitchBtn;
- (id)__iconImage;
- (void)__didTapOnSwitchBtn;
- (void)setTitleSwitchBtn:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
+ (BOOL)canCreateComponentWithContext:;
@end
