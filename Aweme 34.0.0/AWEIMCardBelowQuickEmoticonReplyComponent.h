@interface AWEIMCardBelowQuickEmoticonReplyComponent : AWEIMComponentBase
@property (nonatomic) AWEIMMessageConversation conversation;
@property (nonatomic) q initialPossibleGlobalIndex;
@property (nonatomic) q lastGlobalIndexFromMe;
@property (nonatomic) Q requestCount;
@property (nonatomic) <IESIMHttpTask> requestTask;
@property (nonatomic) AWEIMLatestKindOfMessageInConversationComponent latestMsgComponent;
@property (nonatomic) AWEIMMessage targetMessage;
@property (nonatomic) <AWEIMCardBelowQuickEmoticonTargetModel> targetModel;
@property (nonatomic) NSMutableDictionary targetModelDict;
@property (nonatomic) BOOL enableAllFeedShow;
@property (nonatomic) BOOL demoteOpt;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)hostVC_viewWillAppear;
- (void)componentDidMounted:;
- (void)didReceiveNewMessage:reason:;
- (void)hostVC_afterFirstRender;
- (void)beforeAsync_didFetchMsgWithMessageGroupArray:hasMore:direction:shouldAutoLoadMore:isFirstLoad:;
- (void)imFeedDetailSendMessageWithQuoteMessage:;
- (void)p_updateInitialGlobalIndex;
- (long long)initialPossibleGlobalIndex;
- (BOOL)enableAllFeedShow;
- (long long)lastGlobalIndexFromMe;
- (id)targetModel;
- (id)targetModelDict;
- (BOOL)isConversationCanShow;
- (long long)initialPossibleGlobalIndexOfConversation:;
- (void)setInitialPossibleGlobalIndex:;
- (void)setTargetModelDict:;
- (BOOL)p_isTargetMessage:;
- (BOOL)demoteOpt;
- (void)setLatestMsgComponent:;
- (void)p_handleTargetMsgChanged:;
- (BOOL)p_enableQuickReplyWithMessage:;
- (id)p_targetModelMessage:;
- (void)p_fetchEmojiReplyWithTargetModel:;
- (void)setLastGlobalIndexFromMe:;
- (void)resetWithServerMessageID:;
- (id)targetMessage;
- (void)setTargetMessage:;
- (void)setTargetModel:;
- (id)latestMsgComponent;
- (void)p_updateKVOTargetModelWithItemID:;
- (void)setEnableAllFeedShow:;
- (void)setDemoteOpt:;
- (void)setRequestCount:;
- (unsigned long long)requestCount;
- (void)dealloc;
- (id)requestTask;
- (void)setRequestTask:;
- (void).cxx_destruct;
- (void)reset;
- (id)conversation;
- (void)setConversation:;
+ (BOOL)canCreateComponentWithContext:;
+ (BOOL)p_isUserMessage:;
+ (id)formatDataWithEmojiReplyArray:preferredCount:;
+ (BOOL)updateCacheModel:withRenderModels:preferredCount:;
+ (id)requestWithModel:preferredCount:conversation:completion:;
+ (id)sharedCache;
@end
