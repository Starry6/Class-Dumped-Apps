@interface SALCMLiveTuneInButton : SAUIButton
@property (nonatomic) NSString liveTuneInButtonType;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)liveTuneInButtonType;
- (void)setLiveTuneInButtonType:;
+ (id)liveTuneInButton;
+ (id)liveTuneInButtonWithDictionary:context:;
@end
