@interface WBSFileLogger : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)logMessage:;
- (void)dealloc;
- (void)tearDown;
- (void).cxx_destruct;
- (void)_closeStream;
- (void)_removeOldLogs;
- (void)_logMessage:date:;
- (void)logFormat:;
- (id)initWithDirectoryURL:logName:maximumLogAge:;
+ (BOOL)collectLogsInDirectory:withName:intoFile:error:;
@end
