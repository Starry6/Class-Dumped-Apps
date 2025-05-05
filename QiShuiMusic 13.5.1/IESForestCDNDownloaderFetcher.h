@interface IESForestCDNDownloaderFetcher : IESForestBaseFetcher
@property (nonatomic) double startTime;
@property (nonatomic) NSString downloadKey;
@property (nonatomic) DownloadGlobalParameters downloadParams;
- (id)downloadFilePath:;
- (id)downloadParams;
- (void)fetchResourceWithRequest:completion:;
- (void)initDownloadParams;
- (id)responseHeadersTrackData:;
- (void)setDownloadParams:;
- (id)init;
- (void)setStartTime:;
- (double)startTime;
- (void).cxx_destruct;
- (id)name;
- (id)downloadKey;
- (void)setDownloadKey:;
- (void)cancelFetch;
+ (id)fetcherName;
+ (id)trackResponseHeaders;
@end
