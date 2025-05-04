@interface AWESearchDiscussTabCardView : AWESearchCachalotBaseCardView
@property (nonatomic) UIView containerView;
@property (nonatomic) UICollectionView collectionView;
@property (nonatomic) AWESearchDiscussTabCardViewModel viewModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentStickyStatusChange:;
- (void)componentClicked;
- (void)componentWillDisplay;
- (void)stickyStatusDidChangeFrom:to:;
- (void)forceUnsticky;
- (id)collectionView;
- (id)viewModel;
- (id)initWithFrame:;
- (void)setup;
- (id)containerView;
- (void)refreshUI;
- (void)setCollectionView:;
- (void)setContainerView:;
- (void)setViewModel:;
- (void).cxx_destruct;
- (id)componentView;
- (void)updateWithViewModel:;
+ (id)sizeWithViewModel:width:;
@end
