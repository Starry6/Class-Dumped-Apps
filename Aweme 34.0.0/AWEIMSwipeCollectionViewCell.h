@interface AWEIMSwipeCollectionViewCell : UICollectionViewCell
@property (nonatomic) AWEIMSwipeController swipeController;
@property (nonatomic) UICollectionView collectionView;
@property (nonatomic) BOOL isPreviouslySelected;
@property (nonatomic) <AWEIMSwipeCollectionViewCellDelegate> swipeCollectionViewCelldelegate;
@property (nonatomic) q swipeState;
@property (nonatomic) AWEIMSwipeActionsView swipeActionsView;
@property (nonatomic) NSIndexPath indexPath;
@property (nonatomic) UIScrollView scrollView;
@property (nonatomic) UIPanGestureRecognizer panGestureRecognizer;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} frame;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)__reset;
- (void)setSwipeCollectionViewCelldelegate:;
- (id)swipeCollectionViewCelldelegate;
- (long long)swipeState;
- (id)swipeActionsView;
- (BOOL)performAccessibilityCustomAction:;
- (void)hideSwipeWithAnimated:complation:;
- (void)showSwipeWithOrientation:animated:complation:;
- (void)setOffset:animated:completion:;
- (void)__handleCollectionPanGesture:;
- (void)__resetSelectedState;
- (BOOL)isPreviouslySelected;
- (BOOL)__containsPoint:;
- (void)setIsPreviouslySelected:;
- (void)setSwipeState:;
- (void)setSwipeActionsView:;
- (BOOL)swipeController:canBeginEditingSwipeableForOrientation:forGesture:;
- (id)swipeController:editActionsForSwipeableForForOrientation:;
- (id)swipeController:editActionsOptionsForSwipeableForOrientation:;
- (void)swipeController:willBeginEditingSwipeableForOrientation:;
- (void)swipeController:didEndEditingSwipeableForOrientation:;
- (void)swipeController:didDeleteSwipeableAtIndexPath:;
- (void)checkAndFixClips;
- (void)configure;
- (id)collectionView;
- (void)setScrollView:;
- (void)dealloc;
- (id)accessibilityCustomActions;
- (BOOL)pointInside:withEvent:;
- (id)indexPath;
- (void)prepareForReuse;
- (void)setSwipeController:;
- (BOOL)isHighlighted;
- (id)initWithFrame:;
- (BOOL)gestureRecognizerShouldBegin:;
- (void)setCollectionView:;
- (id)scrollView;
- (void)setIndexPath:;
- (void)setHighlighted:;
- (void)didMoveToSuperview;
- (void)setPanGestureRecognizer:;
- (void)willMoveToWindow:;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:;
- (id)hitTest:withEvent:;
- (id)panGestureRecognizer;
- (id)swipeController;
- (id)accessibilityElementAtIndex:;
- (long long)accessibilityElementCount;
- (long long)indexOfAccessibilityElement:;
@end
