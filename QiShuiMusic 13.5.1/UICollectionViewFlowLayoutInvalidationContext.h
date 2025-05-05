@interface UICollectionViewFlowLayoutInvalidationContext : UICollectionViewLayoutInvalidationContext
@property (nonatomic) BOOL invalidateFlowLayoutDelegateMetrics;
@property (nonatomic) BOOL invalidateFlowLayoutAttributes;
- (id)init;
- (void)setInvalidateFlowLayoutDelegateMetrics:;
- (BOOL)invalidateFlowLayoutDelegateMetrics;
- (BOOL)invalidateFlowLayoutAttributes;
- (void)setInvalidateFlowLayoutAttributes:;
@end
