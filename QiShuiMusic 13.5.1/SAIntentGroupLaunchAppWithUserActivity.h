@interface SAIntentGroupLaunchAppWithUserActivity : SABaseClientBoundCommand
@property (nonatomic) NSString userActivityIdentifier;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)userActivityIdentifier;
- (void)setUserActivityIdentifier:;
+ (id)launchAppWithUserActivity;
+ (id)launchAppWithUserActivityWithDictionary:context:;
@end
