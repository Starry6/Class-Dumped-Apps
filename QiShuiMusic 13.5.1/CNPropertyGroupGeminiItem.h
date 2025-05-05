@interface CNPropertyGroupGeminiItem : CNPropertyGroupItem
@property (nonatomic) CNMutableContact editingContact;
@property (nonatomic) CNGeminiResult geminiResult;
@property (nonatomic) <CNUIGeminiDataSourceDelegate> geminiUpdateDelegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)displayLabel;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isValidValue:;
- (id)displayValue;
- (void)setGeminiResult:;
- (id)editingContact;
- (void)setEditingContact:;
- (id)geminiResult;
- (void)geminiDataSourceDidUpdate:;
- (id)displayStringForValue:;
- (BOOL)canRemove;
- (BOOL)isEquivalentToItem:whenEditing:;
- (void)updateLabeledValueWithValue:;
- (id)geminiUpdateDelegate;
- (void)setGeminiUpdateDelegate:;
@end
