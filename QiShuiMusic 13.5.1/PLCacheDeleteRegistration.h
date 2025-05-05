@interface PLCacheDeleteRegistration : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)registerCacheDeleteSupport:withLibraryServicesManager:;
- (id)_getInternalQueue;
- (void)_setCacheDeleteSupport:forLibrary:;
- (void).cxx_destruct;
- (void)cameraWatcherDidChangeState:;
- (void)_processRemovedFiles:withCacheDeleteSupport:forLibraryURL:;
- (void)_registerResourceDirectories;
- (void)_replaceCameraWatcherWith:;
- (void)unregisterCacheDeleteSupport:withLibraryServicesManager:;
+ (void)registerNullHandler;
@end
