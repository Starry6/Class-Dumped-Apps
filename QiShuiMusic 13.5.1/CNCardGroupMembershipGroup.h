@interface CNCardGroupMembershipGroup : CNCardGroup
@property (nonatomic) NSArray parentGroups;
@property (nonatomic) NSArray groupsToDisplayForEditing;
- (id)title;
- (void).cxx_destruct;
- (id)displayItems;
- (id)editingItems;
- (id)parentGroupItems;
- (id)groupItemsToDisplayForEditing;
- (id)parentGroups;
- (void)setParentGroups:;
- (id)groupsToDisplayForEditing;
- (void)setGroupsToDisplayForEditing:;
@end
