@interface AVFigEndpointUIAgentOutputDeviceAuthorizationRequestImpl : NSObject
@property (nonatomic) AVFigEndpointUIAgentOutputDeviceAuthorizationSessionImpl parentAuthorizationSessionImpl;
@property (nonatomic) NSString ID;
@property (nonatomic) AVOutputDevice outputDevice;
@property (nonatomic) NSString authorizationTokenType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)ID;
- (void)cancel;
- (id)outputDevice;
- (void)dealloc;
- (void).cxx_destruct;
- (id)authorizationTokenType;
- (void)respondWithAuthorizationToken:completionHandler:;
- (id)initWithID:outputDevice:authorizationTokenType:;
- (void)enterTerminalStatus:error:;
- (id)parentAuthorizationSessionImpl;
- (void)setParentAuthorizationSessionImpl:;
@end
