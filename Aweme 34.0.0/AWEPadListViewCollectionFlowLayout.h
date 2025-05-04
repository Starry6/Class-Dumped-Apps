@interface AWEPadListViewCollectionFlowLayout : UICollectionViewFlowLayout
@property (nonatomic) NSMutableArray decorationViewAttrs;
@property (nonatomic) <AWEPadListViewCollectionViewLayoutDelegate> layoutDelegate;
- (void)setDecorationViewAttrs:;
- (id)decorationViewAttrs;
- (id)calculateOriginalFrameWithSectionFrame:sectionInset:contentInset:headerSize:;
- (void)prepareLayout;
- (id)layoutAttributesForDecorationViewOfKind:atIndexPath:;
- (id)layoutAttributesForElementsInRect:;
- (id)init;
- (void)setLayoutDelegate:;
- (void)setup;
- (id)layoutDelegate;
- (void)invalidateLayout;
- (void).cxx_destruct;
@end
