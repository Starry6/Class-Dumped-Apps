@interface SAIntentGroupAppEntitlementResponse : SABaseCommand
@property (nonatomic) NSArray appEntitlements;
@property (nonatomic) NSString aceId;
@property (nonatomic) NSString refId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)appEntitlements;
- (void)setAppEntitlements:;
+ (id)appEntitlementResponse;
+ (id)appEntitlementResponseWithDictionary:context:;
@end
