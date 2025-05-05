@interface BDRETrieOpGraphNodeBuilder : BDREGraphNodeBuilder
@property (nonatomic) NSArray regexWords;
- (id)innerBuildNodeWithGraph:treeNode:index:;
- (BOOL)maybeRegexStr:;
- (id)regexWords;
- (id)init;
- (void).cxx_destruct;
@end
