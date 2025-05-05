@interface WBSHistoryTopicTag : WBSHistoryTag
@property (nonatomic) NSArray historyItems;
- (void)dealloc;
- (void)_historyItemsWereRemoved:;
- (void).cxx_destruct;
- (id)historyItems;
- (id)initWithTitle:identifier:databaseID:modificationTimestamp:level:;
- (id)initWithTag:historyItems:;
- (void)tagHistoryItem:;
- (void)groupHistoryItemsBySessionWithCompletionHandler:;
- (BOOL)containsHistoryItem:;
- (void)removeHistoryItems:;
@end
