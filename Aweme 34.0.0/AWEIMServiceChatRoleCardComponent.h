@interface AWEIMServiceChatRoleCardComponent : AWEIMFlexComponent
@property (nonatomic) BOOL followFloatViewDisplaying;
@property (nonatomic) q scene;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)needUpdateDisplayWithContextOptions:;
- (void)componentDidMounted:;
- (void)cellVisibleLifeCycleChanged:;
- (void)cellWillDisplay:;
- (void)handleFollowedNotification:;
- (void)handleUnFollowedNotification:;
- (void)p_transferToProfileWithUserID:secUserID:additionalParams:;
- (void)transferToIdentify;
- (void)transToUserProfile;
- (void)willShowFloattingView:;
- (void)willDismissFloattingView:;
- (void)onFollowBtnClicked:;
- (BOOL)followFloatViewDisplaying;
- (void)setFollowFloatViewDisplaying:;
- (id)displayMessage;
- (void)setScene:;
- (void)dealloc;
- (long long)scene;
+ (BOOL)canCreateComponentWithContext:;
@end
