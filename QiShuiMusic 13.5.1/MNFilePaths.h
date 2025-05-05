@interface MNFilePaths : NSObject
+ (BOOL)createFolderIfNotPresent:error:;
+ (id)navTraceExtension;
+ (id)_cachesDirectoryPath;
+ (id)navTracesDirectoryPath;
+ (id)_homeDirectoryPath;
+ (id)navdCacheDirectoryPath;
+ (id)routeHandleExtension;
+ (id)mapsNavdCacheDirectoryPath;
+ (id)navTempDirectoryPath;
@end
