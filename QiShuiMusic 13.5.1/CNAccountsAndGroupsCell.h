@interface CNAccountsAndGroupsCell : UICollectionViewListCell
@property (nonatomic) CNAccountsAndGroupsCellTextView titleTextView;
@property (nonatomic) double titleTextViewHeight;
@property (nonatomic) CNAccountsAndGroupsItem item;
@property (nonatomic) <CNAccountsAndGroupsCellDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)item;
- (id)preferredLayoutAttributesFittingAttributes:;
- (void)setDelegate:;
- (void)prepareForReuse;
- (void)setItem:;
- (void)prepareForDisplay;
- (id)delegate;
- (void).cxx_destruct;
- (void)textViewDidBeginEditing:;
- (BOOL)textViewShouldBeginEditing:;
- (void)textViewDidEndEditing:;
- (void)textViewDidChange:;
- (BOOL)textView:shouldChangeTextInRange:replacementText:;
- (void)setupTextViewConstraints;
- (void)resetTextFieldEnabled;
- (void)setTextViewEnabled:;
- (id)titleTextView;
- (double)requiredHeightForTextView:fittingWidth:;
- (void)applyTextViewPlaceholderIfNeeded;
- (void)applyTextColor:;
- (void)applyTextViewTintColor:;
- (void)applyAccessoryTintColor:;
- (void)beginEditingName;
- (void)endEditingName;
- (BOOL)isCellEditing;
- (BOOL)isValidTitle:;
- (void)setTitleTextView:;
- (double)titleTextViewHeight;
- (void)setTitleTextViewHeight:;
@end
