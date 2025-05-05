@interface BDXPagerListRefreshView : BDXPagerView
@property (nonatomic) double lastScrollingListViewContentOffsetY;
- (id)initWithDelegate:listContainerType:;
- (double)lastScrollingListViewContentOffsetY;
- (void)preferredProcessListViewDidScroll:;
- (void)preferredProcessMainTableViewDidScroll:;
- (void)setLastScrollingListViewContentOffsetY:;
@end
