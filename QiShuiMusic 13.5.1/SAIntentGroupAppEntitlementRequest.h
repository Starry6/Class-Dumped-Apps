@interface SAIntentGroupAppEntitlementRequest : SABaseClientBoundCommand
@property (nonatomic) NSString appBundleId;
- (void)setAppBundleId:;
- (id)groupIdentifier;
- (id)appBundleId;
- (BOOL)requiresResponse;
- (id)encodedClassName;
+ (id)appEntitlementRequest;
+ (id)appEntitlementRequestWithDictionary:context:;
@end
