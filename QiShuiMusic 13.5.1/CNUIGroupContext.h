@interface CNUIGroupContext : NSObject
@property (nonatomic) NSDictionary addedGroupsByContainerDict;
@property (nonatomic) NSArray removedGroups;
- (void).cxx_destruct;
- (id)initWithAddedGroupsByContainerDict:removedGroups:;
- (id)addedGroupsByContainerDict;
- (id)removedGroups;
@end
