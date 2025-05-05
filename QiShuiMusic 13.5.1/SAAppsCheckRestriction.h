@interface SAAppsCheckRestriction : SABaseClientBoundCommand
@property (nonatomic) NSString executionEnvironment;
@property (nonatomic) NSString launchId;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)launchId;
- (void)setLaunchId:;
- (id)encodedClassName;
- (id)executionEnvironment;
- (void)setExecutionEnvironment:;
+ (id)checkRestriction;
+ (id)checkRestrictionWithDictionary:context:;
@end
