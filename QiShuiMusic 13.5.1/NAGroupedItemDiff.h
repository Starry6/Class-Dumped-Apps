@interface NAGroupedItemDiff : NSObject
@property (nonatomic) NSArray fromGroups;
@property (nonatomic) NSArray toGroups;
@property (nonatomic) @? changeTest;
@property (nonatomic) NSArray groupOperations;
@property (nonatomic) NSArray itemOperations;
@property (nonatomic) NSArray allOperations;
@property (nonatomic) NSString operationDescription;
- (id)debugDescription;
- (id)operationDescription;
- (id)allOperations;
- (void).cxx_destruct;
- (id)description;
- (id)initWithFromGroups:toGroups:changeTest:;
- (void)_performDiff;
- (id)_performItemDiffFromGroup:atIndex:toGroup:atIndex:;
- (id)_briefDescriptionForOperations:type:;
- (id)_operationDescriptionWithPrefix:;
- (id)groupOperations;
- (void)setGroupOperations:;
- (id)itemOperations;
- (void)setItemOperations:;
- (id)fromGroups;
- (void)setFromGroups:;
- (id)toGroups;
- (void)setToGroups:;
- (id)changeTest;
- (void)setChangeTest:;
+ (id)diffFromGroups:toGroups:;
+ (id)diffFromGroups:toGroups:changeTest:;
+ (id)_groupedItemDiffWithGroupOperations:itemOperations:;
@end
