@interface BRContainersMonitor : NSObject
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)addObserver:forContainerID:;
- (void)removeObserver:forContainerID:;
+ (BOOL)isContainerID:;
+ (id)containerIDFromPrimaryIdentifier:secondaryIdentifier:;
+ (id)bundleIDFromPrimaryIdentifier:secondaryIdentifier:;
+ (BOOL)isContainerIDForeground:;
@end
