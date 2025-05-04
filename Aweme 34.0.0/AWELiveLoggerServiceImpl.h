@interface AWELiveLoggerServiceImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)alogSetConsoleLog;
- (int)mapBDALogLevelWithIESLiveLogLevel:;
- (void)ieslive_logWithLevel:tag:filename:function:lineNumber:logString:;
- (unsigned long long)mapDDLogFlagWithIESLiveLogLevel:;
- (id)init;
@end
