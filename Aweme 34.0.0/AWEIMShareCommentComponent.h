@interface AWEIMShareCommentComponent : AWEIMFlexComponent
@property (nonatomic) AWEIMVideoCommentShareTableViewCellViewModel cellViewModel;
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
- (id)cellViewModel;
- (void)setCellViewModel:;
- (void)p_updateProps;
- (id)commentShareMessage;
- (void)onClickSharedComment;
- (id)displayMessage;
- (void)setScene:;
- (long long)scene;
- (void).cxx_destruct;
- (id)componentManager;
+ (BOOL)canCreateComponentWithContext:;
@end
