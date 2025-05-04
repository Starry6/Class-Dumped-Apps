@interface AWEAIGCAsyncTaskCacheManager : NSObject
+ (void)storeSucceedTaskId:withDraftId:;
+ (void)storeTasks:taskIds:;
+ (void)retrieveCacheWithInjectingMessenger:completion:;
+ (void)removeSucceedTaskIdToDraftIdMappingWithTaskId:;
+ (void)removeSucceedTaskIdToDraftIdMappingWithDraftId:;
+ (id)queryDraftBySucceedTaskId:;
@end
