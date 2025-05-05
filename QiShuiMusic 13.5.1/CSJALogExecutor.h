@interface CSJALogExecutor : NSObject
@property (nonatomic) q logLevel;
- (void)setLogLevel:;
- (long long)logLevel;
+ (id)_alogZipPath;
+ (void)disableAlog;
+ (void)enableAlog;
+ (id)genALogDateString:;
+ (id)genALogZipFile;
+ (id)getALogDir:;
+ (id)getDid;
+ (BOOL)isLowMemoryDevice;
+ (double)memoryUsedPercent;
+ (id)pathWriteLog:toFileName:;
+ (void)removeALogZipFile;
+ (void)removeOldALogFile;
+ (BOOL)shouldStartAlogService;
+ (BOOL)writeLog:fileName:;
+ (BOOL)writeLogData:fileName:;
+ (id)dateFormatter;
+ (id)sharedInstance;
@end
