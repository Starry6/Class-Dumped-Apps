@interface PHQueryChangeDetectionCriteria : NSObject
- (id)init;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithPLQueryChangeDetectionCriteria:;
- (id)changeDetectionCriteriaByAddingChangeDetectionCriteria:;
- (void)enumerateEntitiesAndAttributeIndexesUsingBlock:;
- (void)enumerateEntitiesAndRelationshipIndexesBlock:;
@end
