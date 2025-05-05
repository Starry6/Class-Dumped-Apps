@interface CHSScreenshotManager : NSObject
- (void)deleteAllCachedScreenshots;
- (id)initWithDirectory:fileManager:;
- (id)URLForWidget:metrics:attributes:createIntermediateDirectories:;
- (void).cxx_destruct;
- (void)deleteAllCachedScreenshotsExcludingWidgets:;
- (id)snapshotContextForWidget:metrics:attributes:;
- (void)deleteCachedScreenshotsMatchingWidget:;
+ (id)sharedManager;
@end
