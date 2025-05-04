@interface AWECyclePagerTransformLayout : UICollectionViewFlowLayout
@property (nonatomic) BOOL applyTransformToAttributesDelegate;
@property (nonatomic) AWECyclePagerViewLayout layout;
@property (nonatomic) <AWECyclePagerTransformLayoutDelegate> delegate;
- (void)applyLinearTransformToAttributes:scale:alpha:;
- (void)applyLinearTransformToAttributes:;
- (unsigned long long)directionWithCenterX:;
- (BOOL)applyTransformToAttributesDelegate;
- (void)setApplyTransformToAttributesDelegate:;
- (void)applyTransformToAttributes:layoutType:;
- (void)initializeTransformAttributes:layoutType:;
- (unsigned long long)directionWithCenterY:;
- (BOOL)shouldInvalidateLayoutForBoundsChange:;
- (id)layoutAttributesForItemAtIndexPath:;
- (id)layoutAttributesForElementsInRect:;
- (id)init;
- (id)delegate;
- (void)setLayout:;
- (id)layout;
- (void).cxx_destruct;
- (void)setDelegate:;
- (id)initWithCoder:;
- (id)itemSize;
- (double)minimumInteritemSpacing;
- (double)minimumLineSpacing;
@end
