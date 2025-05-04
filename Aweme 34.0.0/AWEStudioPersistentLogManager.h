@interface AWEStudioPersistentLogManager : NSObject
@property (nonatomic) BOOL running;
@property (nonatomic) double lastUploadTime;
@property (nonatomic) BOOL didCleanup;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)task:didWholeEndWithResult:error:;
- (void)exitCreativePath;
- (void)uploadLogsIfNeeded;
- (void)setLastUploadTime:;
- (void)p_safeStart;
- (void)setDidCleanup:;
- (void)p_cleanupIfNeeded;
- (double)lastUploadTime;
- (void)p_uploadLogs:;
- (void)setRunning:;
- (id)init;
- (void)dealloc;
- (BOOL)running;
- (void)didBecomeActiveNotification:;
- (BOOL)didCleanup;
+ (id)shared;
@end
