@interface AWEIMMessageVisibleLifeCycleInteractor : AWEIMComponentBase
@property (nonatomic) NSMutableDictionary visibleCellPool;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentDidMounted:;
- (void)setVisibleCellPool:;
- (id)visibleCellPool;
- (id)init;
- (void)tableView:willDisplayCell:forRowAtIndexPath:;
- (void).cxx_destruct;
- (void)tableView:didEndDisplayingCell:forRowAtIndexPath:;
+ (BOOL)canCreateComponentWithContext:;
+ (BOOL)enableWithCon:;
@end
