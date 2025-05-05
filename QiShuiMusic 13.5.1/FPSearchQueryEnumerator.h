@interface FPSearchQueryEnumerator : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void).cxx_destruct;
- (void)invalidate;
- (void)enumerateItemsForObserver:startingAtPage:;
- (id)initWithSearchQuery:mountPoint:;
- (void)_gatherItemsWithCompletionBlock:;
- (id)_createSearchQuery;
- (id)_fpItemsFromSearchableItems:;
@end
