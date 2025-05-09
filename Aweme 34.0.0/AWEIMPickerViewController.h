@interface AWEIMPickerViewController : AWEIMComponentViewController
@property (nonatomic) AWEIMPickerContext componentContext;
@property (nonatomic) AWEIMPickerConfiguration configuration;
@property (nonatomic) UIScrollView contentScrollView;
@property (nonatomic) UICollectionView currentDisplayCollectionView;
@property (nonatomic) UIView transitionBeginView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)zoomTransitionStartViewForOffset:;
- (double)zoomTransitionTargetViewCornerRadius;
- (id)mediaDetailTransitionStartView;
- (id)componentContext;
- (id)componentsNameArrayWithContext:;
- (void)setComponentContext:;
- (long long)currentSelectIndex;
- (long long)getIndexOfTagetCellInTransitionBackToPicker;
- (id)currentDisplayCollectionView;
- (id)transitionBeginView;
- (id)currentCollectionView;
- (void)setCurrentDisplayCollectionView:;
- (void)setTransitionBeginView:;
- (void)setConfiguration:;
- (void)viewDidLoad;
- (id)contentScrollView;
- (id)initWithConfiguration:;
- (void)loadView;
- (void).cxx_destruct;
- (id)configuration;
- (void)setContentScrollView:;
@end
