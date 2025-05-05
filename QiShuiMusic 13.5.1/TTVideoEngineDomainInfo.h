@interface TTVideoEngineDomainInfo : NSObject
@property (nonatomic) NSString host;
@property (nonatomic) NSArray ips;
@property (nonatomic) NSNumber ttl;
@property (nonatomic) NSDate requestDate;
- (void)setIps:;
- (void)formateIfIsIpv6;
- (id)ips;
- (BOOL)isCacheValidNow:;
- (id)randomIP;
- (id)host;
- (void)setHost:;
- (id)initWithDictionary:;
- (id)requestDate;
- (void).cxx_destruct;
- (void)setTtl:;
- (void)setRequestDate:;
- (id)ttl;
@end
