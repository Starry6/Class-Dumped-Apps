@interface IESECCollectionViewLayoutInvalidationContext : UICollectionViewLayoutInvalidationContext
@property (nonatomic) BOOL sizeChanged;
@property (nonatomic) BOOL originChanged;
- (void)setSizeChanged:;
- (BOOL)originChanged;
- (void)setOriginChanged:;
- (id)init;
- (BOOL)invalidateEverything;
- (BOOL)sizeChanged;
@end
