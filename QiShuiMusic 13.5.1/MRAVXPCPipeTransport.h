@interface MRAVXPCPipeTransport : MRExternalDeviceTransport
@property (nonatomic) MRAVOutputDevice outputDevice;
@property (nonatomic) NSXPCListenerEndpoint pipeEndpoint;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)hostname;
- (id)outputDevice;
- (id)deviceInfo;
- (void)dealloc;
- (id)uid;
- (long long)port;
- (id)error;
- (void).cxx_destruct;
- (void)stream:handleEvent:;
- (void)reset;
- (id)description;
- (id)name;
- (void)sendData:;
- (BOOL)shouldUseSystemAuthenticationPrompt;
- (void)setShouldUseSystemAuthenticationPrompt:;
- (id)createConnectionWithUserInfo:;
- (BOOL)requiresCustomPairing;
- (id)initWithOutputDevice:pipeEndpoint:;
- (BOOL)getInputStream:outputStream:userInfo:;
- (void)_onQueue_resetStreams;
- (id)pipeEndpoint;
@end
