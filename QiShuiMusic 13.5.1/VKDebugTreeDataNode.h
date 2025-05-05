@interface VKDebugTreeDataNode : VKDebugTreeNode
- (BOOL)isExpandable;
- (id)name;
- (long long)propertyCount;
- (id)propertyColumn;
- (id)valueColumn;
- (id)tagsColumn;
- (void)searchNodes:withParameter:;
- (void)buildChildren;
- (id)initWithDebugTreeNode:withParent:;
@end
