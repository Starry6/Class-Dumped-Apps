@interface AWEUserLoginPhoneNumberComponent : NSObject
@property (nonatomic) AWEUserLoginBaseViewModel<AWEUserLoginViewModelSecondaryProtocol> viewModel;
@property (nonatomic) DYPhoneNumberInputView phoneView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)trackFillFirstPhoneNumber:;
- (void)trackClearPhoneNumberFromDeleteTypeString:;
- (void)setupComponentView;
- (id)initWithLoginViewModel:;
- (id)phoneView;
- (void)setPhoneView:;
- (id)viewModel;
- (unsigned long long)componentType;
- (void)viewWillAppear;
- (void)setViewModel:;
- (void).cxx_destruct;
- (id)componentView;
@end
