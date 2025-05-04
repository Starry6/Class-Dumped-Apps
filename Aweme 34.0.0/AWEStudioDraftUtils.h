@interface AWEStudioDraftUtils : NSObject
+ (id)allDraftPathsInDB;
+ (id)allDraftPathsInDirectory;
+ (id)unusedDraftPaths;
+ (id)pendingDeleteDraftPaths;
+ (BOOL)isDraftDirectory:;
+ (id)getFileLastAccessDate:;
+ (id)getDirectoryLatestAccessDate:;
@end
