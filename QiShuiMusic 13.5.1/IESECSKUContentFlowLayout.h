@interface IESECSKUContentFlowLayout : UICollectionViewFlowLayout
@property (nonatomic) NSArray layoutAttributes;
@property (nonatomic) NSArray sectionLayoutAtrributes;
@property (nonatomic) BOOL newStyle;
- (BOOL)newStyle;
- (id)sectionLayoutAtrributes;
- (void)setNewStyle:;
- (void)setSectionLayoutAtrributes:;
- (id)layoutAttributesForElementsInRect:;
- (id)init;
- (id)layoutAttributesForDecorationViewOfKind:atIndexPath:;
- (void)prepareLayout;
- (void)setLayoutAttributes:;
- (void).cxx_destruct;
- (id)layoutAttributes;
@end
