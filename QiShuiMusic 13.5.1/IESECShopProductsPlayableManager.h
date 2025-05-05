@interface IESECShopProductsPlayableManager : NSObject
@property (nonatomic) UICollectionView collectionView;
@property (nonatomic) <IESECShopProductsPlayableManagerDelegate> delegate;
@property (nonatomic) Q strategy;
@property (nonatomic) double stationaryTime;
@property (nonatomic) IESECShopProductsPlayableTask currentTask;
- (void)cancelCurrentTask;
- (id)initWithPlayableList:;
- (void)playAtIndexPath:;
- (void)playNextPlayable;
- (void)setStationaryTime:;
- (double)stationaryTime;
- (id)taskAtIndexPath:;
- (void)updateVisibleArea;
- (unsigned long long)strategy;
- (void)setDelegate:;
- (void)setCollectionView:;
- (id)delegate;
- (void).cxx_destruct;
- (void)setStrategy:;
- (void)reset;
- (id)currentTask;
- (id)collectionView;
- (id).cxx_construct;
- (id)sortedIndexPathsForVisibleItems;
@end
