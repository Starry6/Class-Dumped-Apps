@interface SAExecuteOnRemoteResponse : SABaseCommand
@property (nonatomic) SARemoteDevice remoteDevice;
@property (nonatomic) BOOL responseFromRemote;
@property (nonatomic) <SAAceCommand> result;
@property (nonatomic) NSString aceId;
@property (nonatomic) NSString refId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)result;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (void)setRemoteDevice:;
- (id)remoteDevice;
- (id)encodedClassName;
- (void)setResult:;
- (BOOL)responseFromRemote;
- (void)setResponseFromRemote:;
+ (id)executeOnRemoteResponse;
+ (id)executeOnRemoteResponseWithDictionary:context:;
@end
