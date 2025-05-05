@interface LPFetcherVideoResponse : LPFetcherResponse
@property (nonatomic) LPVideo video;
- (void).cxx_destruct;
- (id)video;
- (id)initWithVideo:fetcher:;
+ (id)videoPropertiesForFetcher:;
@end
