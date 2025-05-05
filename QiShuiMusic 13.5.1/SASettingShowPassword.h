@interface SASettingShowPassword : SASettingCommand
@property (nonatomic) NSString appBundleId;
@property (nonatomic) NSString appOrWebsiteName;
@property (nonatomic) NSNumber shouldPromptForAuthentication;
@property (nonatomic) NSString spokenAppOrWebsiteName;
- (void)setAppBundleId:;
- (id)groupIdentifier;
- (id)appBundleId;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)appOrWebsiteName;
- (void)setAppOrWebsiteName:;
- (id)shouldPromptForAuthentication;
- (void)setShouldPromptForAuthentication:;
- (id)spokenAppOrWebsiteName;
- (void)setSpokenAppOrWebsiteName:;
+ (id)showPassword;
+ (id)showPasswordWithDictionary:context:;
@end
