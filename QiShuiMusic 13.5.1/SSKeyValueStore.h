@interface SSKeyValueStore : NSObject
@property (nonatomic) BOOL localReadable;
@property (nonatomic) BOOL localWritable;
- (void)readUsingSessionBlock:;
- (void)modifyUsingTransactionBlock:;
- (id)init;
- (void)dealloc;
- (void)removeAllValuesForDomain:;
- (void)setValuesWithDictionary:forDomain:;
- (void)setValue:forDomain:key:;
- (BOOL)isLocalWritable;
- (void)setValue:forDomain:key:completionBlock:;
- (void)_loadDatabaseIfNecessary;
- (void)removeAllValuesForDomain:completionBlock:;
- (void)setValuesWithDictionary:forDomain:completionBlock:;
- (void)removeAllValuesWithCompletionBlock:;
- (BOOL)isLocalReadable;
- (id)copyAccounts;
- (id)iTunesValueForKey:usedDomain:;
- (id)accountDictionaries;
- (void)removeAccountFromDomain:;
- (void)getValueForDomain:key:usingBlock:;
- (void)removeAccountDictionaries;
- (void)getValuesForDomain:keys:count:usingBlock:;
+ (BOOL)isLocalReadable;
@end
