@interface SASettingSetSiriAuthorizationForApp : SASettingSetBool
@property (nonatomic) NSString bundleId;
- (id)groupIdentifier;
- (id)bundleId;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (void)setBundleId:;
- (BOOL)mutatingCommand;
+ (id)setSiriAuthorizationForApp;
+ (id)setSiriAuthorizationForAppWithDictionary:context:;
@end
