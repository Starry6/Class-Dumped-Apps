@interface LPFetcherErrorResponse : LPFetcherResponse
@property (nonatomic) NSError error;
- (id)error;
- (void).cxx_destruct;
- (id)initWithError:fetcher:;
@end
