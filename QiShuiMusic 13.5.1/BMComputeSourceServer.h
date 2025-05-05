@interface BMComputeSourceServer : NSObject
@property (nonatomic) NSXPCInterface interface;
@property (nonatomic) NSMapTable connections;
@property (nonatomic) NSXPCListener listener;
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
@property (nonatomic) <BMComputeSource> source;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)interface;
- (id)connections;
- (id)init;
- (id)initWithQueue:source:;
- (id)listener;
- (BOOL)listener:shouldAcceptNewConnection:;
- (id)initWithQueue:source:listener:;
- (void).cxx_destruct;
- (id)source;
- (id)queue;
- (void)activate;
+ (id)new;
@end
