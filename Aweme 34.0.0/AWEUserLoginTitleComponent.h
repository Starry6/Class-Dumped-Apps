@interface AWEUserLoginTitleComponent : NSObject
@property (nonatomic) AWEUserLoginBaseViewModel<AWEUserLoginViewModelSecondaryProtocol> viewModel;
@property (nonatomic) AWEUserLoginTitleView titleView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setupComponentView;
- (id)initWithLoginViewModel:;
- (id)guideTitleFont;
- (id)titleView;
- (void)setTitleView:;
- (id)viewModel;
- (unsigned long long)componentType;
- (id)titleFont;
- (id)subTitleText;
- (void)setViewModel:;
- (void).cxx_destruct;
- (id)componentView;
- (id)subTitleFont;
@end
