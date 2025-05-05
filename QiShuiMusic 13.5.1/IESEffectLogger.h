@interface IESEffectLogger : NSObject
@property (nonatomic) <IESEffectLoggerProtocol> loggerProxy;
- (void)setLoggerProxy:;
- (void)logEvent:params:;
- (void)logType:withMessage:;
- (id)loggerProxy;
- (void)trackService:status:extra:;
- (void).cxx_destruct;
+ (id)logger;
@end
