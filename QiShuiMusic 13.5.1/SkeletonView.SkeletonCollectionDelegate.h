@interface SkeletonView.SkeletonCollectionDelegate : NSObject
- (id)tableView:viewForHeaderInSection:;
- (void)tableView:didEndDisplayingCell:forRowAtIndexPath:;
- (void)tableView:didEndDisplayingHeaderView:forSection:;
- (void)tableView:didEndDisplayingFooterView:forSection:;
- (id)tableView:viewForFooterInSection:;
- (id)init;
- (void).cxx_destruct;
@end
