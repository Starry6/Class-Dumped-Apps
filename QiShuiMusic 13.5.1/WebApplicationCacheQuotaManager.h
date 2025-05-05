@interface WebApplicationCacheQuotaManager : NSObject
- (unsigned long long)usage;
- (id)origin;
- (void)setQuota:;
- (id)initWithOrigin:;
- (unsigned long long)quota;
@end
