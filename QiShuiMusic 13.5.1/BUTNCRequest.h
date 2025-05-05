@interface BUTNCRequest : BUNetworkRequest
@property (nonatomic) NSMutableDictionary domainsState;
@property (nonatomic) NSArray domains;
- (id)domainsState;
- (id)initWithDomains:url:method:parameter:;
- (void)recordFailDomain:;
- (void)setDomainsState:;
- (void)resetState;
- (id)baseUrl;
- (void).cxx_destruct;
- (void)setDomains:;
- (id)domains;
+ (id)requestWithDomains:url:andParams:;
@end
