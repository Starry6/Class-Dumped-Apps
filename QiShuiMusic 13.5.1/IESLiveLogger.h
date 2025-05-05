@interface IESLiveLogger : NSObject
@property (nonatomic) <IESLiveLoggerService> loggerService;
@property (nonatomic) <IESLiveDegradeService> degradeService;
@property (nonatomic) <IESLiveSettings> setting;
@property (nonatomic) <IESLiveLoggerAnalyseService> loggerAnalyseService;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)degradeService;
- (void)hybirdLogWithLevel:tag:fileName:functionName:line:logString:currentUrl:;
- (void)liveLogWithLevel:tag:fileName:functionName:line:eventName:extra:;
- (void)liveLogWithLevel:tag:fileName:functionName:line:logString:;
- (id)loggerAnalyseService;
- (id)loggerService;
- (void)reportWebLog:level:;
- (void)setDegradeService:;
- (void)setLoggerAnalyseService:;
- (void)setLoggerService:;
- (void)verbose:extra:;
- (void).cxx_destruct;
- (id)setting;
- (void)setSetting:;
+ (id)shared;
@end
