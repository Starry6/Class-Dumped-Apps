@interface IOSurfaceRemoteRemoteClient : NSObject
@property (nonatomic) NSInteger pid;
@property (nonatomic) NSMutableDictionary surfaceStates;
@property (nonatomic) NSObject<OS_xpc_object> remoteConnection;
@property (nonatomic) NSObject<OS_dispatch_queue> disconnectedQueue;
@property (nonatomic) @? disconnectedHandler;
- (void)dealloc;
- (void)_handleMessage:;
- (int)pid;
- (void).cxx_destruct;
- (id)description;
- (void)_handleError:;
- (void)setPid:;
- (id)initWithRemoteConnection:disconnectedQueue:disconnectedHandler:;
- (void)_addSurface:mappedAddress:mappedSize:extraData:;
- (BOOL)_removeSurface:;
- (id)_getClient:inboundExtradata:outboundExtraData:;
- (id)surfaceStates;
- (void)setSurfaceStates:;
- (id)remoteConnection;
- (void)setRemoteConnection:;
- (id)disconnectedQueue;
- (void)setDisconnectedQueue:;
- (id)disconnectedHandler;
- (void)setDisconnectedHandler:;
@end
