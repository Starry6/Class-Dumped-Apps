@interface EFScheduler : NSObject
+ (id)__mui_nextRunLoopMainThreadScheduler;
+ (id)mainThreadScheduler;
+ (id)operationQueueSchedulerWithMaxConcurrentOperationCount:;
+ (id)globalAsyncScheduler;
+ (id)immediateScheduler;
+ (id)serialDispatchQueueSchedulerWithName:;
+ (id)serialDispatchQueueSchedulerWithName:qualityOfService:;
+ (id)globalAsyncSchedulerWithQualityOfService:;
+ (id)onScheduler:performWithObject:;
+ (id)dispatchQueueSchedulerWithQueue:;
+ (id)_globalAsyncSchedulerWithQualityOfService:;
@end
