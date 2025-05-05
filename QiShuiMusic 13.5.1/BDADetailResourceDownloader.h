@interface BDADetailResourceDownloader : NSObject
@property (nonatomic) NSOperationQueue downloadQueue;
- (id)arrayWithCount:;
- (void)downloadDataWithModel:finalOperation:;
- (void)preloadResource:condition:;
- (id)downloadQueue;
- (void)setDownloadQueue:;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
+ (id)sharedManager;
@end
