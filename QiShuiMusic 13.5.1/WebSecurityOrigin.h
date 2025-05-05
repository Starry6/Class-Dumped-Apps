@interface WebSecurityOrigin : NSObject
- (id)protocol;
- (unsigned long long)usage;
- (void)dealloc;
- (id)initWithURL:;
- (id)host;
- (unsigned short)port;
- (void)setQuota:;
- (id)stringValue;
- (unsigned long long)quota;
- (id)databaseIdentifier;
- (BOOL)isEqual:;
- (id)databaseQuotaManager;
- (id)applicationCacheQuotaManager;
- (id)_core;
- (id)_initWithWebCoreSecurityOrigin:;
- (id)toString;
+ (id)webSecurityOriginFromDatabaseIdentifier:;
@end
