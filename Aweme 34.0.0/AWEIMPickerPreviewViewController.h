@interface AWEIMPickerPreviewViewController : AWEIMComponentViewController
@property (nonatomic) AWEIMPickerPreivewConfigration configuration;
@property (nonatomic) AWEIMComponentContext componentContext;
@property (nonatomic) UICollectionView collectionView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (double)zoomTransitionTargetViewCornerRadius;
- (BOOL)zoomTransitionWantsOptAnimation;
- (id)zoomTransitionEndView;
- (unsigned long long)zoomTransitionAllowedTriggerDirection;
- (BOOL)zoomTransitionWantsRemoveSpringAnimation;
- (id)componentContext;
- (id)componentsNameArrayWithContext:;
- (void)setComponentContext:;
- (long long)currentSelectIndex;
- (double)mediaDetailTransitionAnimationDuration;
- (BOOL)isWrapperByContainerVC;
- (id)collectionView;
- (void)setConfiguration:;
- (void)viewDidLoad;
- (id)initWithConfiguration:;
- (void)setCollectionView:;
- (void)loadView;
- (void).cxx_destruct;
- (id)configuration;
@end
