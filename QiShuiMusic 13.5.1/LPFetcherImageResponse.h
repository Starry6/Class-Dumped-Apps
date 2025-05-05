@interface LPFetcherImageResponse : LPFetcherResponse
@property (nonatomic) LPImage image;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void).cxx_destruct;
- (id)image;
- (id)initWithImage:fetcher:;
+ (BOOL)isValidMIMEType:;
+ (id)responseForFetcher:withData:MIMEType:;
+ (id)imagePropertiesForFetcher:;
@end
