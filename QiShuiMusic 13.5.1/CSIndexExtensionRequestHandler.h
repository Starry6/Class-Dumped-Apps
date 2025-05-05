@interface CSIndexExtensionRequestHandler : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (void)searchableIndex:reindexSearchableItemsWithIdentifiers:acknowledgementHandler:;
- (void)searchableIndex:reindexAllSearchableItemsWithAcknowledgementHandler:;
- (void)beginRequestWithExtensionContext:;
- (void)index:reindexSearchableItemsWithIdentifiers:acknowledgementHandler:;
- (void)reindexAllSearchableItemsForIndex:acknowledgementHandler:;
- (void)searchableIndexDidThrottle:;
- (void)searchableIndexDidFinishThrottle:;
@end
