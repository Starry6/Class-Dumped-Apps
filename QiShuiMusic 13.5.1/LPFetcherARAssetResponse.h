@interface LPFetcherARAssetResponse : LPFetcherResponse
@property (nonatomic) LPARAsset arAsset;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void).cxx_destruct;
- (id)arAsset;
- (id)initWithARAsset:fetcher:;
+ (BOOL)isValidMIMEType:;
+ (id)arAssetPropertiesForFetcher:;
+ (id)responseForFetcher:withData:MIMEType:;
@end
