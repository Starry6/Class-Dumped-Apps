@interface ICStorePlatformRequest : NSObject
@property (nonatomic) NSDictionary HTTPHeaders;
@property (nonatomic) NSArray queryItems;
@property (nonatomic) q qualityOfService;
@property (nonatomic) ICStoreRequestContext requestContext;
@property (nonatomic) NSString clientIdentifier;
@property (nonatomic) NSString clientBundleIdentifier;
@property (nonatomic) NSString clientBundleVersion;
@property (nonatomic) NSArray itemIdentifiers;
@property (nonatomic) q batchSize;
@property (nonatomic) @? batchResultsHandler;
@property (nonatomic) NSString imageProfile;
@property (nonatomic) NSString keyProfile;
@property (nonatomic) q personalizationStyle;
@property (nonatomic) NSString platformIdentifier;
@property (nonatomic) NSString protocolVersion;
@property (nonatomic) double retryDelay;
@property (nonatomic) BOOL returnsLocalEquivalencies;
@property (nonatomic) double timeoutInterval;
@property (nonatomic) BOOL shouldIgnoreCache;
- (id)protocolVersion;
- (void)setQualityOfService:;
- (id)platformIdentifier;
- (id)clientBundleIdentifier;
- (void)setProtocolVersion:;
- (id)queryItems;
- (long long)personalizationStyle;
- (id)itemIdentifiers;
- (id)init;
- (void)setKeyProfile:;
- (BOOL)returnsLocalEquivalencies;
- (id)imageProfile;
- (void)setImageProfile:;
- (id)performWithResponseHandler:;
- (long long)batchSize;
- (long long)qualityOfService;
- (id)keyProfile;
- (void)setBatchSize:;
- (BOOL)shouldIgnoreCache;
- (void)setPlatformIdentifier:;
- (void)setRequestContext:;
- (double)retryDelay;
- (id)copyWithItemIdentifiersInRange:;
- (id)batchResultsHandler;
- (id)HTTPHeaders;
- (double)timeoutInterval;
- (void)setReturnsLocalEquivalencies:;
- (id)requestContext;
- (void).cxx_destruct;
- (void)setItemIdentifiers:;
- (void)setClientIdentifier:;
- (id)clientBundleVersion;
- (void)setTimeoutInterval:;
- (void)setPersonalizationStyle:;
- (void)setBatchResultsHandler:;
- (id)clientIdentifier;
- (void)setClientBundleVersion:;
- (void)setClientBundleIdentifier:;
- (void)setRetryDelay:;
- (void)setShouldIgnoreCache:;
- (id)copyWithZone:;
@end
