@interface IESLivePinCommentStore : NSObject
@property (nonatomic) NSMutableArray nodes;
@property (nonatomic) NSMutableArray timeoutNodes;
@property (nonatomic) HTSLiveApi api;
@property (nonatomic) <IESLiveRoomServiceAdapter> roomModel;
@property (nonatomic) HTSEventContext trackContext;
@property (nonatomic) BOOL isAnchor;
@property (nonatomic) <IESLivePinCommentReaction> reaction;
@property (nonatomic) BOOL isGameingForAndroid;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isValidPinNode:;
- (id)abilityWithItem:;
- (id)abilityWithNodeType:;
- (double)calculateDisplayDurationWithEndTime:;
- (void)checkNodesDisplayDuration;
- (long long)getItemNodeId:;
- (id)getNodeByNodeId:;
- (void)handleHighlightContainerSyncData:;
- (void)handleReviewMessage:;
- (BOOL)hasPinPrivilege:;
- (id)initWithRoomModel:diContext:;
- (BOOL)isDuplicateNode:;
- (BOOL)isDuplicateNode:withOtherNode:;
- (BOOL)isEmptyNode:;
- (BOOL)isGameingForAndroid;
- (BOOL)isSupportPinMessage:;
- (BOOL)isValidHighlightItem:;
- (BOOL)isValidNode:;
- (void)p_unPinAllCommentNode:withFinish:;
- (void)pinCommentNode:finish:;
- (void)pinCommentNodeDisplayTimeout:;
- (void)removeCheckedNodes;
- (void)removeEmptyNodes;
- (void)removeTimeoutNodeId:;
- (id)roomModel;
- (void)setIsAnchor:;
- (void)setIsGameingForAndroid:;
- (void)setRoomModel:;
- (void)setTimeoutNodes:;
- (void)setTrackContext:;
- (void)setupPinCommon:forNode:;
- (void)subscribedSyncDataUpdatedWithValue:oldVersion:newVersion:;
- (void)subscribedSyncDataWithValue:version:;
- (id)timeoutNodes;
- (void)trackAnchorReviewDurationWith:;
- (id)trackContext;
- (void)unPinAllCommentNodeWithFinish:;
- (void)unPinCommentNode:finish:;
- (void)updateNode:withHighlightItem:;
- (void)removeNode:;
- (void)setNodes:;
- (BOOL)isAnchor;
- (void)addNode:;
- (id)nodes;
- (void)setup;
- (void).cxx_destruct;
- (void)messageReceived:;
- (id)reaction;
- (id)api;
- (void)setReaction:;
- (void)setApi:;
@end
