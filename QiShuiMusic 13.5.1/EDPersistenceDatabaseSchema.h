@interface EDPersistenceDatabaseSchema : NSObject
+ (id)schema;
+ (id)propertyMapper;
+ (id)objectPropertyMapperForSchema:protectedSchema:;
+ (id)mailboxesTableName;
+ (id)protectedSchema;
+ (id)propertiesTableSchema;
+ (id)partialMailboxesTableSchema;
+ (id)additionalSchemaProviders;
+ (id)_schemaProviders;
+ (void)test_resetSchema;
+ (void)_initializeSchemas;
+ (id)_schemaWithPopulationBlock:;
+ (id)_protectedSchemaProviders;
+ (id)propertiesTableName;
@end
