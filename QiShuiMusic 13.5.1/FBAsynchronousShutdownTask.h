@interface FBAsynchronousShutdownTask : NSObject
- (void).cxx_destruct;
+ (void)waitForTasks;
+ (void)startTaskWithName:timeout:workItem:;
@end
