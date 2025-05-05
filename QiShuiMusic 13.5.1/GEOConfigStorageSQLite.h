@interface GEOConfigStorageSQLite : GEOConfigStorageSQLiteBase
- (id)getAllExpiringKeys;
- (id)_getExpiringKeyForKey:;
- (void)_instanceSpecificSetValue:forKey:;
- (void)clearConfigKeyExpiry:;
- (void)setConfigKeyExpiry:date:osVersion:;
- (BOOL)getConfigKeyExpiry:date:osVersion:;
- (BOOL)getConfigKeyIsExpired:;
- (id)_instanceSpecificGetKey:;
- (id)_instanceSpecificGetKeyPath:;
@end
