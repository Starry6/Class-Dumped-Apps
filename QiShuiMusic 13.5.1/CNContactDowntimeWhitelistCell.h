@interface CNContactDowntimeWhitelistCell : CNContactCell
- (id)initWithStyle:reuseIdentifier:;
- (void)setSelected:animated:;
- (void)setHighlighted:animated:;
- (BOOL)canPerformAction:withSender:;
+ (BOOL)shouldIndentWhileEditing;
@end
