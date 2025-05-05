@interface PUEditingExtensionUndoProxyExtensionSide : NSObject
@property (nonatomic) NSXPCConnection connection;
@property (nonatomic) <PUEditingExtensionUndoTarget> target;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)remoteObject;
- (id)initWithEndpoint:;
- (void)setTarget:;
- (id)connection;
- (void).cxx_destruct;
- (id)target;
- (void)performUndo;
- (void)performRedo;
- (void)setShowUndoRedo:;
- (void)setUndoEnabled:redoEnabled:;
@end
