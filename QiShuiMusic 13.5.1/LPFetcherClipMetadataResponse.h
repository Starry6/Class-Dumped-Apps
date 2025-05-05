@interface LPFetcherClipMetadataResponse : LPFetcherResponse
@property (nonatomic) CPSClipMetadata metadata;
@property (nonatomic) NSURL iconURL;
- (id)metadata;
- (void).cxx_destruct;
- (id)iconURL;
- (id)initWithClipMetadata:iconURL:fetcher:;
@end
