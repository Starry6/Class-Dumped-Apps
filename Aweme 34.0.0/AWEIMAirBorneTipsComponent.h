@interface AWEIMAirBorneTipsComponent : AWEIMComponentBase
@property (nonatomic) AWEIMMessageConversation conversation;
@property (nonatomic) <AWEIMMessageVisibleCellInterface> visibleCellService;
@property (nonatomic) <AWEIMTopAnchorInterface> topAnchorService;
@property (nonatomic) <AWEIMMessageListDataInterface> messageListData;
@property (nonatomic) <AWEIMMessageTableViewInterface> tableViewService;
@property (nonatomic) <AWEIMMessageReadIndexInterface> readIndexService;
@property (nonatomic) BOOL endShowAirborne;
@property (nonatomic) BOOL showingAirborne;
@property (nonatomic) q poolBottom;
@property (nonatomic) q poolTop;
@property (nonatomic) q poolUpSentinelOrderIndex;
@property (nonatomic) AWEIMMessage poolDownSentinel;
@property (nonatomic) NSArray allUnreadAirborneMessages;
@property (nonatomic) q lastReadMessageGroup;
@property (nonatomic) q lastReadMessageIndex;
@property (nonatomic) NSArray highlights;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)afterInitialComponentAllResolved:;
- (void)componentDidMounted:;
- (void)tableViewDidEndScroll:;
- (void)tableViewDidEndDragging:willDecelerate:;
- (void)tableViewDidEndDecelerating:;
- (void)setMessageListData:;
- (id)messageListData;
- (void)setTableViewService:;
- (id)tableViewService;
- (void)bottomAnchorDidTapped;
- (void)setVisibleCellService:;
- (id)visibleCellService;
- (void)willScrollToLocoalMessage:withSection:withRow:;
- (void)setupAirBorneTipsData;
- (void)showAirborneTip;
- (id)tapOnAirborne;
- (BOOL)shouldShowAirBornTips;
- (void)removeCurrentAllAfterLastestMessage;
- (void)highlightCurrentCells;
- (void)setReadIndexService:;
- (id)readIndexService;
- (void)setTopAnchorService:;
- (id)topAnchorService;
- (void)setLastReadMessageIndex:;
- (void)setLastReadMessageGroup:;
- (void)setPoolBottom:;
- (BOOL)showingAirborne;
- (void)hideAirBorn;
- (void)setPoolTop:;
- (id)currentScreenUnreadAirborneMessageCellsIgnoreHighlight:;
- (void)updateLastUnreadAirborneMessageIndex;
- (id)allUnreadAirborneMessages;
- (void)trackOnClickAirborneTip;
- (id)nextAirborneMessage;
- (long long)lastReadMessageIndex;
- (long long)lastReadMessageGroup;
- (void)setAllUnreadAirborneMessages:;
- (void)getLastetReadAirborneMessageIndex:lastReadMessageIndex:beforeMessage:;
- (void)removeAfterAllMessages:index:;
- (void)setPoolUpSentinelOrderIndex:;
- (void)setPoolDownSentinel:;
- (void)setEndShowAirborne:;
- (void)setShowingAirborne:;
- (void)updateDataWhenScrollEnd;
- (BOOL)endShowAirborne;
- (BOOL)isCurrentAirBorne;
- (void)highlightCellsAndUpdate;
- (void)removeAllMessageWhenTap;
- (void)hideAllTipsIfNeed;
- (void)loadAirborneAvatarImage;
- (void)showAirborneTipText;
- (void)trackAirborneShowTrack;
- (void)trackOnAirborneHide;
- (void)resetAirborneData;
- (BOOL)isArrivedLastestScreen;
- (void)removeAirborneMessagesBeforeMessage:;
- (id)poolDownSentinel;
- (void)removeBeforeAllMessages:;
- (BOOL)isAirborneMessage:;
- (long long)poolTop;
- (long long)poolUpSentinelOrderIndex;
- (long long)poolBottom;
- (id)getAllUnreadAirborneMessagesWithSection:row:fromMsgOrderIndex:;
- (id)getAllUnreadAirborneViewModelsFromMsgOrderIndex:;
- (id)init;
- (void).cxx_destruct;
- (id)highlights;
- (id)visibleCells;
- (id)conversation;
- (void)setConversation:;
- (void)setHighlights:;
+ (BOOL)canCreateComponentWithContext:;
+ (BOOL)isTargetGroupWith:;
@end
