@interface TVLDNSCacheManager : NSObject
@property (nonatomic) NSMutableArray caches;
@property (nonatomic) NSTimer autoFlushTimer;
@property (nonatomic) BOOL shouldUseCacheRecordExpiredDate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)DNSCacheWithHostname:;
- (BOOL)shouldUseCacheRecordExpiredDate;
- (id)autoFlushTimer;
- (id)cachedIPAddressesForHost:;
- (void)setAutoFlushTimer:;
- (void)setCaches:;
- (void)setShouldUseCacheRecordExpiredDate:;
- (BOOL)tryCachingIPAddresses:withHost:timeToLive:;
- (id)init;
- (id)copy;
- (id)mutableCopy;
- (void)flush;
- (void).cxx_destruct;
- (id)caches;
+ (id)allocWithZone:;
+ (id)defaultManager;
@end
