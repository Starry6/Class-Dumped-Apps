@interface NAMutableTreeNode : NATreeNode
@property (nonatomic) @ representedObject;
@property (nonatomic) NSSet childNodes;
- (void)addChild:;
- (void)removeChild:;
- (void)addChildren:;
- (void)setChildNodes:;
- (void)removeChildrenPassingTest:;
@end
