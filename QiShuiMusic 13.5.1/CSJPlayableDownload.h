@interface CSJPlayableDownload : NSObject
@property (nonatomic) NSObject<OS_dispatch_semaphore> lock;
@property (nonatomic) NSString currentZipUrl;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)bu_playableCachePath;
- (BOOL)bu_unzipFileAtPath:toDestination:;
- (id)currentZipUrl;
- (void)downloadDataAndTrackWithMeta:success:fail:;
- (void)downloadDataWithUrl:success:fail:;
- (BOOL)existDataWithRelativePath:;
- (id)relativePath:;
- (void)setCurrentZipUrl:;
- (id)init;
- (id)lock;
- (void).cxx_destruct;
- (void)setLock:;
+ (id)sharedPlayableDownload;
@end
