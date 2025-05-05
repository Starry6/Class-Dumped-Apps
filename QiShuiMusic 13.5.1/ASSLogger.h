@interface ASSLogger : NSObject
@property (nonatomic) NSOperationQueue queue;
@property (nonatomic) NSString loggerInfo;
- (void)addLogWithMessage:withFileName:;
- (void)addLogWithMessage:;
- (id)generateJsonMessage:;
- (id)generateMessage:;
- (id)getCurrentFileName:;
- (void)initializeWithArgs:;
- (void)internal_addLog:;
- (id)limitedLengthString:;
- (id)loggerInfo;
- (void)setLoggerInfo:;
- (void)uploadLog;
- (void)uploadLogCertified;
- (void).cxx_destruct;
- (void)setQueue:;
- (id)queue;
+ (id)sharedInstance;
@end
