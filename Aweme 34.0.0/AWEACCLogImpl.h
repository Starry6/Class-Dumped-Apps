@interface AWEACCLogImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)createLogTagWithTag:subtag:;
- (void)toolLogWithTag:filename:line:funcName:level:message:;
- (void)appendLogData:;
- (void)toolInfoLogWithInfo:message:;
- (void)toolDebugLogWithInfo:message:;
- (void)toolWarnLogWithInfo:message:;
- (void)toolErrorLogWithInfo:message:;
- (void)toolVerboseLogWithInfo:message:;
- (void)uploadALogBeforeNow:retryTimes:completion:;
- (void)willAppendLogWithMainTag:subTag:level:log:;
- (void)uploadALog;
@end
