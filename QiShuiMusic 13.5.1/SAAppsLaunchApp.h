@interface SAAppsLaunchApp : SABaseClientBoundCommand
@property (nonatomic) NSString applicationClientIdentifier;
@property (nonatomic) NSString executionEnvironment;
@property (nonatomic) NSString launchId;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)launchId;
- (void)setLaunchId:;
- (id)encodedClassName;
- (id)applicationClientIdentifier;
- (void)setApplicationClientIdentifier:;
- (id)executionEnvironment;
- (void)setExecutionEnvironment:;
+ (id)launchApp;
+ (id)launchAppWithDictionary:context:;
@end
