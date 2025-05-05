@interface IESLiveSaaSShortTouchItemCell : UICollectionViewCell
@property (nonatomic) IESLiveSaaSShortTouchItem item;
- (void)updateItem:isVertical:shouldTransform:;
- (id)item;
- (void)prepareForReuse;
- (void)setItem:;
- (void).cxx_destruct;
@end
