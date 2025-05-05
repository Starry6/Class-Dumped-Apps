@interface TMDataCollector : NSObject
+ (void)__exectuteOnMainThread:;
+ (void)__generateContextWithCompletion:;
+ (id)appLogCommonParamsWithSampleRate:;
+ (void)appLogNoSamplingWitWithEventName:params:needContext:;
+ (void)appLogNoSamplingWithEventName:tags:block:syncGenerateData:needContext:;
+ (void)appLogWithEventName:params:needContext:;
+ (void)appLogWithEventName:tags:block:needContext:;
+ (void)appLogWithEventName:tags:block:syncGenerateData:needContext:;
+ (void)delayEvent:params:;
+ (BOOL)enableAutoRelease;
+ (void)monitorWithEventType:metric:category:extra:needContext:;
+ (void)monitorWithEventType:tags:block:needContext:;
+ (void)monitorWithEventType:tags:block:syncGenerateData:needContext:;
+ (id)pageNameForControllerName:;
+ (BOOL)shouldDelayEvent:params:;
+ (void)userExceptionWithEventType:backTraces:customParams:filters:needContext:;
+ (void)userExceptionWithEventType:title:subTitle:customParams:filters:needContext:;
+ (id)tracker;
+ (id)monitor;
+ (id)userException;
@end
