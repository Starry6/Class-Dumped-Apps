@interface HMDCrashEventLogger : NSObject
@property (nonatomic) HMDCrashMetaData currentMeta;
- (void)_logCrashEvent:;
- (id)constructPostDataWithFileNames:;
- (void)setCurrentMeta:;
- (void)uploadAllEvents;
- (void)_logUploadEvent:error:backgroundSession:;
- (void)_uploadAllEvents;
- (void)cleanUpWithFileNames:;
- (id)collectAllFileNames;
- (id)constructPostDataWithFileName:;
- (id)currentMeta;
- (void)logCrashEvent:;
- (void)logUploadEvent:error:backgroundSession:;
- (id)init;
- (void)dealloc;
- (void)didEnterBackground:;
- (void).cxx_destruct;
- (void)willEnterForeground:;
+ (void)logCrashEvent:;
+ (void)logUploadEvent:error:backgroundSession:;
+ (id)sharedInstance;
@end
