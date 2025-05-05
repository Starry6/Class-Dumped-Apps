@interface LABaseService : NSObject
@property (nonatomic) Q clientsCount;
@property (nonatomic) <LAServiceManager> manager;
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
@property (nonatomic) NSString serviceID;
@property (nonatomic) NSXPCListenerEndpoint endpoint;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)dealloc;
- (id)serviceID;
- (unsigned long long)clientsCount;
- (id)manager;
- (void)setManager:;
- (BOOL)listener:shouldAcceptNewConnection:;
- (void).cxx_destruct;
- (id)endpoint;
- (id)queue;
- (void)_disconnectClient:;
+ (id)exportedInterface;
@end
