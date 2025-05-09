@interface AWECommonFeedBaseSectionController : AWEBaseListSectionController
@property (nonatomic) BOOL isActive;
@property (nonatomic) AWECommonFeedAutoPlayHandler autoPlayHandler;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) AWECommonFeedSectionContext sectionContext;
@property (nonatomic) UICollectionView superCollectionView;
- (void)sectionControllerWillDisplay:;
- (void)sectionControllerDidEndDisplaying:;
- (id)liveTransitionContext;
- (void)configCell:index:model:;
- (void)sectionWillDisplayCell:index:model:;
- (Class)cellClassForModel:index:;
- (id)sizeForHeaderWithCollectionViewSize:;
- (id)sizeForItemAtIndex:model:collectionViewSize:;
- (void)sectionDidEndDisplayingCell:index:;
- (void)didBindSectionViewModel;
- (id)sizeForFooterWithCollectionViewSize:;
- (void)didSelectItemAtIndex:model:;
- (void)configSupplementaryHeaderView:;
- (void)sectionWillDisplaySupplementaryView:;
- (void)sectionDidEndDisplayingSupplementaryView:;
- (void)configSupplementaryFooterView:;
- (id)autoPlayHandler;
- (void)setAutoPlayHandler:;
- (id)activeViewFrame;
- (void)updateCellLayout;
- (double)quickScrollThreshold;
- (id)superCollectionView;
- (void)setSuperCollectionView:;
- (void)didBecomeActive;
- (BOOL)hasVideo;
- (id)init;
- (void)setIsActive:;
- (void)didResignActive;
- (id)transitionContext;
- (id)sectionContext;
- (void).cxx_destruct;
- (BOOL)isActive;
- (void)updateDisplay:;
- (void)setSectionContext:;
- (Class)footerViewClass;
- (Class)headerViewClass;
@end
