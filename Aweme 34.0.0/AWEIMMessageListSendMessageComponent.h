@interface AWEIMMessageListSendMessageComponent : AWEIMComponentBase
@property (nonatomic) <AWEIMMessageListDataInterface> dataService;
@property (nonatomic) <AWEIMMessageTrackInteractorInterface> tracker;
@property (nonatomic) <AWEIMInputVIewControllerAction> inputAction;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)dataService;
- (void)componentDidMounted:;
- (void)setDataService:;
- (void)sendMessage:mentionUsers:;
- (void)sendMessageWithContext:;
- (void)checkAndSendMessageWithBlock:;
- (void)checkUserSendMessagePrivilegeWithCompletion:messageType:;
- (id)tracker;
- (void)setTracker:;
- (void).cxx_destruct;
- (void)sendMessage:;
- (void)setInputAction:;
- (id)inputAction;
+ (BOOL)canCreateComponentWithContext:;
+ (id)lazyComponentWakeupInterface;
@end
