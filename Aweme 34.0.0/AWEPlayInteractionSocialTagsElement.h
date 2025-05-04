@interface AWEPlayInteractionSocialTagsElement : AWEPlayInteractionLeftElement
@property (nonatomic) UIView<AWENearbySocialTagsViewProtocol> socialTagsView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didFinishLogin;
- (void)initializeElement;
- (void)viewController_willDisplay;
- (id)activateInfoWithData:;
- (void)layoutElementView;
- (void)dynamicWidthRemakeLayout;
- (void)__setupUI;
- (id)socialTagsView;
- (void)setSocialTagsView:;
- (void)__updateSocialTag;
- (void)dealloc;
- (void)viewDidLoad;
- (void).cxx_destruct;
+ (id)activateInfoWithContext:;
@end
