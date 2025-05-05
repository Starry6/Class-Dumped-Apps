@interface IESECWinTabContainerCell : UICollectionViewCell
@property (nonatomic) IESECSlidingTabContainerView containerView;
@property (nonatomic) <IESECWinTabContainerCellContainerViewDelegate> cellContainerViewDelegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)bindObject:;
- (id)cellContainerViewDelegate;
- (long long)numberOfTabViewElementsInTabContainer:;
- (void)setCellContainerViewDelegate:;
- (void)tabContainer:cancelMoveToIndex:withTabElement:;
- (void)tabContainer:didMoveToIndex:withTabElement:;
- (id)tabContainer:tabViewElementForIndex:;
- (void)tabContainer:willMoveToIndex:withTabElement:;
- (id)containerView;
- (void)setContainerView:;
- (void)scrollViewDidEndDragging:willDecelerate:;
- (void).cxx_destruct;
- (void)setupUI;
@end
