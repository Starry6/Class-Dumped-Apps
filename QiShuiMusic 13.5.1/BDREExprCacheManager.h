@interface BDREExprCacheManager : NSObject
@property (nonatomic) NSCache exprCache;
- (void)addCache:forExpr:;
- (id)exprCache;
- (id)findCacheForExpr:;
- (void)setExprCache:;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedManager;
@end
