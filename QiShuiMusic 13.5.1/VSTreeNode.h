@interface VSTreeNode : NSObject
@property (nonatomic) VSTreeNode parentNode;
@property (nonatomic) NSMutableArray children;
@property (nonatomic) @ representedObject;
@property (nonatomic) NSIndexPath indexPath;
@property (nonatomic) BOOL leaf;
@property (nonatomic) NSArray childNodes;
@property (nonatomic) NSMutableArray mutableChildNodes;
- (id)init;
- (id)children;
- (void)setChildren:;
- (void).cxx_destruct;
- (id)indexPath;
- (id)childNodes;
- (id)parentNode;
- (id)representedObject;
- (void)setParentNode:;
- (BOOL)isLeaf;
- (id)initWithRepresentedObject:;
- (void)insertChildNodes:atIndexes:;
- (void)removeChildNodesAtIndexes:;
- (id)mutableChildNodes;
- (id)descendantNodeAtIndexPath:;
- (id)_descendantNodesAtDepth:;
- (void)enumerateDescendantsWithOptions:usingBlock:;
+ (id)treeNodeWithRepresentedObject:;
+ (id)keyPathsForValuesAffectingIndexPath;
+ (id)keyPathsForValuesAffectingLeaf;
@end
