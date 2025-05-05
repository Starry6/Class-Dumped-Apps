@interface BDXLynxSwiperTransformLayout : UICollectionViewFlowLayout
@property (nonatomic) BOOL applyTransformToAttributesDelegate;
@property (nonatomic) BDXLynxSwiperViewLayout layout;
@property (nonatomic) <BDXLynxSwiperTransformLayoutDelegate> delegate;
- (void)applyCoverflowTransformToAttributes:;
- (void)applyCoverflowTransformToAttributes:angle:alpha:;
- (void)applyLinearTransformToAttributes:;
- (void)applyLinearTransformToAttributes:scaleX:scaleY:alpha:;
- (void)applyLinearTransformToAttributes:translateX:translateY:scaleX:scaleY:alpha:;
- (void)applyTransformToAttributes:layoutType:;
- (BOOL)applyTransformToAttributesDelegate;
- (unsigned long long)directionWithCenter:size:;
- (void)initializeTransformAttributes:layoutType:;
- (void)setApplyTransformToAttributesDelegate:;
- (id)layoutAttributesForElementsInRect:;
- (id)init;
- (id)layoutAttributesForItemAtIndexPath:;
- (void)setDelegate:;
- (void)setLayout:;
- (BOOL)shouldInvalidateLayoutForBoundsChange:;
- (id)layout;
- (id)delegate;
- (id)itemSize;
- (void).cxx_destruct;
- (long long)developmentLayoutDirection;
- (double)minimumLineSpacing;
- (double)minimumInteritemSpacing;
- (BOOL)flipsHorizontallyInOppositeLayoutDirection;
@end
