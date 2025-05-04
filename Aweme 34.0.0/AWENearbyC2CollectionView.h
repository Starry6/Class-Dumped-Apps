@interface AWENearbyC2CollectionView : UICollectionView
@property (nonatomic) q pageType;
@property (nonatomic) UIView searchContainer;
@property (nonatomic) UIView buble;
@property (nonatomic) BOOL didViewTouched;
- (id)searchContainer;
- (void)setSearchContainer:;
- (BOOL)didViewTouched;
- (void)setDidViewTouched:;
- (id)buble;
- (void)setBuble:;
- (void)setPageType:;
- (void).cxx_destruct;
- (id)hitTest:withEvent:;
- (long long)pageType;
@end
