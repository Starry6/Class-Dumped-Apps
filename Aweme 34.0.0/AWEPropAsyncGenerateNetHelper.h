@interface AWEPropAsyncGenerateNetHelper : NSObject
- (void)cancelTasksWithIds:AITypes:;
- (void)queryWithTasks:scene:serverQuerySource:result:;
- (void)queryWithLoraLiveTaskIDS:scene:result:;
@end
