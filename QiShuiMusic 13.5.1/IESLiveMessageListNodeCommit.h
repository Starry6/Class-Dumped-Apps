@interface IESLiveMessageListNodeCommit : NSObject
@property (nonatomic) NSArray refreshNodes;
@property (nonatomic) HTSLiveMessageListNode foldNode;
@property (nonatomic) NSArray needDeleteMessageIds;
- (id)foldNode;
- (id)needDeleteMessageIds;
- (id)refreshNodes;
- (void)setFoldNode:;
- (void)setNeedDeleteMessageIds:;
- (void)setRefreshNodes:;
- (void).cxx_destruct;
@end
