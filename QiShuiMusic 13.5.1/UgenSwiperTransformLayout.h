@interface UgenSwiperTransformLayout : UICollectionViewFlowLayout
@property (nonatomic) BOOL applyTransformToAttributesDelegate;
@property (nonatomic) UgenSwiperViewLayout layout;
@property (nonatomic) <UgenSwiperTransformLayoutDelegate> delegate;
- (void)applyCardTransformToAttributes:;
- (void)applyCardTransformToAttributes:angle:alpha:;
- (void)applyCoverflowTransformToAttributes:;
- (void)applyCoverflowTransformToAttributes:angle:alpha:;
- (void)applyLinearTransformToAttributes:;
- (void)applyLinearTransformToAttributes:scale:alpha:;
- (void)applyTransformToAttributes:layoutType:;
- (BOOL)applyTransformToAttributesDelegate;
- (unsigned long long)directionWithCenterX:;
- (void)initializeTransformAttributes:layoutType:;
- (void)setApplyTransformToAttributesDelegate:;
- (id)layoutAttributesForElementsInRect:;
- (id)init;
- (id)layoutAttributesForItemAtIndexPath:;
- (void)setDelegate:;
- (void)setLayout:;
- (id)initWithCoder:;
- (BOOL)shouldInvalidateLayoutForBoundsChange:;
- (id)layout;
- (id)delegate;
- (id)itemSize;
- (void).cxx_destruct;
- (double)minimumLineSpacing;
- (double)minimumInteritemSpacing;
@end
