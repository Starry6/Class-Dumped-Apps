@interface CNPropertyAlertEditingCell : CNPropertyAlertCell
- (id)variableConstraints;
- (double)minCellHeight;
- (BOOL)allowsCellSelection;
+ (BOOL)wantsHorizontalLayout;
@end
