@interface AWEFileStreamDownloaderConfig : NSObject
@property (nonatomic) NSURL url;
@property (nonatomic) NSString urlKey;
@property (nonatomic) NSURL cacheDir;
@property (nonatomic) NSDictionary headerParams;
@property (nonatomic) @? processHandler;
@property (nonatomic) @? completion;
@property (nonatomic) double targetTime;
- (id)cacheDir;
- (void)setCacheDir:;
- (id)headerParams;
- (void)setHeaderParams:;
- (id)processHandler;
- (void)setProcessHandler:;
- (void)setUrl:;
- (id)completion;
- (void)setCompletion:;
- (void).cxx_destruct;
- (double)targetTime;
- (id)url;
- (void)setTargetTime:;
- (void)setUrlKey:;
- (id)urlKey;
@end
