@interface INStartSendingUpdatesForwardingAction : INIntentForwardingAction
@property (nonatomic) NSXPCConnection connection;
@property (nonatomic) NSXPCListenerEndpoint endpoint;
@property (nonatomic) <INIntentResponseObserver> observer;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)encodeWithXPCDictionary:;
- (id)initWithXPCDictionary:;
- (id)connection;
- (BOOL)executeRemotelyWithVendorRemote:completionHandler:;
- (void).cxx_destruct;
- (void)setConnection:;
- (id)endpoint;
- (id)observer;
- (void)executeLocallyWithIntentDeliverer:completionHandler:;
- (id)initWithIntent:endpointProvider:observer:;
- (id)initWithIntent:endpoint:observer:;
+ (Class)responseClass;
@end
