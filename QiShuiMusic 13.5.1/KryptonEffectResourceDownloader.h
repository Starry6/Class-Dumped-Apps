@interface KryptonEffectResourceDownloader : NSObject
@property (nonatomic) NSURLSessionDownloadTask task;
@property (nonatomic) NSString dirPath;
@property (nonatomic) NSString bundlePath;
@property (nonatomic) NSString zipPath;
@property (nonatomic) <KryptonEffectConfigService> configService;
- (id)zipPath;
- (id)configService;
- (void)downloadModel:withCompletion:;
- (void)downloadResource:;
- (void)downloadSticker:withCallback:;
- (void)setConfigService:;
- (void)setZipPath:;
- (id)bundlePath;
- (id)dirPath;
- (void)dealloc;
- (void)setBundlePath:;
- (id)task;
- (void)setDirPath:;
- (void)setTask:;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
