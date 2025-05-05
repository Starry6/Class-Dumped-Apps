@interface LPFetcherJSONResponse : LPFetcherResponse
@property (nonatomic) @ rootObject;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)rootObject;
- (void).cxx_destruct;
- (id)initWithRootObject:fetcher:;
+ (BOOL)isValidMIMEType:;
+ (id)responseForFetcher:withData:MIMEType:;
@end
