@interface ML3AccountCacheDatabase : NSObject
- (id)initWithLibrary:;
- (void).cxx_destruct;
- (BOOL)setAppleID:forDSID:;
- (BOOL)setAppleID:altDSID:forDSID:;
- (id)appleIDForDSID:;
- (BOOL)getPropertiesForDSID:appleID:altDSID:;
- (id)_cacheEntryForDSID:;
- (void)_setCacheEntry:forDSID:;
@end
