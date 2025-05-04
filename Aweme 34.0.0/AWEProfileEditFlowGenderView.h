@interface AWEProfileEditFlowGenderView : AWEProfileEditFlowStepView
@property (nonatomic) DUXPicker picker;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)configWithViewModel:;
- (long long)componentCountInDUXPicker:;
- (long long)duxPicker:numberOfRowsInComponent:;
- (id)duxPicker:titleForRow:forComponent:;
- (void)duxPicker:didSelectRow:inComponent:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)picker;
- (void)setPicker:;
@end
