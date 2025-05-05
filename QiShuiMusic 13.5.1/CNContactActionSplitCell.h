@interface CNContactActionSplitCell : CNLabeledCell
@property (nonatomic) UIButton leftLabel;
@property (nonatomic) UIButton rightLabel;
- (id)initWithStyle:reuseIdentifier:;
- (id)labelView;
- (void).cxx_destruct;
- (id)rightMostView;
- (void)setLabelTextAttributes:;
- (void)setCardGroupItem:;
- (double)minCellHeight;
- (id)constantConstraints;
- (id)standardButton;
- (void)_setupButton:forAction:;
- (id)leftLabel;
- (id)rightLabel;
@end
