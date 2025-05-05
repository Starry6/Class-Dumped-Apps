@interface NSSQLToOne : NSSQLRelationship
- (id)foreignKey;
- (unsigned int)slot;
- (void)dealloc;
- (void)copyValuesForReadOnlyFetch:;
- (id)columnName;
- (id)initWithEntity:inverseToMany:;
- (id)initWithEntity:propertyDescription:;
- (id)description;
- (void)_setForeignOrderKey:;
- (id)initForReadOnlyFetchWithEntity:propertyDescription:;
@end
