@interface IGListCollectionViewLayoutInvalidationContext : UICollectionViewLayoutInvalidationContext
@property (nonatomic) BOOL ig_invalidateSupplementaryAttributes;
@property (nonatomic) BOOL ig_invalidateAllAttributes;
- (BOOL)ig_invalidateAllAttributes;
- (BOOL)ig_invalidateSupplementaryAttributes;
- (void)setIg_invalidateAllAttributes:;
- (void)setIg_invalidateSupplementaryAttributes:;
@end
