@interface AARemoteServer : NSObject
@property (nonatomic) AAURLSession session;
@property (nonatomic) AAURLSession signingSession;
- (void)setSession:;
- (id)init;
- (void)loginDelegates:parameters:completion:;
- (void)authenticateAccount:completion:;
- (id)_redactedHeadersFromHTTPHeaders:;
- (void)registerAccount:withHSA:completion:;
- (void)setSigningSession:;
- (void)configurationWithCompletion:;
- (void)_fetchConfigurationAndResponseWithCompletion:;
- (id)_configurationCacheInvalidatingIfNecessary;
- (id)signingSession;
- (void)_setConfigurationCache:;
- (id)session;
- (void)_startRequest:responseClass:mainThread:completion:;
- (void).cxx_destruct;
- (void)_configurationAndResponseWithCompletion:;
- (id)_redactedBodyStringWithPropertyList:;
- (id)_newURLRequestWithURLString:;
- (id)_bodyDictionaryWithProtocolVersion:;
- (id)_configurationLock_configurationCacheInvalidatingIfNecessary;
+ (id)sharedServer;
@end
