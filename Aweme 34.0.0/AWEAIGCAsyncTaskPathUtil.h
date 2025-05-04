@interface AWEAIGCAsyncTaskPathUtil : NSObject
+ (id)generatePathWithFileName:taskId:;
+ (void)deleteTaskFilesExceptTaskIds:;
+ (id)getFolderOfTaskId:;
+ (id)taskBaseFolder;
+ (id)rootFolder;
+ (id)allContents;
@end
