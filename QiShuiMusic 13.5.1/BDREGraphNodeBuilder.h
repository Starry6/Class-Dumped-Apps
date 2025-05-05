@interface BDREGraphNodeBuilder : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)buildBasicCheckWithOpName:treeNode:;
- (id)buildNodeWithGraph:treeNode:index:;
- (id)innerBuildNodeWithGraph:treeNode:index:;
@end
