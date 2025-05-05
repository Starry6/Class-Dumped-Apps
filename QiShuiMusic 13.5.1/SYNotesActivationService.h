@interface SYNotesActivationService : NSObject
@property (nonatomic) NSXPCListener _listener;
@property (nonatomic) NSObject<OS_dispatch_queue> _serviceQueue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)_setServiceQueue:;
- (id)_listener;
- (id)activateNotesWithContext:completion:;
- (void)beginListeningToConnections;
- (BOOL)listener:shouldAcceptNewConnection:;
- (void).cxx_destruct;
- (void)_setListener:;
- (id)_serviceQueue;
@end
