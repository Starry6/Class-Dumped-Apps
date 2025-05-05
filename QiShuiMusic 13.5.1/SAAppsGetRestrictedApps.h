@interface SAAppsGetRestrictedApps : SABaseClientBoundCommand
@property (nonatomic) NSArray appIds;
@property (nonatomic) NSString executionEnvironment;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (BOOL)mutatingCommand;
- (id)executionEnvironment;
- (void)setExecutionEnvironment:;
- (id)appIds;
- (void)setAppIds:;
+ (id)getRestrictedApps;
+ (id)getRestrictedAppsWithDictionary:context:;
@end
