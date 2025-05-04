@interface AWEIMMessageTabVisibleConversationComponent : AWEIMComponentBase
@property (nonatomic) <AWEIMChatListInterface> chatListService;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)afterInitialComponentAllResolved:;
- (void)componentDidMounted:;
- (id)orderedVisibleChatModelsArray;
- (id)orderedVisibleChatViewModelsArray;
- (void)setChatListService:;
- (id)chatListService;
- (BOOL)p_cellIsVisiable:;
- (void).cxx_destruct;
- (id)visibleConversations;
@end
