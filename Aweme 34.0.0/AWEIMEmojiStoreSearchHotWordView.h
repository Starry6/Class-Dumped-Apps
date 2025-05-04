@interface AWEIMEmojiStoreSearchHotWordView : UIView
@property (nonatomic) UICollectionView hotWordCollectionView;
@property (nonatomic) NSArray dataSource;
@property (nonatomic) <AWEIMEmojiStoreSearchHotWordViewDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)hotWordCollectionView;
- (void)renderWithHotWordArray:;
- (void)setHotWordCollectionView:;
- (id)delegate;
- (id)collectionView:viewForSupplementaryElementOfKind:atIndexPath:;
- (id)collectionView:cellForItemAtIndexPath:;
- (long long)numberOfSectionsInCollectionView:;
- (id)initWithFrame:;
- (void)collectionView:didSelectItemAtIndexPath:;
- (void).cxx_destruct;
- (long long)collectionView:numberOfItemsInSection:;
- (id)collectionView:layout:sizeForItemAtIndexPath:;
- (void)setDataSource:;
- (void)setDelegate:;
- (id)dataSource;
- (void)setupUI;
@end
