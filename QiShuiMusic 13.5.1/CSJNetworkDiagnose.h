@interface CSJNetworkDiagnose : NSObject
@property (nonatomic) NSDictionary cacheIpList;
@property (nonatomic) NSDate cacheDate;
- (BOOL)isCellularProvidersPrivateIPv6:;
- (void)setCacheIpList:;
- (id)cacheIpList;
- (id)getIPList;
- (unsigned long long)getNetworkType;
- (unsigned long long)getSimState;
- (unsigned long long)getSimStateWithIpList:;
- (int)privateIPv6ToCarrierName:;
- (id)cacheDate;
- (void).cxx_destruct;
- (void)setCacheDate:;
+ (id)shareInstance;
@end
