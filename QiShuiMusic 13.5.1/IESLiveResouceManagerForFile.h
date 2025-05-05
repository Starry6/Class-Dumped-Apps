@interface IESLiveResouceManagerForFile : IESLiveResouceManager
@property (nonatomic) NSString bundleFilePrefix;
@property (nonatomic) NSString type;
@property (nonatomic) NSDictionary fileCache;
- (id)_recursiveGetPathForResource:ofType:inDirectory:;
- (id)bundleFilePrefix;
- (id)fileCache;
- (id)getFilePathFromCacheForKey:;
- (id)initWithAssetBundle:type:;
- (void)setBundleFilePrefix:;
- (void)setFileCache:;
- (id)objectForKey:;
- (void).cxx_destruct;
@end
