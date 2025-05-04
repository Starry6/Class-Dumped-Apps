@interface AWEFeedScreenCaptureMonitor : NSObject
@property (nonatomic) BOOL screenRecording;
- (void)userDidTakeScreenshot:;
- (void)updateRecordState;
- (void)trackCurrentABTestData;
- (void)trackCurrentSettingsData;
- (void)trackCurrentUITree;
- (long long)screenShotDumpViewTreeCount;
- (id)dumpViewTree;
- (void)trackScreenRecordingEvent;
- (id)dumpViewTree:depth:maxDepth:;
- (void)changeLogLevelIfNeed;
- (id)init;
- (void)dealloc;
- (void)setupObservers;
- (BOOL)screenRecording;
- (void)setScreenRecording:;
- (void)setupNotifications;
+ (id)sharedInstance;
+ (void)setup;
@end
