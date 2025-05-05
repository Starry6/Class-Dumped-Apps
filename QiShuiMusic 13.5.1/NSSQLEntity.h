@interface NSSQLEntity : NSStoreMapping
- (id)model;
- (id)externalName;
- (id)toManyRelationships;
- (void)dealloc;
- (id)manyToManyRelationships;
- (id)foreignKeyColumns;
- (void)copyValuesForReadOnlyFetch:;
- (id)tableName;
- (id)initWithModel:entityDescription:;
- (id)attributeColumns;
- (id)attributes;
- (id)description;
- (id)name;
- (id)rootEntity;
- (id)foreignOrderKeyColumns;
- (id)foreignEntityKeyColumns;
- (id)entityDescription;
@end
