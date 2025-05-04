@interface AWETirpHeaderFlowLayout : UICollectionViewFlowLayout
@property (nonatomic) double defaultItemWidth;
@property (nonatomic) double factItemSpace;
@property (nonatomic) Q style;
@property (nonatomic) double itemSpace_H;
@property (nonatomic) double itemWidth;
@property (nonatomic) double minScale;
@property (nonatomic) double maxScale;
- (void)setItemSpace_H:;
- (double)itemSpace_H;
- (double)defaultItemWidth;
- (void)setFactItemSpace:;
- (double)factItemSpace;
- (void)setDefaultItemWidth:;
- (double)maxScale;
- (void)prepareLayout;
- (BOOL)shouldInvalidateLayoutForBoundsChange:;
- (id)layoutAttributesForElementsInRect:;
- (void)setItemWidth:;
- (double)itemWidth;
- (double)minScale;
- (unsigned long long)style;
- (void)initial;
- (id)initWithStyle:;
- (void)setMaxScale:;
- (void)setStyle:;
- (id)targetContentOffsetForProposedContentOffset:withScrollingVelocity:;
- (void)setMinScale:;
@end
