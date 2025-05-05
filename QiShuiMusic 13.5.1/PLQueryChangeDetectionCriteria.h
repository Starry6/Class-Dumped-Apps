@interface PLQueryChangeDetectionCriteria : NSObject
@property (nonatomic) BOOL isEmpty;
- (id)init;
- (BOOL)isEmpty;
- (void).cxx_destruct;
- (id)description;
- (void)enumerateEntitiesAndAttributesUsingBlock:;
- (void)enumerateEntitiesAndRelationshipsUsingBlock:;
- (void)addAttributeKeyPath:forEntityName:;
- (void)addRelationshipKeyPath:forEntityName:;
@end
