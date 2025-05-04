@interface AWEUIKitCollectionViewScrollObserver : NSObject
@property (nonatomic) UICollectionView awe_collectionView;
@property (nonatomic) BOOL awe_hasObserved;
@property (nonatomic) @? didScrollBlock;
- (void)setAwe_collectionView:;
- (id)awe_collectionView;
- (void)setAwe_hasObserved:;
- (id)didScrollBlock;
- (BOOL)awe_hasObserved;
- (void)setDidScrollBlock:;
- (void)dealloc;
- (id)initWithCollectionView:;
- (void)observeValueForKeyPath:ofObject:change:context:;
- (void).cxx_destruct;
@end
