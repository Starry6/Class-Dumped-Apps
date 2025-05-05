@interface WKOptionPickerCell : UIPickerContentView
@property (nonatomic) BOOL disabled;
- (void)setDisabled:;
- (id)init;
- (BOOL)disabled;
- (BOOL)_isSelectable;
- (id)initWithOptionItem:;
@end
