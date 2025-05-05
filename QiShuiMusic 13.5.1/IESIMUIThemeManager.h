@interface IESIMUIThemeManager : NSObject
@property (nonatomic) IESIMUITheme currentTheme;
- (void)switchToTheme:;
- (id)currentTheme;
+ (id)fetchDefatulTheme;
+ (id)sharedInstance;
@end
