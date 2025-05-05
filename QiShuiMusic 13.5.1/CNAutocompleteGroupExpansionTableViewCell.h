@interface CNAutocompleteGroupExpansionTableViewCell : CNComposeRecipientTableViewCell
- (id)initWithStyle:reuseIdentifier:;
- (BOOL)canCollapseRecipient;
- (double)leadingInsetsFromCurrentMargins:;
- (BOOL)canExpandRecipient;
+ (id)identifier;
@end
