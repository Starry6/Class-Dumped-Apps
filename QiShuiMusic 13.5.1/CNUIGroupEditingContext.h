@interface CNUIGroupEditingContext : NSObject
@property (nonatomic) NSArray addedGroups;
@property (nonatomic) NSArray removedGroups;
@property (nonatomic) NSArray originalGroups;
@property (nonatomic) NSArray groupsToDisplayForEditing;
- (id)init;
- (void).cxx_destruct;
- (id)groupsToDisplayForEditing;
- (id)removedGroups;
- (id)initWithOriginalGroups:;
- (void)addGroup:;
- (void)removeGroup:;
- (BOOL)group:isInGroupArray:;
- (id)originalGroups;
- (id)addedGroups;
- (void)setAddedGroups:;
- (void)setRemovedGroups:;
@end
