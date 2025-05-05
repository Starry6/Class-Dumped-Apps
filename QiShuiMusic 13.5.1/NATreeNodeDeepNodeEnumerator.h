@interface NATreeNodeDeepNodeEnumerator : NSEnumerator
@property (nonatomic) NATreeNode node;
@property (nonatomic) NSArray allObjects;
- (id)nextObject;
- (id)node;
- (id)initWithNode:;
- (void).cxx_destruct;
- (id)allObjects;
- (id)copyWithZone:;
@end
