@interface AWEUserLoginNickComponent : NSObject
@property (nonatomic) AWEUserLoginBaseViewModel<AWEUserLoginViewModelSecondaryProtocol> viewModel;
@property (nonatomic) AWEUserLoginNickView nickView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setupComponentView;
- (id)initWithLoginViewModel:;
- (void)setNickView:;
- (id)nickView;
- (id)viewModel;
- (unsigned long long)componentType;
- (void)setViewModel:;
- (void).cxx_destruct;
- (id)componentView;
@end
