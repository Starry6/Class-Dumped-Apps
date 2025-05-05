@interface IESLiveInteractDynamicLayout1V6HorizontalAudienceComponent : IESLiveInteractComponentBase
@property (nonatomic) <IESLiveCompoundSubscription> disposable;
@property (nonatomic) <IESLiveInteractionLayoutRouter> layoutRouter;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)bindLinkerUsersManager;
- (void)componentBindContext;
- (void)componentMount;
- (void)componentUnmount;
- (id)disposable;
- (void)disposableIfNeeded;
- (BOOL)isVideoChatDynamicLayout1V6Horizontal;
- (id)layoutRouter;
- (BOOL)rotationForbidden;
- (void)setDisposable:;
- (void)setLayoutRouter:;
- (void)switchToPortraitOrientationIfNeededWithActiveList:;
- (id)usersManager;
- (void).cxx_destruct;
+ (BOOL)componentShouldActive:;
@end
