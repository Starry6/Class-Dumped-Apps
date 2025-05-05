@interface NSPCandidateProxyPath : NSObject
@property (nonatomic) NSPProxyTokenInfo ingressProxy;
@property (nonatomic) NSPProxyTokenInfo egressProxy;
@property (nonatomic) Q proxyPathWeight;
@property (nonatomic) NSString preferredPathConfigURI;
@property (nonatomic) NSData domainFilter;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (BOOL)matchIngress:;
- (BOOL)matchEgress:;
- (id)ingressProxy;
- (void)setIngressProxy:;
- (id)egressProxy;
- (void)setEgressProxy:;
- (unsigned long long)proxyPathWeight;
- (void)setProxyPathWeight:;
- (id)initWithIngressProxy:egressProxy:proxyPathWeight:preferredPathConfigURI:;
- (BOOL)proxyPathReady;
- (void)fetchDomainFilter:;
- (id)preferredPathConfigURI;
- (void)setPreferredPathConfigURI:;
- (id)domainFilter;
- (void)setDomainFilter:;
+ (BOOL)supportsSecureCoding;
@end
