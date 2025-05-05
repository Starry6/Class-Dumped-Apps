@interface SFUnifiedTabBarItemTitleContainerViewTheme : NSObject
@property (nonatomic) UIColor primaryTextColor;
@property (nonatomic) UIColor secondaryTextColor;
@property (nonatomic) UIColor placeholderTextColor;
@property (nonatomic) UIColor overrideTintColor;
@property (nonatomic) UIColor themeColor;
- (id)themeColor;
- (id)init;
- (id)primaryTextColor;
- (id)initWithPrimaryTextColor:secondaryTextColor:placeholderTextColor:overrideTintColor:themeColor:;
- (id)secondaryTextColor;
- (id)placeholderTextColor;
- (void).cxx_destruct;
- (id)overrideTintColor;
- (id)initWithPrimaryTextColor:secondaryTextColor:placeholderTextColor:;
@end
