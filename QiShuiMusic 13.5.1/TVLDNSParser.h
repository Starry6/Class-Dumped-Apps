@interface TVLDNSParser : NSObject
@property (nonatomic) <TVLDNSCaching> cache;
@property (nonatomic) <TVLDNSParserDelegate> delegate;
@property (nonatomic) NSString hostname;
@property (nonatomic) BOOL tryCachedAddresses;
@property (nonatomic) BOOL preferredToHTTPDNS;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isPreferredToHTTPDNS;
- (void)parser:didFinishParsingHostname:withParesedAddresses:error:;
- (void)parser:didGetRecordWithHostname:parsedAddresses:timeToLive:;
- (void)setPreferredToHTTPDNS:;
- (void)setTryCachedAddresses:;
- (BOOL)shouldTryCachedAddresses;
- (id)hostname;
- (void)cancel;
- (void)setHostname:;
- (void)start;
- (void)setDelegate:;
- (void)setCache:;
- (id)delegate;
- (void).cxx_destruct;
- (id)cache;
- (id)initWithHostname:;
+ (void)requestDNSServerWithCompletion:;
@end
