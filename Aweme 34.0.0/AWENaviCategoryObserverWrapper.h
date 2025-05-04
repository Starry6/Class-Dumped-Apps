@interface AWENaviCategoryObserverWrapper : NSObject
@property (nonatomic) <AWENaviCategoryChangeObserver> target;
@property (nonatomic) NSArray filterKeys;
- (id)filterKeys;
- (void)setFilterKeys:;
- (id)target;
- (void)setTarget:;
- (void).cxx_destruct;
+ (id)observerWithTarget:keys:;
@end
