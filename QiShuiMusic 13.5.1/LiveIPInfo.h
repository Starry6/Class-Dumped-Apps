@interface LiveIPInfo : NSObject
@property (nonatomic) NSNumber ttl;
@property (nonatomic) NSString ipString;
@property (nonatomic) BOOL isLocalDNS;
@property (nonatomic) NSNumber packageLossRate;
@property (nonatomic) float averagePingTime;
- (float)averagePingTime;
- (id)packageLossRate;
- (BOOL)isLocalDNS;
- (void)setAveragePingTime:;
- (void)setIpString:;
- (void)setIsLocalDNS:;
- (void)setPackageLossRate:;
- (void).cxx_destruct;
- (void)setTtl:;
- (id)ttl;
- (BOOL)isEqual:;
- (id)ipString;
@end
