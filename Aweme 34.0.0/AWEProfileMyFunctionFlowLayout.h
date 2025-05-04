@interface AWEProfileMyFunctionFlowLayout : UICollectionViewFlowLayout
- (id)attributesArray:inSection:;
- (id)additionalAttributesArray:;
- (void)refreshAttributes:;
- (BOOL)isAdditionalItem:;
- (id)layoutAttributesForElementsInRect:;
@end
