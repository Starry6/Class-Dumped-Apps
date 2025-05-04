@interface AWEIMMessageAccountCardComponent : AWEIMFlexComponent
- (void)afterInitialComponentAllResolved:;
- (void)needUpdateDisplayWithContextOptions:;
- (void)componentDidMounted:;
- (void)p_transferToProfileWithUserID:secUserID:additionalParams:;
- (void)p_avatarDidTapped;
- (id)displayMessage;
- (id)conversation;
+ (BOOL)canCreateComponentWithContext:;
@end
