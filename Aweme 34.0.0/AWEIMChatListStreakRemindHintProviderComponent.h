@interface AWEIMChatListStreakRemindHintProviderComponent : AWEIMChatListHintProviderComponentBase
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentDidMounted:;
- (unsigned long long)typeOfProvidingHint;
- (unsigned long long)priorityOfProvidingHint;
- (void)reloadHintWithCellContext:;
- (BOOL)isCompatibleWithTimeText;
- (void)imStreakDataDidUpdateWithConversation:;
- (void)updateCellComponentWhenChatUpdate:;
- (void)didDisplayedHint:cellContext:;
- (void)updateHintWhenFlameInfoChangeWithCellContext:;
- (void)__updateHintWithContent:conversationId:;
- (void)updateHintVMWithChatModel:;
- (id)hintTextWithChatModel:isRecoverStatus:;
- (void)dealloc;
+ (BOOL)canCreateComponentWithContext:;
@end
