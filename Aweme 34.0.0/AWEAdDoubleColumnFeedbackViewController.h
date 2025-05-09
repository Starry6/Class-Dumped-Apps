@interface AWEAdDoubleColumnFeedbackViewController : UIViewController
@property (nonatomic) {CGPoint=dd} touchLocation;
@property (nonatomic) Q positionType;
@property (nonatomic) AWEAdDoubleColumnFeedbackViewModel<AWEAdDoubleColumnFeedbackVMProtocol> viewModel;
@property (nonatomic) UIView containerView;
@property (nonatomic) UIView panelView;
@property (nonatomic) UICollectionView collectionView;
@property (nonatomic) UIView dotView;
@property (nonatomic) UIView innerDotView;
@property (nonatomic) UIImageView arrowImageView;
@property (nonatomic) UIButton closeButton;
@property (nonatomic) UICollectionViewFlowLayout flowLayout;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)trackShowEvent;
- (void)setPositionType:;
- (id)panelView;
- (void)setPanelView:;
- (id)initWithLocation:viewModel:;
- (void)setTouchLocation:;
- (void)addGestureRecognizer;
- (void)playPresentAnimation;
- (void)triggerImpactFeedback;
- (void)adjustUI;
- (void)handleTapEvent:;
- (void)dismissWithAnimationForCellIndexPath:;
- (Class)headerClass;
- (id)innerDotView;
- (void)setInnerDotView:;
- (id)collectionView:layout:referenceSizeForHeaderInSection:;
- (id)collectionView;
- (id)collectionView:viewForSupplementaryElementOfKind:atIndexPath:;
- (id)collectionView:cellForItemAtIndexPath:;
- (long long)numberOfSectionsInCollectionView:;
- (id)viewModel;
- (void)viewDidLoad;
- (id)containerView;
- (Class)collectionViewCellClass;
- (void)collectionView:willDisplayCell:forItemAtIndexPath:;
- (void)setCollectionView:;
- (void)setContainerView:;
- (void)setViewModel:;
- (void).cxx_destruct;
- (long long)collectionView:numberOfItemsInSection:;
- (id)collectionView:layout:sizeForItemAtIndexPath:;
- (void)viewDidAppear:;
- (id)dotView;
- (id)flowLayout;
- (void)setDotView:;
- (void)setFlowLayout:;
- (id)touchLocation;
- (void)setupUI;
- (void)setCloseButton:;
- (id)closeButton;
- (void)closeButtonPressed:;
- (unsigned long long)positionType;
- (id)arrowImageView;
- (void)setArrowImageView:;
+ (id)creatWithModel:location:feedbackBlock:;
@end
