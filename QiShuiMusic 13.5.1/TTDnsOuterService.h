@interface TTDnsOuterService : NSObject
@property (nonatomic) NSMutableDictionary dnsQueryMap;
- (void)setDnsQueryMap:;
- (id)dnsQueryMap;
- (void)handleTTDnsResultWithUUID:host:ret:source:cacheSource:ipList:detailedInfo:;
- (id)ttDnsResolveWithHost:sdkId:controlHeaders:;
- (id)init;
- (void).cxx_destruct;
@end
