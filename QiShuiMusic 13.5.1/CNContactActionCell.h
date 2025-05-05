@interface CNContactActionCell : CNLabeledCell
@property (nonatomic) UILabel label;
@property (nonatomic) CNTransportButton transportIcon;
@property (nonatomic) CNCardActionGroupItem actionGroupItem;
@property (nonatomic) CNContactAction action;
- (id)labelView;
- (id)action;
- (void)setLabel:;
- (id)label;
- (void)tintColorDidChange;
- (void).cxx_destruct;
- (id)rightMostView;
- (void)setLabelTextAttributes:;
- (void)setCardGroupItem:;
- (id)variableConstraints;
- (double)minCellHeight;
- (BOOL)shouldPerformDefaultAction;
- (id)actionGroupItem;
- (id)transportIcon;
- (void)setTransportIcon:;
+ (BOOL)shouldIndentWhileEditing;
@end
