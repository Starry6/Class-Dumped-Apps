@interface AWERLViewReusePoolManager : NSObject
@property (nonatomic) UIView view;
@property (nonatomic) NSMutableDictionary pools;
@property (nonatomic) NSMutableArray vendedViews;
@property (nonatomic) NSHashTable oldAgeViews;
@property (nonatomic) NSHashTable youngAgeViews;
@property (nonatomic) BOOL reseted;
- (id)pools;
- (id)vendedViews;
- (void)setPools:;
- (void)setVendedViews:;
- (void)setReseted:;
- (BOOL)reseted;
- (void)__purgeMarkedView;
- (id)oldAgeViews;
- (id)youngAgeViews;
- (void)setOldAgeViews:;
- (id)viewForKey:creator:;
- (void)markViewMounted:;
- (void)setYoungAgeViews:;
- (id)init;
- (id)view;
- (void)setView:;
- (void).cxx_destruct;
- (void)reset;
+ (id)managerForView:;
@end
