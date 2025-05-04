@interface AWENaviCategoryNotificationCenter : NSObject
@property (nonatomic) NSMutableArray observers;
- (void)addObserver:categoryKeys:;
- (BOOL)notifyCategory:changeEffect:byViewModel:targetCategoryKey:;
- (BOOL)notifyCategory:changeInspiration:byViewModel:targetCategoryKey:;
- (void)notifyCategory:changeColor:byViewModel:targetCategoryKey:;
- (void)notifyCategory:willApplyCollection:;
- (void)notifyCategory:didApplyCollection:;
- (void)notifyCategory:applyOrphanEffect:;
- (void)notifyCategory:applyOrphanInspiration:;
- (void)notifyClickCategory:data:;
- (id)init;
- (void)removeObserver:;
- (id)observers;
- (void).cxx_destruct;
- (void)setObservers:;
@end
