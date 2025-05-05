@interface MRIDSCompanionTransport : MRExternalDeviceTransport
@property (nonatomic) NSString sessionUID;
- (id)hostname;
- (id)deviceInfo;
- (id)uid;
- (id)initWithOutputDevice:;
- (long long)port;
- (id)error;
- (void)_handleDeviceConnected:;
- (void)resetWithError:;
- (void).cxx_destruct;
- (id)name;
- (BOOL)shouldUseSystemAuthenticationPrompt;
- (void)setShouldUseSystemAuthenticationPrompt:;
- (id)createConnectionWithUserInfo:;
- (void)setSessionUID:;
- (id)_generateSessionUID;
- (id)sessionUID;
- (BOOL)supportsIdleDisconnection;
- (void)_handleDeviceDisconnected:;
- (void)_synchronized_setSessionUID:;
@end
