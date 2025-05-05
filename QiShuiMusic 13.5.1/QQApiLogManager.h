@interface QQApiLogManager : NSObject
@property (nonatomic) @? logBlock;
@property (nonatomic) BOOL switch_addLogToFile;
- (void)stopLog;
- (void)callbackLog:;
- (void)setSwitchPrintLogToFile:;
- (void)setSwitch_addLogToFile:;
- (void)startLogWithBlock:;
- (BOOL)switch_addLogToFile;
- (id)getLogFilePath;
- (id)logBlock;
- (void)setLogBlock:;
+ (id)getInstance;
@end
