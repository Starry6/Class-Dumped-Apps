@interface PLLibraryScopeConditionPerson : PLLibraryScopeCondition
@property (nonatomic) NSArray personUUIDs;
- (unsigned char)type;
- (void).cxx_destruct;
- (id)description;
- (id)personUUIDs;
- (id)conditionQuery;
- (BOOL)replaceTombstonePersonUUID:withPersonUUID:;
- (void)setPersonUUIDs:;
+ (id)conditionWithSingleQueries:criteria:;
+ (BOOL)supportsQueryKey:;
@end
