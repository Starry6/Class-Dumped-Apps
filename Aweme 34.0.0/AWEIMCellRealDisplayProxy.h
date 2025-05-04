@interface AWEIMCellRealDisplayProxy : NSObject
@property (nonatomic) NSPointerArray waitDisplayCells_up;
@property (nonatomic) NSPointerArray waitDisplayCells_down;
@property (nonatomic) double lastOffset;
@property (nonatomic) double visiableMaxY;
@property (nonatomic) double visiableMinY;
@property (nonatomic) <AWEIMCellRealDisplayProxyDelegate> delegate;
- (void)tableView:didEndDisplayingCell:;
- (void)tableView:contentDidOffset:;
- (void)setVisiableMaxY:;
- (void)setVisiableMinY:;
- (id)waitDisplayCells_down;
- (id)waitDisplayCells_up;
- (long long)p_cellRealVisiableStatus:inView:;
- (double)visiableMaxY;
- (double)visiableMinY;
- (void)clearWaitDisplayCell;
- (void)setWaitDisplayCells_up:;
- (void)setWaitDisplayCells_down:;
- (id)delegate;
- (void)tableView:willDisplayCell:forRowAtIndexPath:;
- (void).cxx_destruct;
- (void)setDelegate:;
- (double)lastOffset;
- (void)setLastOffset:;
@end
