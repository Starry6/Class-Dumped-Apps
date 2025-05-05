@interface MFPersistenceDatabaseSchema_iOS : EDPersistenceDatabaseSchema
+ (id)tablesAndForeignKeysToResolve:associationsToResolve:;
+ (id)additionalSchemaProviders;
@end
