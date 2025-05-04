@interface AWETokamakCrash : NSObject
@property (nonatomic) AWETokamakCrashInfo lastCrashInfo;
@property (nonatomic) BOOL isReporterReady;
@property (nonatomic) BOOL detectedLastCrashed;
- (void)onLastLaunchCrash:;
- (void)onReporterReady;
- (void)setIsReporterReady:;
- (BOOL)isReporterReady;
- (void)setLastCrashInfo:;
- (void)setDetectedLastCrashed:;
- (void)checkAndUpload;
- (void)internalTryReport;
- (id)lastCrashInfo;
- (void)internalUpload;
- (BOOL)detectedLastCrashed;
- (void).cxx_destruct;
+ (id)shared;
@end
