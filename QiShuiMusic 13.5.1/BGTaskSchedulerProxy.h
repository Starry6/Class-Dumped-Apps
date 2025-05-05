@interface BGTaskSchedulerProxy : NSObject
- (BOOL)registerForTaskWithIdentifier:launchHandler:;
+ (id)shared;
@end
