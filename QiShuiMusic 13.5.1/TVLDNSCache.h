@interface TVLDNSCache : NSObject
@property (nonatomic) NSString hostname;
@property (nonatomic) NSArray resolvedIPAddresses;
@property (nonatomic) BOOL expired;
@property (nonatomic) double timeToLive;
- (id)initWithHostname:resolvedIPAddresses:timeToLive:;
- (id)resolvedIPAddresses;
- (BOOL)hasExpired;
- (id)hostname;
- (double)timeToLive;
- (void).cxx_destruct;
+ (id)cacheWithHostname:resolvedIPAddresses:timeToLive:;
@end
