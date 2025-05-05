@interface IESLiveSaaSLogger : NSObject
@property (nonatomic) <IESLiveLoggerService> loggerService;
@property (nonatomic) <IESLiveSaaSDebugService> debugService;
- (id)debugService;
- (void)hybirdLogWithLevel:tag:fileName:functionName:line:logString:;
- (void)hybirdLogWithLevel:tag:fileName:functionName:line:logString:currentUrl:;
- (void)liveLogWithLevel:tag:fileName:functionName:line:eventName:extra:;
- (void)liveLogWithLevel:tag:fileName:functionName:line:logString:;
- (id)loggerService;
- (void)reportWebLog:level:;
- (void)setDebugService:;
- (void)setLoggerService:;
- (void).cxx_destruct;
+ (id)shared;
@end
