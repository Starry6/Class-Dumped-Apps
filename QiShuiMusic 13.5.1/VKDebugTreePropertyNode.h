@interface VKDebugTreePropertyNode : VKDebugTreeNode
- (id)name;
- (id)propertyColumn;
- (id)valueColumn;
- (id)tagsColumn;
- (void)searchNodes:withParameter:;
- (id)idValueForTreeValue:;
- (id)initWithDebugTreeProperty:withParent:;
@end
