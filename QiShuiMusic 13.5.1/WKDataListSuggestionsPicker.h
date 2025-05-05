@interface WKDataListSuggestionsPicker : WKDataListSuggestionsControl
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void).cxx_destruct;
- (void)invalidate;
- (id).cxx_construct;
- (long long)numberOfComponentsInPickerView:;
- (long long)pickerView:numberOfRowsInComponent:;
- (id)pickerView:titleForRow:forComponent:;
- (id)initWithInformation:inView:;
- (void)updateWithInformation:;
- (void)showSuggestionsDropdown:activationType:;
@end
