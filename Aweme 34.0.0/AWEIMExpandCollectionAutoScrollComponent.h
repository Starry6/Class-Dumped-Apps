@interface AWEIMExpandCollectionAutoScrollComponent : NSObject
@property (nonatomic) AWEIMExpandCollectionView collectionView;
@property (nonatomic) AWEIMExpandCollectionListModel listModel;
@property (nonatomic) BOOL enable;
@property (nonatomic) double interval;
- (void)resetToMiddle;
- (void)resetToMiddelNeedLayout:;
- (double)cellWidthWithScrollView:;
- (double)sectionInsetCausedOffset;
- (void)p_scrollViewDidEndScrolling:;
- (BOOL)enable;
- (double)interval;
- (id)collectionView;
- (id)init;
- (void)setInterval:;
- (void)setCollectionView:;
- (void)setListModel:;
- (void)scrollViewWillBeginDragging:;
- (void)scrollViewDidEndDecelerating:;
- (id)listModel;
- (void).cxx_destruct;
- (void)scrollViewDidEndDragging:willDecelerate:;
- (void)scrollViewDidEndScrollingAnimation:;
- (void)setEnable:;
- (void)stop;
- (void)start;
- (void)scrollToNext;
@end
