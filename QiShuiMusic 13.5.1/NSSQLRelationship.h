@interface NSSQLRelationship : NSSQLProperty
- (id)foreignKey;
- (void)dealloc;
- (void)copyValuesForReadOnlyFetch:;
- (id)correlationTableName;
- (id)sourceEntity;
- (id)initWithEntity:propertyDescription:;
- (id)name;
- (id)destinationEntity;
- (void)_setForeignOrderKey:;
- (id)initForReadOnlyFetchWithEntity:propertyDescription:;
@end
