@interface AFChildConversationItemList : NSObject
@property (nonatomic) AFConversation conversation;
@property (nonatomic) NSUUID parentItemIdentifier;
- (long long)numberOfItems;
- (id)init;
- (id)itemWithIdentifier:;
- (void).cxx_destruct;
- (id)itemAtIndex:;
- (id)_conversation;
- (void)removeItemsWithIdentifiers:;
- (id)initWithConversation:parentItemIdentifier:;
- (void)addItemsForAceObjects:type:dialogPhase:;
- (void)addItemsForAceObjects:type:dialogPhase:asChildrenOfItemAtIndex:;
- (id)identifiersForItemsAtIndexes:;
- (void)removeItemsAtIndexes:;
- (BOOL)itemIsRestoredAtIndex:;
- (id)_identifierOfItemAtIndex:;
- (id)_indexPathForItemAtIndex:;
- (id)_indexPathForLastRestoredItem;
- (void)_addItemsForAceObjects:type:dialogPhase:asChildrenOfItemWithIdentifier:;
- (id)_parentItemIdentifier;
@end
