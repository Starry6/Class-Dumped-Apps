@interface UIKBAutoFillTestTaggerView : UIView
@property (nonatomic) <UIKBAutoFillTestTaggerViewDelegate> delegate;
@property (nonatomic) NSArray tagRequests;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setDelegate:;
- (void)_updateTitle;
- (id)initWithFrame:;
- (id)delegate;
- (void).cxx_destruct;
- (long long)numberOfComponentsInPickerView:;
- (long long)pickerView:numberOfRowsInComponent:;
- (double)pickerView:rowHeightForComponent:;
- (id)pickerView:titleForRow:forComponent:;
- (void)pickerView:didSelectRow:inComponent:;
- (void)_previousBarButtonAction:;
- (void)_nextBarButtonAction:;
- (void)_doneBarButtonAction:;
- (void)setTagRequests:;
- (id)_formTypes;
- (id)_textFieldTypes;
- (void)_performTagRequest:;
- (void)_updateToolbarButtons;
- (id)tagRequests;
@end
