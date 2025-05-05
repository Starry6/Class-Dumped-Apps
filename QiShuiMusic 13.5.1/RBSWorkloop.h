@interface RBSWorkloop : NSObject
- (void).cxx_destruct;
+ (id)createBackgroundQueue:;
+ (id)createSyncingQueue:;
+ (void)performBackgroundWork:;
+ (id)sharedSyncingWorkloop;
+ (id)sharedBackgroundWorkloop;
+ (void)performBackgroundWorkWithServiceClass:block:;
@end
