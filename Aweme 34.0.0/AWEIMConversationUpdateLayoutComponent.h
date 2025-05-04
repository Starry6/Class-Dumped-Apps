@interface AWEIMConversationUpdateLayoutComponent : AWEIMComponentBase
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)hostVC_viewDidLoad;
- (void)componentDidMounted:;
- (void)p_updateLayout;
- (void)updateConversationLayout;
- (void)updateUnreadTipsInteractor;
+ (BOOL)canCreateComponentWithContext:;
@end
