@interface AWEIMEmojiMutableAuthorListViewController : UIViewController
@property (nonatomic) UICollectionView collectionView;
@property (nonatomic) NSArray authorArray;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)renderModel:;
- (id)authorArray;
- (void)setAuthorArray:;
- (void)__setUPUIs;
- (void)__didClickBack;
- (id)collectionView;
- (id)collectionView:cellForItemAtIndexPath:;
- (void)viewDidLoad;
- (void)setCollectionView:;
- (void).cxx_destruct;
- (long long)collectionView:numberOfItemsInSection:;
- (id)collectionView:layout:sizeForItemAtIndexPath:;
@end
