@interface CalMockPreferenceStore : NSObject
- (id)init;
- (BOOL)getBoolean:forDomain:key:;
- (void)setValue:forDomain:key:;
- (BOOL)getInteger:forDomain:key:;
- (BOOL)getValue:forDomain:key:;
- (void).cxx_destruct;
- (id)initWithPath:;
- (void)synchronizeDomain:;
- (BOOL)_getValue:forDomain:key:;
- (void)_setValue:forDomain:key:;
+ (id)preferencesStoreForPath:;
+ (id)inMemoryStore;
+ (id)storagePathForDirectory:;
+ (id)encodeKeysDictionary:;
+ (id)decodeKeysDictionary:;
@end
