@interface UICollectionViewTableLayoutInvalidationContext : UICollectionViewLayoutInvalidationContext
@property (nonatomic) BOOL invalidateTableLayoutDelegateMetrics;
@property (nonatomic) BOOL skipSectionInvalidation;
- (void)setSkipSectionInvalidation:;
- (void)setInvalidateTableLayoutDelegateMetrics:;
- (BOOL)skipSectionInvalidation;
- (BOOL)invalidateTableLayoutDelegateMetrics;
@end
