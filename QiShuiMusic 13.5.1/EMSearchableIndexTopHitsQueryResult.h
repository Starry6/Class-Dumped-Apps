@interface EMSearchableIndexTopHitsQueryResult : NSObject
@property (nonatomic) CSTopHitQuery topHitSearchQuery;
@property (nonatomic) NSArray foundItems;
@property (nonatomic) NSDictionary foundMatchingHintsByPersistentID;
@property (nonatomic) NSArray searchableItemIdentifiers;
@property (nonatomic) NSDictionary matchingHintsByPersistentID;
- (void).cxx_destruct;
- (id)searchableItemIdentifiers;
- (void)setSearchableItemIdentifiers:;
- (id)initWithTopHitSearchQuery:foundItems:foundMatchingHintsByPersistentID:;
- (void)userDidInteractWithLibraryIdentifier:;
- (long long)rankingIndexForMessageLibraryID:;
- (void)userDidInteractWithConversationID:;
- (long long)rankingIndexForConversationID:;
- (id)matchingHintsByPersistentID;
- (id)topHitSearchQuery;
- (void)setTopHitSearchQuery:;
- (id)foundItems;
- (void)setFoundItems:;
- (id)foundMatchingHintsByPersistentID;
- (void)setFoundMatchingHintsByPersistentID:;
+ (id)log;
@end
