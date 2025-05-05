@interface SSAppPurchaseHistoryDatabase : NSObject
- (id)valueForDatabaseProperty:;
- (id)init;
- (void)dealloc;
- (BOOL)removeValueForDatabaseProperty:;
- (void)readUsingTransactionBlock:;
- (BOOL)setCurrentAccountUniqueIdentifier:;
- (BOOL)setLocalRevision:forAccountUniqueIdentifier:;
- (id)currentAccountUniqueIdentifier;
- (BOOL)resetCacheForNewAccountID:;
- (long long)localRevisionForAccountUniqueIdentifier:;
- (void)modifyUsingAppPurchaseHistoryTransactionBlock:;
- (void)readAsyncUsingTransactionBlock:;
- (id)allProperties:accountID:includingHidden:;
- (id)database;
- (BOOL)setValue:forDatabaseProperty:;
- (id)initWithDatabaseURL:readOnly:;
+ (id)newDefaultInstance;
+ (BOOL)_setupDatabase:;
+ (void)_createDatabaseDirectory;
+ (id)accountUniqueIdentifierKey;
@end
