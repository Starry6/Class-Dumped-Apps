@interface Lego.TableBasicVM : NSObject
- (void)scrollViewDidEndZooming:withView:atScale:;
- (void)scrollViewDidEndDecelerating:;
- (id)viewForZoomingInScrollView:;
- (void)scrollViewWillBeginDecelerating:;
- (void)scrollViewDidScroll:;
- (void)scrollViewWillBeginDragging:;
- (BOOL)scrollViewShouldScrollToTop:;
- (void)scrollViewWillBeginZooming:withView:;
- (void)scrollViewDidEndDragging:willDecelerate:;
- (void)scrollViewWillEndDragging:withVelocity:targetContentOffset:;
- (void)scrollViewDidEndScrollingAnimation:;
- (void)scrollViewDidZoom:;
- (void)scrollViewDidChangeAdjustedContentInset:;
- (void)scrollViewDidScrollToTop:;
- (BOOL)tableView:shouldHighlightRowAtIndexPath:;
- (double)tableView:heightForRowAtIndexPath:;
- (id)tableView:viewForHeaderInSection:;
- (id)sectionIndexTitlesForTableView:;
- (void)tableView:didSelectRowAtIndexPath:;
- (long long)tableView:sectionForSectionIndexTitle:atIndex:;
- (double)tableView:heightForHeaderInSection:;
- (BOOL)tableView:canEditRowAtIndexPath:;
- (BOOL)tableView:canMoveRowAtIndexPath:;
- (void)tableView:moveRowAtIndexPath:toIndexPath:;
- (double)tableView:heightForFooterInSection:;
- (id)tableView:viewForFooterInSection:;
- (void)tableView:didDeselectRowAtIndexPath:;
- (long long)tableView:editingStyleForRowAtIndexPath:;
- (id)tableView:editActionsForRowAtIndexPath:;
- (BOOL)tableView:shouldIndentWhileEditingRowAtIndexPath:;
- (id)tableView:cellForRowAtIndexPath:;
- (void)tableView:didEndDisplayingCell:forRowAtIndexPath:;
- (id)tableView:titleForHeaderInSection:;
- (void)tableView:willDisplayCell:forRowAtIndexPath:;
- (long long)tableView:numberOfRowsInSection:;
- (long long)numberOfSectionsInTableView:;
- (id)tableView:titleForFooterInSection:;
- (id)init;
- (void).cxx_destruct;
@end
