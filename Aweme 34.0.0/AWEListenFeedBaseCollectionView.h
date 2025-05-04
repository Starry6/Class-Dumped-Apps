@interface AWEListenFeedBaseCollectionView : UICollectionView
@property (nonatomic) double minmumOffset;
@property (nonatomic) double maxmumOffset;
- (double)minmumOffset;
- (void)setMinmumOffset:;
- (double)maxmumOffset;
- (void)setMaxmumOffset:;
- (void)setContentOffset:;
@end
