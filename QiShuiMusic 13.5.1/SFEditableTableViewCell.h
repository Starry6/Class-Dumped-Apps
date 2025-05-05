@interface SFEditableTableViewCell : UITableViewCell
@property (nonatomic) BOOL enabled;
@property (nonatomic) <SFEditableTableViewCellDelegate> delegate;
- (void)setDelegate:;
- (void)tintColorDidChange;
- (id)delegate;
- (void)setEnabled:;
- (void)copy:;
- (void).cxx_destruct;
- (BOOL)canPerformAction:withSender:;
- (BOOL)isEnabled;
- (id)initWithEnabledState:;
- (void)_updateTextFieldTextColor;
@end
