@interface NSStoreMapNode : NSObject
- (id)entity;
- (id)knownKeyValuesPointer;
- (id)objectID;
- (id)configurationName;
- (void)dealloc;
- (unsigned int)_versionNumber;
- (id)_snapshot_;
- (id)key;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (BOOL)isEqual:;
- (id)initWithObjectID:;
- (void)_setVersionNumber:;
- (id)destinationsForRelationship:;
@end
