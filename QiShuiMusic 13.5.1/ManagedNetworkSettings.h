@interface ManagedNetworkSettings : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
- (void)handleEvent:;
- (id)init;
- (void).cxx_destruct;
- (void)reloadMNS;
- (void)reloadNetworkdSettings;
- (void)setQueue:;
- (id)queue;
+ (id)sharedMNS;
@end
