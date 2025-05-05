@interface FMXPCServiceDescription : NSObject
@property (nonatomic) NSString machService;
@property (nonatomic) Q options;
@property (nonatomic) NSObject exportedObject;
@property (nonatomic) NSXPCInterface exportedInterface;
@property (nonatomic) NSXPCInterface remoteObjectInterface;
@property (nonatomic) @? interruptionHandler;
@property (nonatomic) @? invalidationHandler;
- (void)setOptions:;
- (void)setExportedInterface:;
- (id)interruptionHandler;
- (id)exportedObject;
- (id)exportedInterface;
- (id)initWithMachServiceName:options:remoteObjectInterface:interruptionHandler:invalidationHandler:;
- (void)setInterruptionHandler:;
- (void)setExportedObject:;
- (void)setRemoteObjectInterface:;
- (unsigned long long)options;
- (void)setMachService:;
- (id)initInternalWithMachServiceName:options:exportedObject:exportedInterface:remoteObjectInterface:interruptionHandler:invalidationHandler:;
- (id)machService;
- (void).cxx_destruct;
- (id)invalidationHandler;
- (void)setInvalidationHandler:;
- (id)initWithMachServiceName:options:exportedObject:exportedInterface:remoteObjectInterface:interruptionHandler:invalidationHandler:;
- (id)remoteObjectInterface;
@end
