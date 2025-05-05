@interface BDREStringCmpOpGraphNodeBuilder : BDREGraphNodeBuilder
- (id)innerBuildNodeWithGraph:treeNode:index:;
- (id)operatorSymbol;
- (id)stringCompareNodeWithStrs:;
@end
