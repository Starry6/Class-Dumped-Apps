@interface SACreateSessionInfoRequest : SABaseCommand
@property (nonatomic) NSNumber deviceAuthVersion;
@property (nonatomic) NSData sessionInfoRequest;
@property (nonatomic) NSString aceId;
@property (nonatomic) NSString refId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)deviceAuthVersion;
- (void)setDeviceAuthVersion:;
- (id)sessionInfoRequest;
- (void)setSessionInfoRequest:;
+ (id)createSessionInfoRequest;
+ (id)createSessionInfoRequestWithDictionary:context:;
@end
