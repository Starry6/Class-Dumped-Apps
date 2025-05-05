@interface SAIntentGroupAppAuthorizationStatusRequest : SABaseClientBoundCommand
@property (nonatomic) NSArray appBundleIds;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)appBundleIds;
- (void)setAppBundleIds:;
+ (id)appAuthorizationStatusRequest;
+ (id)appAuthorizationStatusRequestWithDictionary:context:;
@end
