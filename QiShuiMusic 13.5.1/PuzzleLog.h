@interface PuzzleLog : NSObject
- (void)__reportLogImpl:logContext:logType:logLevel:logTag:logParam:;
- (void)__reportLogOnAsyncQueue:logContext:logType:logLevel:logTag:logParam:;
- (void)__reportSlardarHybridLogImpl:field:data:;
- (BOOL)_enbaleGlobalQueue;
- (id)init;
- (void).cxx_destruct;
+ (void)bindCrashInfoWithUrl:schema:;
+ (id)clientCollection;
+ (void)registerClientClass:;
+ (void)reportALog:logContext:logLevel:LogTag:param:;
+ (void)reportConsoleLog:logContext:logLevel:LogTag:param:;
+ (void)reportLog:logContext:logType:logLevel:logTag:logParam:;
+ (void)reportLogImpl:logContext:logType:logLevel:logTag:logParam:;
+ (void)reportSlardarAppLog:logContext:logLevel:LogTag:metric:category:extra:;
+ (void)reportSlardarHybridCollectLog:field:logContext:logLevel:LogTag:data:;
+ (void)reportSlardarHybridError:LogTag:view:withID:withError:;
+ (void)reportSlardarHybridEvent:containerId:logContext:logLevel:LogTag:URL:metric:category:extra:kernalType:maySample:;
+ (void)reportSlardarHybridEvent:containerId:logContext:logLevel:LogTag:URL:metric:category:extra:kernalType:sampleLevel:;
+ (void)reportSlardarHybridLogImpl:field:data:;
+ (void)reportSlardarHybridLynxEvent:logContext:logLevel:LynxView:metric:category:extra:maySample:;
+ (void)reportSlardarHybridWebEvent:logContext:logLevel:webView:metric:category:extra:maySample:;
+ (void)setClientCollection:;
+ (void)unRegisterClientClass:;
+ (id)sharedInstance;
@end
