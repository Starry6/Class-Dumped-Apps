@interface SOExtensionServiceConnection : NSObject
@property (nonatomic) NSXPCConnection xpcConnection;
@property (nonatomic) NSXPCListenerEndpoint serviceXpcEndpoint;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithListenerEndpoint:;
- (BOOL)_connectToService;
- (void)setXpcConnection:;
- (id)xpcConnection;
- (void).cxx_destruct;
- (void)beginAuthorizationWithCompletion:;
- (id)serviceXpcEndpoint;
- (void)setServiceXpcEndpoint:;
@end
