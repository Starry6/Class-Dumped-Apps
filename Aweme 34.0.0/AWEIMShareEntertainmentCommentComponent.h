@interface AWEIMShareEntertainmentCommentComponent : AWEIMFlexComponent
@property (nonatomic) AWEIMEntertainmentCommentShareMessageViewModel messageViewModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) AWEIMComponentManager componentManager;
@property (nonatomic) q scene;
- (id)componentContext;
- (id)componentsNameArrayWithContext:;
- (void)setComponentManager:;
- (void)needUpdateDisplayWithContextOptions:;
- (void)componentDidMounted:;
- (void)cellVisibleLifeCycleChanged:;
- (id)messageViewModel;
- (void)setMessageViewModel:;
- (void)p_updateProps;
- (void)onClickSharedComment;
- (id)entCommentShareMessage;
- (id)displayMessage;
- (void)setScene:;
- (long long)scene;
- (void).cxx_destruct;
- (id)componentManager;
+ (BOOL)canCreateComponentWithContext:;
@end
