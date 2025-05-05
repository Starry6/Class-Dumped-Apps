@interface VmsdkThreadManager : NSObject
+ (void)executeRunloop:;
+ (id)queueDictionary;
+ (void)createIOSThread:runnable:;
+ (id)getCachedQueueWithPrefix:;
+ (id)getQueueWithPrefix:;
+ (BOOL)isMainQueue;
+ (void)runBlockInMainQueue:;
+ (void)runInTargetQueue:runnable:;
+ (void)threadRun:;
@end
