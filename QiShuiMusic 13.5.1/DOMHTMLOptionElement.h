@interface DOMHTMLOptionElement : DOMHTMLElement
@property (nonatomic) BOOL disabled;
@property (nonatomic) DOMHTMLFormElement form;
@property (nonatomic) NSString label;
@property (nonatomic) BOOL defaultSelected;
@property (nonatomic) BOOL selected;
@property (nonatomic) NSString value;
@property (nonatomic) NSString text;
@property (nonatomic) NSInteger index;
- (id)createSelectedItem;
- (id)createPickerCell;
- (void)populateCell:;
- (id)itemTitle;
- (BOOL)selected;
- (void)setDisabled:;
- (void)setSelected:;
- (void)setLabel:;
- (BOOL)disabled;
- (id)label;
- (int)index;
- (void)setValue:;
- (id)value;
- (id)text;
- (id)form;
- (BOOL)defaultSelected;
- (void)setDefaultSelected:;
@end
