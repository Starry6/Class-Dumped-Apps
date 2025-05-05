@interface OspreyConnectionMetrics : NSObject
@property (nonatomic) Q connectionState;
@property (nonatomic) double fetchStartToDomainLookupStartTime;
@property (nonatomic) double dnsResolutionTime;
@property (nonatomic) double connectionEstablishmentTime;
@property (nonatomic) double tcpConnectTime;
@property (nonatomic) double secureConnectionTime;
@property (nonatomic) double fetchStartToFirstByteTime;
@property (nonatomic) NSString connectionMethod;
@property (nonatomic) NSURL requestURL;
- (id)requestURL;
- (unsigned long long)connectionState;
- (double)secureConnectionTime;
- (void).cxx_destruct;
- (id)initWithMetrics:;
- (id)connectionMethod;
- (double)dnsResolutionTime;
- (double)connectionEstablishmentTime;
- (double)fetchStartToDomainLookupStartTime;
- (double)tcpConnectTime;
- (double)fetchStartToFirstByteTime;
@end
