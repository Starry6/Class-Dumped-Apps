@interface WKFormSelectControl : WKFormPeripheralBase
@property (nonatomic) NSString selectFormPopoverTitle;
- (id)initWithView:;
- (BOOL)selectFormAccessoryHasCheckedItemAtRow:;
- (id)selectFormPopoverTitle;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)selectRow:inComponent:extendingSelection:;
@end
