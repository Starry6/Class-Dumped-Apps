@interface AWEBridgeTracertMonitorManager : NSObject
@property (nonatomic) NSMutableDictionary monitorMap;
@property (nonatomic) NSRecursiveLock lock;
- (id)monitorMap;
- (void)setMonitorMap:;
- (void)registerMonitor:forKey:;
- (id)monitorForKey:;
- (void)removeMonitorForKey:;
- (id)init;
- (void)setLock:;
- (id)lock;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
