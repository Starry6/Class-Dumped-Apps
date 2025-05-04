@interface AWEBaseListCollectionViewLongPressHandler : NSObject
@property (nonatomic) UIViewController<AWEBaseListViewControllerProtocol> viewController;
@property (nonatomic) AWEBaseListSectionController interactiveSectionController;
@property (nonatomic) double movementMinY;
@property (nonatomic) double movementMaxY;
- (BOOL)prepareForMovementWithIndexPath:collectionView:;
- (double)movementMaxY;
- (double)movementMinY;
- (void)setInteractiveSectionController:;
- (void)setMovementMinY:;
- (void)setMovementMaxY:;
- (id)interactiveSectionController;
- (id)viewController;
- (void)handleLongPress:;
- (void).cxx_destruct;
- (void)reset;
- (void)setViewController:;
+ (id)handlerWithViewController:;
@end
