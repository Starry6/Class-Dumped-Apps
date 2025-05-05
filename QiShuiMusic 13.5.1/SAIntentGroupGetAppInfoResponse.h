@interface SAIntentGroupGetAppInfoResponse : SABaseCommand
@property (nonatomic) NSArray appInfo;
@property (nonatomic) NSString aceId;
@property (nonatomic) NSString refId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (id)appInfo;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (void)setAppInfo:;
+ (id)getAppInfoResponse;
+ (id)getAppInfoResponseWithDictionary:context:;
@end
