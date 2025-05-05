@interface IESLiveSaaSMutuallyExclusiveViewStore : NSObject
@property (nonatomic) NSMutableDictionary graphMap;
@property (nonatomic) NSMutableDictionary itemMap;
@property (nonatomic) NSMutableArray itemQueue;
@property (nonatomic) NSMutableSet showingItems;
- (id)itemMap;
- (id)graphMap;
- (void)setGraphMap:;
- (void)setItemMap:;
- (void)setShowingItems:;
- (id)showingItems;
- (void)removeItem:;
- (void)addItem:;
- (id)init;
- (void)removeItemWithIdentifier:;
- (void).cxx_destruct;
- (id)itemQueue;
- (void)setItemQueue:;
@end
