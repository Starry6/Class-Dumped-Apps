@interface AWEProfileHeaderNameAreaSectionCell_New : UICollectionViewCell
@property (nonatomic) AWEProfileHeaderContext context;
@property (nonatomic) UIView containerView;
@property (nonatomic) <AWEProfileHeaderComponentContainerProtocol> componentTree;
@property (nonatomic) <AWEProfileHeaderNameAreaSectionCellDelegate_New> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentTree:changeBoundsToSize:;
- (void)componentContainer:changeBoundsToSize:;
- (void)profilePageDidVerticallyScrollWithOffset:;
- (void)profilePageEndVerticallyScrollWithOffset:;
- (void)updateTitleWithOffsetY:;
- (id)componentTree;
- (void)setComponentTree:;
- (void)configWithContext:componentTree:;
- (id)delegate;
- (id)initWithFrame:;
- (id)containerView;
- (void)setContainerView:;
- (void)setContext:;
- (void).cxx_destruct;
- (id)hitTest:withEvent:;
- (void)setDelegate:;
- (id)context;
- (void)setupUI;
@end
