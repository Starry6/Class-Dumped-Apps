@interface IESLiveSaaSLoggerServiceWrapper : NSObject
@property (nonatomic) <IESLiveSaaSLoggerService> loggerService;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)ieslive_logWithLevel:tag:filename:function:lineNumber:logString:;
- (id)initWithLoggerService:;
- (id)loggerService;
- (int)mapBDALogLevelWithIESLiveLogLevel:;
- (void)setLoggerService:;
- (void).cxx_destruct;
@end
