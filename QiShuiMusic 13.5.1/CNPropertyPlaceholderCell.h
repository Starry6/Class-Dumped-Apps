@interface CNPropertyPlaceholderCell : CNLabeledCell
@property (nonatomic) UILabel label;
- (id)labelView;
- (void)setLabel:;
- (id)label;
- (void).cxx_destruct;
- (void)setCardGroupItem:;
- (double)minCellHeight;
- (BOOL)shouldPerformDefaultAction;
+ (BOOL)shouldIndentWhileEditing;
@end
