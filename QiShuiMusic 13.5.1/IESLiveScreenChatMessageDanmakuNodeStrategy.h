@interface IESLiveScreenChatMessageDanmakuNodeStrategy : IESLiveDanmakuNodeBaseStrategy
@property (nonatomic) HTSLiveScreenChatMessage screenChatMessage;
- (void)AsyncBuildNode:;
- (id)buildNodeBasePart;
- (void)buildNodeForAdminPartForNode:syncBuild:;
- (void)buildNodeForOfficialPartForNode:;
- (id)buildNodeSyncPartOnSyncMode:;
- (long long)buildingMode;
- (BOOL)isOfficial;
- (id)screenChatMessage;
- (void)setScreenChatMessage:;
- (id)userName:limitWithLength:;
- (BOOL)filter;
- (BOOL)isLandscape;
- (void).cxx_destruct;
- (id)buildNode;
@end
