@interface PUEditingExtensionUndoProxyHostSide : NSObject
@property (nonatomic) NSXPCListener listener;
@property (nonatomic) NSXPCConnection connection;
@property (nonatomic) NSXPCListenerEndpoint listenerEndpoint;
@property (nonatomic) <PUEditingExtensionUndoButtonHost> target;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)remoteObject;
- (id)init;
- (id)listener;
- (void)setTarget:;
- (BOOL)listener:shouldAcceptNewConnection:;
- (id)connection;
- (void).cxx_destruct;
- (void)setConnection:;
- (id)listenerEndpoint;
- (id)target;
- (void)performUndo;
- (void)performRedo;
- (void)setShowUndoRedo:;
- (void)setUndoEnabled:redoEnabled:;
@end
