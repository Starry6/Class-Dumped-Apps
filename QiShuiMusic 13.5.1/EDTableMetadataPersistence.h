@interface EDTableMetadataPersistence : NSObject
+ (long long)largestDeletedRowIDForTableName:withConnection:;
+ (BOOL)updateLargestDeletedRowID:forTableName:withConnection:;
+ (id)tablesAndForeignKeysToResolve:associationsToResolve:;
@end
