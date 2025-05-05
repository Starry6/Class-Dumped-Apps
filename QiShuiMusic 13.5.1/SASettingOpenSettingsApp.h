@interface SASettingOpenSettingsApp : SASettingOpenSettings
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
+ (id)openSettingsApp;
+ (id)openSettingsAppWithDictionary:context:;
@end
