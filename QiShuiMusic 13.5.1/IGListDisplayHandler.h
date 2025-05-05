@interface IGListDisplayHandler : NSObject
@property (nonatomic) NSMapTable visibleViewObjectMap;
@property (nonatomic) NSCountedSet visibleListSections;
- (void)_didEndDisplayingReusableView:forListAdapter:sectionController:object:indexPath:;
- (id)_pluckObjectForView:;
- (void)_willDisplayReusableView:forListAdapter:sectionController:object:indexPath:;
- (void)didEndDisplayingCell:forListAdapter:sectionController:indexPath:;
- (void)didEndDisplayingSupplementaryView:forListAdapter:sectionController:indexPath:;
- (void)setVisibleViewObjectMap:;
- (id)visibleListSections;
- (id)visibleViewObjectMap;
- (void)willDisplayCell:forListAdapter:sectionController:object:indexPath:;
- (void)willDisplaySupplementaryView:forListAdapter:sectionController:object:indexPath:;
- (id)init;
- (void).cxx_destruct;
@end
