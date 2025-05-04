@interface AWELeftSideBarIndentBannerCell : UIView
@property (nonatomic) UIView containerView;
@property (nonatomic) DUXButton closeButton;
@property (nonatomic) AWELeftSideBarItemModel itemModel;
@property (nonatomic) <AWELeftSideBarIndentBannerCellDelegate> delegate;
- (void)clickCloseButton;
- (id)itemModel;
- (void)setItemModel:;
- (BOOL)checkTouchView:point:;
- (void)setItemModel:containerView:;
- (id)delegate;
- (id)containerView;
- (void)setContainerView:;
- (void).cxx_destruct;
- (id)hitTest:withEvent:;
- (void)setDelegate:;
- (void)setCloseButton:;
- (id)closeButton;
@end
