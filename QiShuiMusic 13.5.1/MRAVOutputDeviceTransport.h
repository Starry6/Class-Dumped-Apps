@interface MRAVOutputDeviceTransport : MRExternalDeviceTransport
- (id)hostname;
- (id)deviceInfo;
- (id)uid;
- (void)setError:;
- (long long)port;
- (id)error;
- (id)debugDescription;
- (void)resetWithError:;
- (void).cxx_destruct;
- (id)description;
- (id)name;
- (BOOL)shouldUseSystemAuthenticationPrompt;
- (void)setShouldUseSystemAuthenticationPrompt:;
- (id)createConnectionWithUserInfo:;
- (id)initWithOutputDevice:groupID:connectionType:;
- (BOOL)requiresCustomPairing;
+ (id)_createConnectionWith:groupID:connectionType:shouldUseSystemAuthenticationPrompt:userInfo:;
@end
