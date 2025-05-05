@interface OBBulletedList : UIView
@property (nonatomic) NSMutableArray items;
@property (nonatomic) NSMutableArray verticalConstraints;
@property (nonatomic) NSLayoutConstraint leadingConstraint;
@property (nonatomic) NSLayoutConstraint trailingConstraint;
- (id)leadingConstraint;
- (void)setVerticalConstraints:;
- (void)setTrailingConstraint:;
- (void)layoutSubviews;
- (id)items;
- (id)initWithFrame:;
- (void)setLeadingConstraint:;
- (void)setItems:;
- (void)_updateConstraints;
- (void).cxx_destruct;
- (void)didMoveToWindow;
- (id)trailingConstraint;
- (id)verticalConstraints;
- (BOOL)_shouldHandleLandscapeiPhoneLayout;
- (double)bulletedListItemSpacing;
- (void)addItemWithTitle:description:image:tintColor:;
- (void)addItemWithTitle:description:image:tintColor:linkButton:;
- (void)addItemWithTitle:description:image:;
- (void)addItemWithTitle:description:image:linkButton:;
- (void)addItemWithDescription:image:;
- (void)addBulletedListItem:;
- (void)_updatePaddingForOrientation;
@end
