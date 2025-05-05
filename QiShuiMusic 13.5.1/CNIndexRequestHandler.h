@interface CNIndexRequestHandler : NSObject
- (void)reindexAllSearchableItems;
- (void).cxx_destruct;
- (id)initWithContactStore:;
- (id)initWithContactStore:searchableIndex:logger:batchSize:;
- (void)performIndexing;
- (void)reindexSearchableItemsWithIdentifiers:;
- (id)verifyIndexLoggingSummary:error:;
@end
