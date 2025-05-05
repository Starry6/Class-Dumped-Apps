@interface GEOConfigStorageXPC : GEOConfigStorageSQLiteBase
- (void)_instanceSpecificSetValue:forKey:;
- (id)_instanceSpecificGetKey:;
- (id)_instanceSpecificGetKeyPath:;
@end
