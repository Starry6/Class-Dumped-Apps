@interface AMapTTYLogHandler : AMapLogHandler
@property (nonatomic) NSMutableArray enableComponents;
@property (nonatomic) NSString appName;
@property (nonatomic) NSString processID;
@property (nonatomic) BOOL automaticallyAppendNewlineForCustomFormatters;
- (BOOL)automaticallyAppendNewlineForCustomFormatters;
- (id)enableComponents;
- (id)initWithSingleton;
- (id)loggerName;
- (void)setAutomaticallyAppendNewlineForCustomFormatters:;
- (void)setComponentConsoleEnable:enable:;
- (void)setEnableComponents:;
- (void)logMessage:;
- (id)componentName;
- (id)processID;
- (id)init;
- (void)setProcessID:;
- (void)setAppName:;
- (id)appName;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
