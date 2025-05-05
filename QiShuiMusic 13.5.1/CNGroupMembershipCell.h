@interface CNGroupMembershipCell : CNLabeledCell
@property (nonatomic) UILabel parentGroupNameLabel;
@property (nonatomic) <CNPropertyCellDelegate> delegate;
- (id)labelView;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)setCardGroupItem:;
- (BOOL)allowsCellSelection;
- (id)parentGroupNameLabel;
+ (BOOL)wantsHorizontalLayout;
@end
