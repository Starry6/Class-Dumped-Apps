@interface IESECCommentNewSKUContentFlowLayout : UICollectionViewFlowLayout
@property (nonatomic) NSArray layoutAttributes;
@property (nonatomic) NSArray sectionLayoutAttributes;
- (id)sectionLayoutAttributes;
- (void)setSectionLayoutAttributes:;
- (id)layoutAttributesForElementsInRect:;
- (id)init;
- (id)layoutAttributesForDecorationViewOfKind:atIndexPath:;
- (void)prepareLayout;
- (void)setLayoutAttributes:;
- (void).cxx_destruct;
- (id)layoutAttributes;
@end
