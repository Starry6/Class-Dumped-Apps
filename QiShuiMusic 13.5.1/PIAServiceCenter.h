@interface PIAServiceCenter : NSObject
@property (nonatomic) NSMapTable protocolClassTable;
@property (nonatomic) NSMapTable singletonTable;
@property (nonatomic) {_opaque_pthread_mutex_t=q[56c]} protoClzLock;
@property (nonatomic) {_opaque_pthread_mutex_t=q[56c]} singletonLock;
- (void)unbindProtocol:;
- (void)bindProtocol:service:;
- (Class)getServiceClassWithProtocol:;
- (id)protoClzLock;
- (id)protocolClassTable;
- (void)setProtoClzLock:;
- (void)setProtocolClassTable:;
- (void)setSingletonLock:;
- (void)setSingletonTable:;
- (id)singletonLock;
- (id)singletonTable;
- (id)init;
- (void).cxx_destruct;
- (void)removeService:;
- (id)getService:;
+ (void)bindProtocol:service:;
+ (id)defaultCenter;
+ (id)getService:;
@end
