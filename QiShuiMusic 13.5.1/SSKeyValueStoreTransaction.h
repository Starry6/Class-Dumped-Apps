@interface SSKeyValueStoreTransaction : SSKeyValueStoreSession
- (BOOL)setValue:forDomain:key:;
- (void)removeAccountFromDomain:;
- (BOOL)setData:forDomain:key:;
@end
