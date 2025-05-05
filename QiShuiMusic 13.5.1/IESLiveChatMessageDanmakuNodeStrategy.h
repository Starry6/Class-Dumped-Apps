@interface IESLiveChatMessageDanmakuNodeStrategy : IESLiveDanmakuNodeBaseStrategy
@property (nonatomic) HTSLiveChatMessage chatMessage;
- (void)AsyncBuildNode:;
- (void)setChatMessage:;
- (id)buildNodeBasePart;
- (void)buildNodeForNormalViewPartForNode:syncBuild:;
- (void)buildNodeForVSStarPartForNode:syncBuild:;
- (id)buildNodeSyncPartOnSyncMode:;
- (long long)buildingMode;
- (id)chatMessage;
- (id)initWithMetaData:diContext:;
- (BOOL)isVSStar;
- (void)loadAttributedStringWithPlainText:forNode:;
- (void)refreshNode:;
- (BOOL)filter;
- (void).cxx_destruct;
- (id)buildNode;
@end
