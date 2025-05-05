@interface UISearchField : UITextField
- (id)initWithFrame:;
- (id)_placeholderColor;
- (BOOL)_shouldSendContentChangedNotificationsIfOnlyMarkedTextChanged;
- (id)rightViewRectForBounds:;
- (id)_availableTextRectExcludingButtonsForBounds:;
- (void)setPaddingTop:paddingLeft:;
- (id)iconRect;
+ (double)defaultHeight;
@end
