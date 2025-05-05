@interface SFAccountNoteTableViewCell : UITableViewCell
@property (nonatomic) UITextView textView;
@property (nonatomic) @? textDidChange;
@property (nonatomic) <SFAccountNoteTableViewCellDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithStyle:reuseIdentifier:;
- (id)textView;
- (void)setEditing:animated:;
- (void)setDelegate:;
- (id)textDidChange;
- (void)setTextView:;
- (id)delegate;
- (void).cxx_destruct;
- (void)textViewDidChange:;
- (BOOL)textView:shouldChangeTextInRange:replacementText:;
- (void)_didTapTextView;
- (void)_updateHeightConstraint;
- (void)setTextDidChange:;
@end
