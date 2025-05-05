@interface PLCameraAppWatcher : NSObject
@property (nonatomic) PLForegroundMonitor foregroundMonitor;
@property (nonatomic) BOOL isCameraRunning;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (BOOL)isCameraRunning;
- (void)foregroundMonitor:changedStateToForeground:forBundleIdentifier:;
- (id)foregroundMonitor;
- (void).cxx_destruct;
@end
