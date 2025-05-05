@interface AWEIMCellRealDisplayProxy : NSObject
@property (nonatomic) NSPointerArray waitDisplayCells_up;
@property (nonatomic) NSPointerArray waitDisplayCells_down;
@property (nonatomic) double lastOffset;
@property (nonatomic) double visiableMaxY;
@property (nonatomic) double visiableMinY;
@property (nonatomic) <AWEIMCellRealDisplayProxyDelegate> delegate;
- (void)tableView:didEndDisplayingCell:;
- (void)clearWaitDisplayCell;
- (long long)p_cellRealVisiableStatus:inView:;
- (void)setVisiableMaxY:;
- (void)setVisiableMinY:;
- (void)setWaitDisplayCells_down:;
- (void)setWaitDisplayCells_up:;
- (void)tableView:contentDidOffset:;
- (double)visiableMaxY;
- (double)visiableMinY;
- (id)waitDisplayCells_down;
- (id)waitDisplayCells_up;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (void)tableView:willDisplayCell:forRowAtIndexPath:;
- (double)lastOffset;
- (void)setLastOffset:;
@end
