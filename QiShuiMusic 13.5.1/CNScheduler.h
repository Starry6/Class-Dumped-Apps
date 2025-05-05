@interface CNScheduler : NSObject
+ (id)mainThreadScheduler;
+ (id)operationQueueSchedulerWithMaxConcurrentOperationCount:;
+ (id)offMainThreadScheduler;
+ (id)synchronousSerialDispatchQueueWithName:;
+ (id)inlineScheduler;
+ (id)offMainThreadSchedulerWithBackgroundScheduler:;
+ (id)globalAsyncScheduler;
+ (id)immediateScheduler;
+ (id)serialDispatchQueueSchedulerWithName:;
@end
