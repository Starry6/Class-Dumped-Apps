@interface CNPropertyGeminiEditingCell : CNPropertySimpleCell
@property (nonatomic) CNGeminiPickerController geminiPicker;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithStyle:reuseIdentifier:;
- (void).cxx_destruct;
- (id)variableConstraints;
- (double)minCellHeight;
- (BOOL)shouldPerformDefaultAction;
- (void)performDefaultAction;
- (void)picker:didPickItem:;
- (void)pickerDidCancel:;
- (id)geminiPicker;
- (void)setGeminiPicker:;
- (void)geminiDataSourceDidUpdate:;
- (id)geminiItem;
+ (BOOL)shouldIndentWhileEditing;
+ (BOOL)wantsChevron;
+ (BOOL)wantsHorizontalLayout;
@end
