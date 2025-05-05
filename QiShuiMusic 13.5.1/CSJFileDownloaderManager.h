@interface CSJFileDownloaderManager : NSObject
@property (nonatomic) NSURLSession session;
@property (nonatomic) NSMutableDictionary itemDict;
@property (nonatomic) NSLock lock;
- (id)bu_MD5HashString:;
- (id)cacheFileDir;
- (id)cacheFilePathWithDownloadUrlStr:;
- (void)delateCacheWithDonwloadUrlStr:;
- (void)downloadFileForURLStr:completionBlock:;
- (BOOL)fileExistsForDownloadUrlStr:;
- (id)itemDict;
- (void)setItemDict:;
- (void)setSession:;
- (id)init;
- (id)lock;
- (id)session;
- (void).cxx_destruct;
- (void)setLock:;
+ (id)sharedManager;
@end
