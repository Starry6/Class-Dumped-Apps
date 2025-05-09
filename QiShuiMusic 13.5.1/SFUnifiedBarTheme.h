@interface SFUnifiedBarTheme : SFThemeColorBarTheme
@property (nonatomic) BOOL isPrivate;
@property (nonatomic) UIColor tabAccessoryButtonTintColor;
@property (nonatomic) UIColor activeTabAccessoryButtonTintColor;
@property (nonatomic) UIColor inputFieldAccessoryButtonTintColor;
@property (nonatomic) UIColor inputFieldSecondaryAccessoryButtonTintColor;
@property (nonatomic) UIColor selectedMenuButtonTintColor;
@property (nonatomic) UIColor separatorColor;
@property (nonatomic) UIColor progressBarTintColor;
@property (nonatomic) UIColor tabProgressBarTintColor;
@property (nonatomic) UIColor activeTabProgressBarTintColor;
@property (nonatomic) UIColor tabControlsTintColor;
@property (nonatomic) UIColor activeTabControlsTintColor;
@property (nonatomic) UIColor overridePlatterColor;
@property (nonatomic) UIColor activeTabFieldTintColor;
@property (nonatomic) SFUnifiedTabBarItemTitleContainerViewTheme titleTheme;
@property (nonatomic) SFUnifiedTabBarItemTitleContainerViewTheme tabTitleTheme;
@property (nonatomic) SFUnifiedTabBarItemTitleContainerViewTheme activeTabTitleTheme;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)titleTheme;
- (id)separatorColor;
- (BOOL)isPrivate;
- (id)tabAccessoryButtonTintColor;
- (id)activeTabTitleTheme;
- (id)activeTabFieldTintColor;
- (id)activeTabControlsTintColor;
- (id)inputFieldAccessoryButtonTintColor;
- (id)activeTabProgressBarTintColor;
- (id)tabProgressBarTintColor;
- (id)progressBarTintColor;
- (id)activeTabAccessoryButtonTintColor;
- (void).cxx_destruct;
- (id)tabControlsTintColor;
- (id)tabTitleTheme;
- (id)selectedMenuButtonTintColor;
- (id)initWithBarTintStyle:preferredBarTintColor:controlsTintColor:;
- (id)inputFieldSecondaryAccessoryButtonTintColor;
- (id)overridePlatterColor;
+ (id)defaultTheme;
@end
