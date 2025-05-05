@interface RxCollectionViewLayoutInvalidationContext : UICollectionViewLayoutInvalidationContext
@property (nonatomic) q intent;
@property (nonatomic) BOOL invalidateEverything;
@property (nonatomic) BOOL invalidateDataSourceCounts;
- (id)initWithCollectionViewLayoutInvalidationContext:;
- (long long)intent;
- (id)init;
- (id)description;
- (void)setIntent:;
- (BOOL)invalidateDataSourceCounts;
- (BOOL)invalidateEverything;
- (long long)_intent;
- (void)_setIntent:;
- (void)setInvalidateEverything:;
- (void)setInvalidateDataSourceCounts:;
+ (id)withContext:;
@end
