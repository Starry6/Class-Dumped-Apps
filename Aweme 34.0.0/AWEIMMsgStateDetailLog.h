@interface AWEIMMsgStateDetailLog : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> serialQueue;
@property (nonatomic) NSString logFilePath;
@property (nonatomic) IESIMDebounce bebounce;
@property (nonatomic) HMDThreadSafeArray logList;
@property (nonatomic) HMDThreadSafeArray logBuffer;
@property (nonatomic) BOOL enableLogSwitch;
- (id)logList;
- (void)setLogList:;
- (void)p_bebounceExcute;
- (void)setEnableLogSwitch:;
- (void)p_writeStringToFile:tag:date:;
- (id)bebounce;
- (BOOL)enableLogSwitch;
- (void)setBebounce:;
- (id)init;
- (id)serialQueue;
- (void).cxx_destruct;
- (id)logFilePath;
- (id)logBuffer;
- (void)setLogBuffer:;
+ (BOOL)detailLog;
+ (void)logString:tag:;
+ (void)updateLogEnable:;
+ (void)logLineForTag:;
+ (id)sharedInstance;
@end
