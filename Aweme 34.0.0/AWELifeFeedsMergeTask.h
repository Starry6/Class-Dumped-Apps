@interface AWELifeFeedsMergeTask : NSObject
@property (nonatomic) @? completeBlock;
- (void)setCompleteBlock:;
- (id)completeBlock;
- (id)errorWithCode:msg:;
- (void)mergePageViewModel:newPageViewModel:completeBlock:;
- (void)invokeFailureCompleteBlockWithError:;
- (void)invokeFinishCompleteBlockWithPageViewModel:;
- (id)updatePageViewModel:newPageViewModel:;
- (id)mergePageInfo:newPageInfo:;
- (id)nodeMerge:mergedNodeMap:newNodeMap:;
- (id)loadMoreNodeWithTag:oldNodeMap:newNodeMap:;
- (id)refreshNodeWithTag:oldNodeMap:newNodeMap:;
- (id)updateNodeWithTag:oldNodeMap:newNodeMap:;
- (id)removeNodeWithTag:nodeMap:;
- (id)clearNodeWithTag:nodeMap:;
- (id)nodeMapInTreeWhichAsRoot:nodeMap:;
- (id)removeSubNodesWithTag:nodeMap:;
- (id)nodeTagListInTreeWhichAsRoot:nodeMap:;
- (id)containerNodeMapFromNodeMap:;
- (void).cxx_destruct;
@end
