@interface DOMHTMLOptGroupElement : DOMHTMLElement
@property (nonatomic) BOOL disabled;
@property (nonatomic) NSString label;
- (id)createSelectedItem;
- (id)createPickerCell;
- (void)populateCell:;
- (id)itemTitle;
- (void)setDisabled:;
- (void)setLabel:;
- (BOOL)disabled;
- (id)label;
@end
