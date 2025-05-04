@interface AWEGrouponC2ContainerMergeDataSource : NSObject
@property (nonatomic) NSArray delegates;
@property (nonatomic) BOOL isInitFetchFinish;
@property (nonatomic) BOOL hasTransformerCache;
@property (nonatomic) AWEGrouponPageContext pageContext;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setUpBinding;
- (id)collectionView:layout:cellWidth:sizeForItemAtIndexPath:;
- (void)setIsInitFetchFinish:;
- (void)setHasTransformerCache:;
- (BOOL)isInitFetchFinish;
- (BOOL)hasTransformerCache;
- (id)initWithDataSourceDelegateArray:pageContext:;
- (id)feed;
- (id)transformer;
- (id)delegates;
- (void)setDelegates:;
- (id)collectionView:viewForSupplementaryElementOfKind:atIndexPath:;
- (id)collectionView:cellForItemAtIndexPath:;
- (long long)numberOfSectionsInCollectionView:;
- (void).cxx_destruct;
- (long long)collectionView:numberOfItemsInSection:;
- (void)setPageContext:;
- (id)pageContext;
@end
