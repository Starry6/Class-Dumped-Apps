@interface AWEIMShortcutEmoticonView : UIView
@property (nonatomic) UICollectionView collectionView;
@property (nonatomic) UIView headerView;
@property (nonatomic) NSArray emoticons;
@property (nonatomic) @? selectHandler;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)_renderDataSource;
- (void)_setupUIComponents;
- (void)didSelectEmoticonWithHandler:;
- (id)emoticons;
- (id)selectHandler;
- (void)setEmoticons:;
- (void)setSelectHandler:;
- (id)collectionView:layout:referenceSizeForHeaderInSection:;
- (void)setHeaderView:;
- (long long)collectionView:numberOfItemsInSection:;
- (id)headerView;
- (id)collectionView:cellForItemAtIndexPath:;
- (id)initWithFrame:;
- (void)setCollectionView:;
- (void).cxx_destruct;
- (id)collectionView:viewForSupplementaryElementOfKind:atIndexPath:;
- (id)collectionView;
@end
