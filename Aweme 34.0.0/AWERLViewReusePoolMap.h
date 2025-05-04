@interface AWERLViewReusePoolMap : NSObject
@property (nonatomic) NSMutableDictionary pools;
@property (nonatomic) NSMutableArray vendedViews;
@property (nonatomic) NSHashTable oldSelfHostViews;
@property (nonatomic) NSHashTable youngSelfHostViews;
- (id)youngSelfHostViews;
- (id)oldSelfHostViews;
- (void)setOldSelfHostViews:;
- (id)pools;
- (id)vendedViews;
- (void)__resetSelfHostView;
- (void)refreshSelfHostView:;
- (void)reset:animator:;
- (id)viewForVirtualNodeClass:props:containerView:;
- (void)setPools:;
- (void)setVendedViews:;
- (void)setYoungSelfHostViews:;
- (id)init;
- (void).cxx_destruct;
+ (id)mapForView:;
@end
