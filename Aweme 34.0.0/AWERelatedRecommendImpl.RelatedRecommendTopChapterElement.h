@interface AWERelatedRecommendImpl.RelatedRecommendTopChapterElement : AWERelatedRecommendTopBaseElement
@property (nonatomic) double height;
@property (nonatomic) double bottomSpacing;
- (id)getCurrentPlayedTime;
- (void)jumpToSelectedChapter:;
- (id)collectionView:layout:sizeForItemAtIndexPath:;
- (void)scrollViewDidScroll:;
- (void)collectionView:didSelectItemAtIndexPath:;
- (void)scrollViewWillBeginDragging:;
- (void)scrollViewDidEndDragging:willDecelerate:;
- (id)collectionView:cellForItemAtIndexPath:;
- (long long)numberOfSectionsInCollectionView:;
- (long long)collectionView:numberOfItemsInSection:;
- (id)horizontalGestureRecognizers;
- (void)handleClickedChapterAllButton;
- (id)init;
- (BOOL)validate;
- (id)initWithDataModel:;
- (void).cxx_destruct;
- (double)height;
- (double)bottomSpacing;
+ (long long)type;
@end
