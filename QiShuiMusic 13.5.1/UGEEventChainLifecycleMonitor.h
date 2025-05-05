@interface UGEEventChainLifecycleMonitor : NSObject
@property (nonatomic) <UGEEventChainLifecycleListener> listener;
- (id)listener;
- (void).cxx_destruct;
- (void)setListener:;
+ (void)addChainLifecycleListener:;
+ (id)defaultMonitor;
@end
