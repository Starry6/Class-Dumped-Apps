@interface AWEIMConversationLightCameraComponent : AWEIMComponentBase
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentDidMounted:;
- (void)requireShootingForCell:type:completion:;
- (id)lightCameraReplyCompletionBlock;
- (id)tableView;
- (id)conversation;
+ (BOOL)canCreateComponentWithContext:;
@end
