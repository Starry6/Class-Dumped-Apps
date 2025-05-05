@interface ICDeveloperTokenFetchRequest : ICRemoteRequestOperation
@property (nonatomic) q clientType;
- (long long)clientType;
- (void)execute;
- (id)initWithClientInfo:;
- (id)initWithCoder:;
- (void)_didFetchMediaToken:withError:;
- (void)performRequestWithResponseHandler:;
- (id)initWithClientInfo:options:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)setClientType:;
+ (BOOL)supportsSecureCoding;
+ (void)invalidateCachedDeveloperTokenForClientInfo:clientType:requester:completionHandler:;
+ (void)_invalidateCachedDeveloperTokenForClientInfo:requester:usingMediaTokenService:;
+ (id)_createMediaTokenServiceForClientInfo:clientType:requester:;
@end
