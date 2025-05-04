@interface AWEUserLoginAvatarComponent : NSObject
@property (nonatomic) AWEUserLoginBaseViewModel<AWEUserLoginViewModelSecondaryProtocol> viewModel;
@property (nonatomic) AWEUserLoginAvatarView avatarView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setupComponentView;
- (id)initWithLoginViewModel:;
- (void)setAvatarView:;
- (id)viewModel;
- (id)avatarView;
- (unsigned long long)componentType;
- (void)setViewModel:;
- (void).cxx_destruct;
- (id)componentView;
@end
