@interface AWEECOMIMMessageVisibleLifeCycleInteractor : NSObject
@property (nonatomic) NSMutableDictionary visibleCellPool;
- (void)tableView:willDisplayCell:forRowAtIndexPath:msgModel:;
- (void)tableView:didEndDisplayingCell:forRowAtIndexPath:msgModel:;
- (void)setVisibleCellPool:;
- (id)visibleCellPool;
- (id)init;
- (void).cxx_destruct;
@end
