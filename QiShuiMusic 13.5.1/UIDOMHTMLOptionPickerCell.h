@interface UIDOMHTMLOptionPickerCell : UIPickerContentView
@property (nonatomic) BOOL disabled;
- (void)setDisabled:;
- (BOOL)disabled;
- (id)initCommon;
- (id)initWithHTMLOptionNode:;
- (BOOL)_isSelectable;
@end
