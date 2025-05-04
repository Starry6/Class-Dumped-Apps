@interface AWEPOIWaterfallCollectionViewLayout : AWEWaterfallCollectionViewLayout
@property (nonatomic) NSMutableDictionary backgroundDecorationViewAttributes;
- (id)backgroundDecorationViewAttributes;
- (void)setBackgroundDecorationViewAttributes:;
- (void)prepareLayout;
- (id)layoutAttributesForDecorationViewOfKind:atIndexPath:;
- (id)layoutAttributesForElementsInRect:;
- (id)init;
- (void).cxx_destruct;
@end
