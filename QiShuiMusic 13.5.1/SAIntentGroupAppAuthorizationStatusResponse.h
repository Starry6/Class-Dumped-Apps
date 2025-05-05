@interface SAIntentGroupAppAuthorizationStatusResponse : SABaseCommand
@property (nonatomic) NSDictionary appAuthorizationStatusMap;
@property (nonatomic) NSString aceId;
@property (nonatomic) NSString refId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)appAuthorizationStatusMap;
- (void)setAppAuthorizationStatusMap:;
+ (id)appAuthorizationStatusResponse;
+ (id)appAuthorizationStatusResponseWithDictionary:context:;
@end
