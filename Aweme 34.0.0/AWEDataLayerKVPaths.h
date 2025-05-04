@interface AWEDataLayerKVPaths : NSObject
+ (id)relativedPathWithPath:;
+ (id)dataLayerRootPath;
+ (id)infoDirectoryPath;
+ (id)sharedDirectoryPath;
+ (id)directoryPathWithUserId:;
+ (id)dataDirectoryPath;
@end
