@interface AWENewCoverEditToolBarDataManager : NSObject
@property (nonatomic) NSMutableArray array;
@property (nonatomic) NSMutableDictionary dictionary;
@property (nonatomic) NSArray orderArray;
- (BOOL)addBarItem:;
- (void)removeBarItem:;
- (id)getBarItemWithItemId:;
- (unsigned long long)getIndexWithItemId:;
- (id)getBarItemWithIndex:;
- (void)setOrderArray:;
- (void)sortArray;
- (id)orderArray;
- (id)init;
- (id)array;
- (id)dictionary;
- (void)setDictionary:;
- (void)setArray:;
- (void).cxx_destruct;
- (id)barItems;
@end
