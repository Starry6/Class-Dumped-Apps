@interface AWEMVClientForceInsertController : AWEDCFeedBaseController
@property (nonatomic) NSArray strategyList;
@property (nonatomic) NSMutableDictionary insertIndexCache;
@property (nonatomic) NSMutableDictionary fallbackInsertIndexCache;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)strategyList;
- (void)setStrategyList:;
- (void)prepareBeforeHandleClientForceInsert:;
- (id)collectInsertItemsWithContext:;
- (void)handleConflictWithInsertItems:context:;
- (id)handleInsertItems:context:;
- (void)prepareAfterHandleClientForceInsert;
- (void)setInsertIndexCache:;
- (void)setFallbackInsertIndexCache:;
- (unsigned long long)calculateInsertIndex:withContext:;
- (unsigned long long)handleFallbackStrategy:withContext:;
- (void)saveInsertItem:to:atIndex:;
- (BOOL)isExclusiveWithInsertMethod:;
- (id)fallbackInsertIndexCache;
- (id)insertIndexCache;
- (id)handleClientForceInsert:;
- (void).cxx_destruct;
- (void)containerViewDidLoad;
@end
