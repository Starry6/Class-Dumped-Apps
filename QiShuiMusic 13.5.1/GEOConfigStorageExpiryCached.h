@interface GEOConfigStorageExpiryCached : NSObject
- (id)_expiryForKey:;
- (id)getAllExpiringKeys;
- (void)clearConfigKeyExpiry:;
- (void)setConfigKeyExpiry:date:osVersion:;
- (void)resync;
- (void).cxx_destruct;
- (BOOL)getConfigKeyExpiry:date:osVersion:;
- (id)initForSource:;
- (BOOL)getConfigKeyIsExpired:;
@end
