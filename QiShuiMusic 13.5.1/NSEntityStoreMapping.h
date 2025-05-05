@interface NSEntityStoreMapping : NSStoreMapping
- (id)entity;
- (id)subentityColumn;
- (unsigned int)subentityID;
- (id)propertyMappings;
- (void)dealloc;
- (id)primaryKeys;
- (BOOL)isSingleTableEntity;
- (id)description;
- (id)initWithEntity:;
- (BOOL)isEqual:;
@end
