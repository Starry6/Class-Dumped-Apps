@interface SSAppPurchaseHistoryEntry : SSSQLiteEntity
+ (id)databaseTable;
+ (id)disambiguatedSQLForProperty:;
+ (id)supportsPlatformPredicate:;
+ (id)predicateForAccountIdentifier:;
+ (id)predicateForNotFirstParty;
+ (id)predicateForNotHidden;
+ (id)predicateForHasMessagesExtension;
+ (id)predicateForIs32BitOnly:;
@end
