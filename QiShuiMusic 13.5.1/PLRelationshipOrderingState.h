@interface PLRelationshipOrderingState : NSObject
- (id)objectIDs;
- (void).cxx_destruct;
- (id)description;
- (id)initWithObjectIDs:orderValues:;
- (unsigned long long)indexForObjectID:;
- (BOOL)setOrderValue:forObjectID:atIndex:;
- (id)orderKeys;
- (unsigned long long)findIndexForObjectID:newOrderValue:hasOrderValueConflictWithObjectID:;
@end
