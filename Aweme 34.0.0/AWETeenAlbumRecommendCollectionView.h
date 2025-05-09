@interface AWETeenAlbumRecommendCollectionView : UICollectionView
@property (nonatomic) AWETeenAlbumDataController dataController;
@property (nonatomic) q maximumLinesOfItemTitle;
@property (nonatomic) BOOL isScrollAtBottom;
@property (nonatomic) UILabel headerLabel;
@property (nonatomic) UILabel footerLabel;
@property (nonatomic) AWETeenExtraParamModel extra;
@property (nonatomic) BOOL shouldRespondToScroll;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setExtra:;
- (double)collectionView:layout:heightForHeaderInSection:;
- (id)collectionView:layout:insetForHeaderInSection:;
- (double)collectionView:layout:heightForFooterInSection:;
- (id)collectionView:layout:insetForFooterInSection:;
- (void)setDataController:;
- (void)p_setupBind;
- (void)p_updateBottomMask;
- (void)setMaximumLinesOfItemTitle:;
- (void)setShouldRespondToScroll:;
- (long long)maximumLinesOfItemTitle;
- (BOOL)shouldRespondToScroll;
- (void)setIsScrollAtBottom:;
- (id)initWithDataController:extra:;
- (BOOL)isScrollAtBottom;
- (id)collectionView:layout:insetForSectionAtIndex:;
- (id)collectionView:viewForSupplementaryElementOfKind:atIndexPath:;
- (id)collectionView:cellForItemAtIndexPath:;
- (id)extra;
- (BOOL)gestureRecognizerShouldBegin:;
- (void)collectionView:willDisplayCell:forItemAtIndexPath:;
- (void)scrollViewDidScroll:;
- (void)collectionView:didSelectItemAtIndexPath:;
- (void)scrollViewWillBeginDragging:;
- (void).cxx_destruct;
- (long long)collectionView:numberOfItemsInSection:;
- (id)collectionView:layout:sizeForItemAtIndexPath:;
- (void)setHeaderLabel:;
- (id)headerLabel;
- (id)dataController;
- (void)setFooterLabel:;
- (id)footerLabel;
@end
