@interface AWEIMMessageTabDoubleTapComponent : AWEIMComponentBase
@property (nonatomic) <AWEIMChatListInterface> chatListService;
@property (nonatomic) <AWEIMTabSkeletonInterface> tabSkeletonService;
@property (nonatomic) <AWEIMMessageTabIndexInterface> tabIndexerService;
@property (nonatomic) <AWEIMMessageTabModeInterface> messageTabModeService;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)afterInitialComponentAllResolved:;
- (void)componentDidMounted:;
- (void)tabBarItemViewControllerDidDoubleTap;
- (void)setMessageTabModeService:;
- (id)messageTabModeService;
- (void)setTabSkeletonService:;
- (id)tabSkeletonService;
- (void)setChatListService:;
- (id)chatListService;
- (void)tabBarItemViewControllerDidClick;
- (void)setTabIndexerService:;
- (void)scrollToUnreadConversation:;
- (BOOL)p_isTopCellOffsetWithPinView;
- (id)tabIndexerService;
- (BOOL)isUnreadCountChatWithModel:;
- (BOOL)p_isIndexEnable:top:;
- (void)p_scrollToIndexPath:isDoubleClick:;
- (void)p_trackHomePageMessageButtonWithIndex:isDoubleClick:;
- (void).cxx_destruct;
@end
