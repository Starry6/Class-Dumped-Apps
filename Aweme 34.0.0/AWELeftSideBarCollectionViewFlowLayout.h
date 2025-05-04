@interface AWELeftSideBarCollectionViewFlowLayout : UICollectionViewFlowLayout
@property (nonatomic) NSMutableArray decorationViewAttrs;
@property (nonatomic) NSMutableArray positionItemViewAttrs;
- (void)setDecorationViewAttrs:;
- (void)setPositionItemViewAttrs:;
- (id)decorationViewAttrs;
- (id)positionItemViewAttrs;
- (id)calculateOriginalFrameWithSectionFrame:sectionInset:;
- (id)calculateBorderFrameWithSectionFrame:sectionInset:;
- (void)prepareLayout;
- (id)layoutAttributesForDecorationViewOfKind:atIndexPath:;
- (id)layoutAttributesForElementsInRect:;
- (id)init;
- (void)setup;
- (void).cxx_destruct;
@end
