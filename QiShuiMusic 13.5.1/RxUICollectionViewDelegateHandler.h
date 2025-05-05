@interface RxUICollectionViewDelegateHandler : NSObject
@property (nonatomic) UICollectionView collectionView;
- (void)__collectionViewDelegateDidChanged:;
- (void)addSlaveDelegate:;
- (void)handleCollectionViewDelegateChange;
- (void)removeSlaveDelegate:;
- (void)setDelegateWithMasterDelegate:slaveDelegates:;
- (void)setCollectionView:;
- (void).cxx_destruct;
- (id)collectionView;
+ (id)handlerWithCollectionView:;
@end
