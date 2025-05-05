@interface CNLinkedCardsCell : CNLabeledCell
@property (nonatomic) UILabel sourceLabel;
@property (nonatomic) UILabel nameLabel;
@property (nonatomic) <CNPropertyCellDelegate> delegate;
- (id)labelView;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (void)updateConstraints;
- (id)nameLabel;
- (id)valueView;
- (void)setCardGroupItem:;
- (BOOL)shouldPerformDefaultAction;
- (void)performDefaultAction;
- (id)sourceLabel;
+ (BOOL)wantsChevron;
@end
