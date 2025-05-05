@interface SSKeyValueStoreSession : NSObject
@property (nonatomic) SSSQLiteDatabase database;
- (id)initWithDatabase:;
- (void)dealloc;
- (id)iTunesValueForKey:usedDomain:;
- (id)database;
- (id)copyAccountDictionaryForDomain:;
- (id)copyDataForDomain:key:;
- (id)copyValueForDomain:key:;
- (id)existingEntityForDomain:key:;
@end
