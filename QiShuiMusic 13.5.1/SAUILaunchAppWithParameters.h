@interface SAUILaunchAppWithParameters : SABaseClientBoundCommand
@property (nonatomic) NSString appBundleId;
@property (nonatomic) NSDictionary parameters;
- (void)setAppBundleId:;
- (id)groupIdentifier;
- (id)appBundleId;
- (BOOL)requiresResponse;
- (id)parameters;
- (id)encodedClassName;
- (void)setParameters:;
+ (id)launchAppWithParameters;
+ (id)launchAppWithParametersWithDictionary:context:;
@end
