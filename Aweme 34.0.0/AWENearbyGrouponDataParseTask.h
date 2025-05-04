@interface AWENearbyGrouponDataParseTask : NSObject
@property (nonatomic) @? completeBlock;
- (void)setCompleteBlock:;
- (id)completeBlock;
- (id)errorWithCode:msg:;
- (void)parseData:completeBlock:;
- (void)invokeFailureCompleteBlockWithError:;
- (id)parseNodesMap:;
- (void)builRelationships:layoutData:;
- (void)invokeFinishCompleteBlockWithPageViewModel:;
- (id)createNodeWithTag:nodeData:;
- (void)builRelationshipsWithNode:subTagList:nodeMap:;
- (id)init;
- (void).cxx_destruct;
@end
