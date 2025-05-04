@interface AWEUserLoginCarrierPhoneComponent : NSObject
@property (nonatomic) AWEUserLoginBaseViewModel<AWEUserLoginViewModelSecondaryProtocol> viewModel;
@property (nonatomic) AWEUserLoginCarrierPhoneView carrierPhoneView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setupComponentView;
- (id)initWithLoginViewModel:;
- (id)carrierPhoneView;
- (void)setCarrierPhoneView:;
- (id)viewModel;
- (unsigned long long)componentType;
- (void)setViewModel:;
- (void).cxx_destruct;
- (id)componentView;
@end
