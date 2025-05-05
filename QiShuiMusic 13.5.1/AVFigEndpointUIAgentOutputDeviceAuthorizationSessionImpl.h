@interface AVFigEndpointUIAgentOutputDeviceAuthorizationSessionImpl : NSObject
@property (nonatomic) ^{OpaqueFigEndpointUIAgent=} figEndpointUIAgent;
@property (nonatomic) AVOutputDeviceAuthorizationSession parentAuthorizationSession;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)outputDeviceAuthorizationRequestImpl:didRespondWithAuthorizationToken:;
- (void)dealloc;
- (void)setParentAuthorizationSession:;
- (void)_showAuthPromptWithUniqueID:routeDescriptor:pinMode:reason:;
- (void).cxx_destruct;
- (void)_notifyCurrentRequestOfTerminalStatus:error:;
- (void)_finishedWithPrompt;
- (void)outputDeviceAuthorizationRequestImplDidCancel:;
- (id)figEndpointUIAgent;
- (id)parentAuthorizationSession;
- (id)initWithFigEndpointUIAgent:;
- (void)_startNewRequest:impl:;
@end
