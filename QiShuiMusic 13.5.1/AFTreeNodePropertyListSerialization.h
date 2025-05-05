@interface AFTreeNodePropertyListSerialization : NSObject
- (id)_propertyListWithTreeNode:itemPropertyListCreation:;
- (id)propertyListWithTreeNode:itemPropertyListCreation:;
- (id)_treeNodeWithPropertyList:error:itemCreation:;
- (id)treeNodeWithPropertyList:error:itemCreation:;
@end
