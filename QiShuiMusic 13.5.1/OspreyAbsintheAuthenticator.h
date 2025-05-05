@interface OspreyAbsintheAuthenticator : NSObject
@property (nonatomic) q state;
@property (nonatomic) NSData sessionInfo;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)sessionInfo;
- (void)dealloc;
- (void)setState:;
- (void)setSessionInfo:;
- (long long)state;
- (void).cxx_destruct;
- (void)didMoveToState:;
- (unsigned long long)authenticationStrategyVersion;
- (void)signData:success:failure:;
- (id)initWithChannel:connectionPreferences:;
- (BOOL)_readyToSignClientData;
- (void)willMoveToState:;
- (id)_signData:;
- (BOOL)isSessionInfoExpired;
- (void)_ensureAuthenticatedWithCompletion:failure:;
- (void)_initializeAbsintheClientWithCertificateData:success:fail:;
@end
