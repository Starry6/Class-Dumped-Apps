@interface NAScheduler : NSObject
+ (id)mainThreadScheduler;
+ (id)operationQueueSchedulerWithMaxConcurrentOperationCount:;
+ (id)globalAsyncScheduler;
+ (id)immediateScheduler;
+ (id)serialDispatchQueueSchedulerWithName:;
+ (id)schedulerWithDispatchQueue:;
@end
