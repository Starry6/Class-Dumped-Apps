@interface HybridRLCDNProcessor : HybridRLBaseProcessor
@property (nonatomic) DownloadGlobalParameters downloadParameters;
@property (nonatomic) NSArray endRetryCodes;
@property (nonatomic) @? downloadCompletion;
@property (nonatomic) double lastAbsoluteTime;
- (void)downloadWithIdentity:URLString:;
- (void)_fetchResourceWithSourceURL:resolve:reject:;
- (void)appendFlagOfCurrentProcessor:url:;
- (void)configDownloadParams;
- (id)downloadParameters;
- (id)endRetryCodes;
- (void)fetchResourceWithURL:container:loaderConfig:taskConfig:resolve:reject:;
- (void)fetchShuffleDomains:resolve:reject:;
- (double)lastAbsoluteTime;
- (id)resourceLoaderName;
- (void)setDownloadParameters:;
- (void)setEndRetryCodes:;
- (void)setLastAbsoluteTime:;
- (id)init;
- (void)dealloc;
- (void)cancelLoad;
- (void)appendFlag:;
- (void).cxx_destruct;
- (id)downloadCompletion;
- (void)setDownloadCompletion:;
+ (void)deleteCDNCacheForResource:;
+ (id)identityWithUrl:;
@end
