@interface SALCMToggleButton : SAAceView
@property (nonatomic) SABaseCommand commandToToggleToOffMode;
@property (nonatomic) SABaseCommand commandToToggleToOnMode;
@property (nonatomic) NSDictionary offIconDynamicImage;
@property (nonatomic) NSString offTitle;
@property (nonatomic) NSDictionary onIconDynamicImage;
@property (nonatomic) NSString onTitle;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)commandToToggleToOffMode;
- (void)setCommandToToggleToOffMode:;
- (id)commandToToggleToOnMode;
- (void)setCommandToToggleToOnMode:;
- (id)offIconDynamicImage;
- (void)setOffIconDynamicImage:;
- (id)offTitle;
- (void)setOffTitle:;
- (id)onIconDynamicImage;
- (void)setOnIconDynamicImage:;
- (id)onTitle;
- (void)setOnTitle:;
+ (id)toggleButton;
+ (id)toggleButtonWithDictionary:context:;
@end
