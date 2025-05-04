@interface AWEIMConversationTargetMessageOperationComponent : AWEIMComponentBase
@property (nonatomic) NSString anchorMessageID;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)hostVC_viewDidLoad;
- (void)componentDidMounted:;
- (id)anchorMessageID;
- (void)setAnchorMessageID:;
- (void)scrollToTargetMessage:;
- (void).cxx_destruct;
+ (BOOL)canCreateComponentWithContext:;
@end
