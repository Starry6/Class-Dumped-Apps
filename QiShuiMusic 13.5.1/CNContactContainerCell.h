@interface CNContactContainerCell : CNLabeledCell
@property (nonatomic) UILabel accountLabel;
@property (nonatomic) UILabel accountNameLabel;
@property (nonatomic) <CNPropertyCellDelegate> delegate;
- (id)labelView;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (void)updateConstraints;
- (id)valueView;
- (void)setCardGroupItem:;
- (BOOL)shouldPerformDefaultAction;
- (void)performDefaultAction;
- (id)accountLabel;
- (id)accountNameLabel;
+ (BOOL)wantsChevron;
@end
