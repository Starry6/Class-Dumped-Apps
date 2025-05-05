@interface UIWebSelectMultiplePicker : UIPickerView
@property (nonatomic) DOMHTMLSelectElement _selectionNode;
@property (nonatomic) NSArray _cachedItems;
@property (nonatomic) <UIWebSelectedItemPrivate> _singleSelectionItem;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (void)layoutSubviews;
- (id)controlView;
- (void)controlBeginEditing;
- (void)controlEndEditing;
- (long long)numberOfComponentsInPickerView:;
- (long long)pickerView:numberOfRowsInComponent:;
- (id)pickerView:viewForRow:forComponent:reusingView:;
- (id)initWithDOMHTMLSelectElement:cachedItems:singleSelectionItem:singleSelectionIndex:multipleSelection:;
- (int)_itemIndexForRowIndex:;
- (void)pickerView:row:column:checked:;
- (id)_selectionNode;
- (void)set_selectionNode:;
- (id)_cachedItems;
- (void)set_cachedItems:;
- (id)_singleSelectionItem;
- (void)set_singleSelectionItem:;
@end
