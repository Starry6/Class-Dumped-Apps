@interface LPFetcherGroupTask : NSObject
@property (nonatomic) LPFetcher fetcher;
@property (nonatomic) LPFetcherResponse response;
@property (nonatomic) BOOL hasStarted;
- (id)fetcher;
- (BOOL)hasStarted;
- (id)response;
- (void).cxx_destruct;
- (void)setResponse:;
- (void)setHasStarted:;
- (void)setFetcher:;
@end
