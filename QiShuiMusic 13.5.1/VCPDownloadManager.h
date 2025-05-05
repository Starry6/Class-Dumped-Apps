@interface VCPDownloadManager : NSObject
@property (nonatomic) @? cancel;
- (id)init;
- (id)cancel;
- (void)flush;
- (void)setCancel:;
- (void).cxx_destruct;
- (id)requestDownloadOfResource:;
+ (id)sharedManager;
+ (unsigned long long)maxSizeBytes;
+ (void)_reportDownload:;
@end
