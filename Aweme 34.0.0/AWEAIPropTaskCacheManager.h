@interface AWEAIPropTaskCacheManager : NSObject
+ (void)storeTasks:taskIds:;
+ (void)retrieveCacheWithInjectingMessenger:shouldFilterTasks:completion:;
@end
