@interface CDDCloudKitServer : NSObject
@property (nonatomic) NSXPCListener listener;
@property (nonatomic) CDDCloudKitServerConfiguration configuration;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) PFCloudKitContainerProvider containerProvider;
@property (nonatomic) CKScheduler scheduler;
- (void)setUp;
- (void)dealloc;
- (id)scheduler;
- (id)containerProvider;
- (id)listener;
- (void)tearDown;
- (id)configuration;
- (BOOL)listener:shouldAcceptNewConnection:;
- (id)handleMessage:reply:;
- (id)initWithListener:configuration:;
- (void)finishedActivity:withResult:inManagedObjectContext:;
@end
