@interface AWEIMMsgUnavaliableUIComponent : NSObject
@property (nonatomic) double lastUpdateTimestamp;
@property (nonatomic) NSMutableArray unavaliableItems;
@property (nonatomic) NSMutableDictionary handlerMessagesDic;
@property (nonatomic) <AWEIMMessageListComponentCenter> componentCenter;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)componentCenter;
- (void)setComponentCenter:;
- (void)msg_tableViewFirstLoadCompletion;
- (void)msg_scrollViewDidEndScroll;
- (void)didAddToComponentCenter;
- (id)handlerMessagesDic;
- (void)setHandlerMessagesDic:;
- (void)setUnavaliableItems:;
- (void)registUnavaliableItems;
- (id)unavaliableItems;
- (void)updateUnvaliableStateForMessagesOnScreenRequestScene:;
- (id)currentVisibleMessages;
- (id)rebuildDataSource:;
- (void)updateFeedUnavailableStateForMessagesOnScreenRequestScene:;
- (void)updateCustomizeUnvaliableStateForMessagesOnScreen;
- (id)getFeedItemIdsOnScreen;
- (id)getNeedReloadMessagesByUnavaliableItemIds:;
- (void)setUnavailableFlagUpdateTimestampForMessages:;
- (void)reloadCellsWithMessages:beforeReloadBlock:;
- (id)messageCellForMessage:;
- (id)getMessageTypeAllItemIds:messages:;
- (void).cxx_destruct;
- (double)lastUpdateTimestamp;
- (void)setLastUpdateTimestamp:;
@end
