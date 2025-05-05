@interface DTFLogManager : NSObject
@property (nonatomic) @? networkUploadBlock;
- (BOOL)checkDate:inCrashTimestmpArray:;
- (id)MPLogGetLogServerURL;
- (void)flushAllLog;
- (id)networkUploadBlock;
- (void)setNetworkUploadBlock:;
- (void)setupTimeForCheckFileSize;
- (void)startUploadLog;
- (void)unitDataInArray:bizType:count:;
- (void)uploadData:bizType:completionBlock:;
- (void)uploadLogFileInArray:bizType:;
- (void)uploadLogInArray:bizType:;
- (void)uploadUnsyncLogInFile:bizType:;
- (void)writeLogWithContext:;
- (id)init;
- (void).cxx_destruct;
+ (void)setLogCallback:;
+ (id)sharedInstance;
@end
