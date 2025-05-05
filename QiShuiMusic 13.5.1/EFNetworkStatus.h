@interface EFNetworkStatus : NSObject
@property (nonatomic) NSObject<OS_nw_path_monitor> pathMonitor;
@property (nonatomic) NSObject<OS_dispatch_queue> monitorQueue;
@property (nonatomic) NSObject<OS_nw_path> currentPath;
@property (nonatomic) BOOL available;
@property (nonatomic) BOOL expensive;
@property (nonatomic) BOOL constrained;
- (BOOL)isConstrained;
- (id)initWithInterfaceType:;
- (BOOL)isAvailable;
- (BOOL)isExpensive;
- (void).cxx_destruct;
- (id)pathMonitor;
- (id)currentPath;
- (id)monitorQueue;
- (id)initWithPathMonitor:;
+ (id)external;
+ (id)wifi;
+ (id)cellular;
+ (id)wired;
@end
