@interface AWELeftSideBarBaseCollectionViewCell : UICollectionViewCell
@property (nonatomic) UIView containerView;
@property (nonatomic) <AWELeftSideBarBaseCollectionViewCellDelegate> delegate;
@property (nonatomic) AWELeftSideBarItemModel itemModel;
- (id)itemModel;
- (void)setItemModel:;
- (BOOL)checkTouchView:point:;
- (void)p_remakeContainerView;
- (void)setDelegate:itemModel:;
- (void)updateDelegate:itemModel:;
- (id)delegate;
- (id)initWithFrame:;
- (id)containerView;
- (void)setContainerView:;
- (void).cxx_destruct;
- (id)hitTest:withEvent:;
- (void)setDelegate:;
@end
