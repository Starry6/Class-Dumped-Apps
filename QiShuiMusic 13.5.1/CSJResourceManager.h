@interface CSJResourceManager : NSObject
@property (nonatomic) NSLock loadingItemLock;
@property (nonatomic) NSMutableDictionary loadingItemDict;
@property (nonatomic) NSString resourceDirFullPath;
- (id)loadingItemLock;
- (id)loadingItemDict;
- (void)loadWithItem:;
- (void)pbu_addWithItem:;
- (void)pbu_executeWithItem:error:;
- (BOOL)pbu_isDownloadWithItem:;
- (id)resourceDirFullPath;
- (void)setLoadingItemDict:;
- (void)setLoadingItemLock:;
- (void)setResourceDirFullPath:;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
