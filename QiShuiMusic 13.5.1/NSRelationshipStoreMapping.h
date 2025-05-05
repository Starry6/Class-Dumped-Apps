@interface NSRelationshipStoreMapping : NSPropertyStoreMapping
- (void)dealloc;
- (id)foreignKeys;
- (id)relationship;
- (id)destinationEntityExternalName;
- (id)joins;
- (unsigned int)joinSemantic;
- (BOOL)isEqual:;
@end
