@interface PSTimeRangeCell : PSTableCell
- (void)layoutSubviews;
- (id)initWithStyle:reuseIdentifier:specifier:;
- (void).cxx_destruct;
- (void)updateConstraints;
- (id)regularConstraintsWithVariableBindings:metrics:;
- (id)accessibilityConstraintsWithVariableBindings:metrics:;
@end
