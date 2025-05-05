@interface GEOConfigPersistence : NSObject
- (void)_pruneExpiredKeyPathsOlderThanTime:osVersion:;
- (void)clearExpirationForKeyPath:;
- (void)dealloc;
- (id)getAllExpiringKeys;
- (void)setExpire:;
- (void)pruneExpiredKeyPathsOlderThanTime:;
- (id)initWithDBPath:;
- (id)xpcDefaultForKeyPathComponents:;
- (id)_getExpiredKeyPathsOlderThanTime:osVersion:from:;
- (void)tearDown;
- (id)defaultForKeyPath:;
- (id)_getExpiredKeyPathsOlderThanTime:osVersion:;
- (void).cxx_destruct;
- (id)defaultForKeyPathComponents:;
- (id)xpcDefaultForKeyPath:;
- (void)pruneExpiredKeyPathsOlderThanOSVersion:;
- (void)setDefault:forKeyPath:;
- (void)setXPCDefault:forKeyPath:;
- (id)getExpiredKeyPathsOlderThanTime:;
- (id)getExpiredKeyPathsOlderThanOSVersion:;
- (id)getExpireForKeyPath:;
+ (BOOL)_setup:;
+ (BOOL)_migrateDates:withConverter:;
@end
