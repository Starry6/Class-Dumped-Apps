@interface LAKeyStoreBackendQueryBuilder : NSObject
- (id)createQueryForKeyWithIdentifier:domain:acl:;
- (id)fetchQueryForKeyWithIdentifier:domain:;
- (id)fetchQueryForKeyWithPublicKeyHash:;
- (id)fetchQueryForKeysWithDomain:;
- (id)removeQueryForKeysWithDomain:;
- (id)removeQueryForKeys;
- (id)createQueryForGenericPasswordWithIdentifier:domain:data:protectedBy:;
- (id)fetchQueryForGenericPasswordWithIdentifier:domain:;
- (id)fetchQueryForGenericPasswordsWithDomain:;
- (id)removeQueryForGenericPasswordsWithDomain:;
- (id)removeQueryForGenericPasswords;
@end
