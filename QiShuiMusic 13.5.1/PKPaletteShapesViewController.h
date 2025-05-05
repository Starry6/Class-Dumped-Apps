@interface PKPaletteShapesViewController : UIViewController
@property (nonatomic) NSArray shapes;
@property (nonatomic) <PKPaletteShapesViewControllerDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)collectionView:numberOfItemsInSection:;
- (void)setDelegate:;
- (id)collectionView:cellForItemAtIndexPath:;
- (void)collectionView:didSelectItemAtIndexPath:;
- (id)delegate;
- (void).cxx_destruct;
- (void)loadView;
- (id)preferredContentSize;
- (id)shapes;
- (void)setShapes:;
@end
