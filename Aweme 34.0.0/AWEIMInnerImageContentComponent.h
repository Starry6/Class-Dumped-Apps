@interface AWEIMInnerImageContentComponent : AWEIMNormalImageContentComponent
@property (nonatomic) AWEIMImageMessage subMessage;
@property (nonatomic) AWEIMNormalImageMessageViewModel originMessageViewModel;
@property (nonatomic) <AWEIMNativeDynamicContentInterface> contentService;
@property (nonatomic) Q orientation;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentDidMounted:;
- (BOOL)enableDisplay;
- (id)contentService;
- (void)setContentService:;
- (void)didTapCoverAction;
- (id)specializedViewModel;
- (void)reloadImageFromVM;
- (void)setOriginMessageViewModel:;
- (id)originMessageViewModel;
- (void)setSubMessage:;
- (void)p_customizePresenter;
- (id)subMessage;
- (id)displayMessage;
- (void)setOrientation:;
- (void).cxx_destruct;
- (unsigned long long)orientation;
+ (BOOL)canCreateComponentWithContext:;
+ (id)componentWithContext:;
@end
