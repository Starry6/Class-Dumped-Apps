@interface AWEStorageServiceMonitorManager : NSObject
@property (nonatomic) AWEStorageServiceMonitor monitor;
@property (nonatomic) NSString sessionID;
- (void)setDelegateForAWEStorage;
- (void)startMonitorIfNeeded;
- (void)setSessionID:;
- (void)setMonitor:;
- (id)monitor;
- (id)init;
- (id)sessionID;
- (void).cxx_destruct;
- (void)startMonitor;
- (void)stopMonitor;
+ (id)sharedInstance;
@end
